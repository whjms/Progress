#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <math.h>
#include <iostream>
#include "itemgenerator.h"
#include "questgenerator.h"
#include "item.h"
#include "quest.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create timer to add 1 XP every second
    timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();

    xp = 0;
    level = 0;
    currentMaxXp = INITIAL_MAX_XP;
    questLength = INITIAL_QUEST_TIME;
    questTime = 0;
    questCount = 0;
    itemGenerator = new ItemGenerator();
    questGenerator = new QuestGenerator();
    currentQuest = questGenerator->getQuest(getQuestXP(INITIAL_QUEST_TIME),
                                           INITIAL_QUEST_TIME);

    ui->progressBar->setFormat("%v/%m XP");
    ui->progressBar->setMaximum(currentMaxXp);
    ui->questProgress->setMaximum(currentQuest->getLength());

    ui->lbl_level->setText((new QString("Level %1"))->arg(QString::number(level)));
    ui->questList->addItem("Selecting class...");

    connect(timer, SIGNAL(timeout()), this, SLOT(timerTick()));

    timerTick();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete questGenerator;
}

void MainWindow::timerTick() {
    xp++;
    questTime++;

    if(xp >= currentMaxXp)
        this->levelUp();
    if(questTime >= currentQuest->getLength())
        this->nextQuest();

    ui->progressBar->setValue(xp);
    ui->questProgress->setValue(questTime);
}

void MainWindow::levelUp() {
    level++;
    xp = 0;

    currentMaxXp = ceil(currentMaxXp * XP_LEVEL_UP_FACTOR);
    ui->progressBar->setMaximum(currentMaxXp);
    ui->lbl_level->setText((new QString("Level %1"))->arg(QString::number(level)));
}

void MainWindow::nextQuest() {
    questCount++;
    xp += currentQuest->getReward();
    ui->inventoryList->addItem(QString::fromStdString(currentQuest->getItem().toString()));

    currentQuest = questGenerator->getQuest(this->getQuestXP(questCount),
                                            this->getQuestLength(
                                                currentQuest->getLength()));

    questTime = 0;
    ui->questProgress->setMaximum(currentQuest->getLength());
    ui->questList->insertItem(0, QString::fromStdString(
                                  currentQuest->toString()));

}

int MainWindow::getQuestLength(int length) {
    return ceil(length * QUEST_LEVEL_UP_FACTOR);
}


int MainWindow::getQuestXP(int count) {
    return ceil(sqrt(count));
}
