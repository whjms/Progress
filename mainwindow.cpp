#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <math.h>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create timer to add 1 XP every second
    timer = new QTimer(this);
    timer->setInterval(100);
    timer->start();

    xp = 0;
    level = 0;
    currentMaxXp = INITIAL_MAX_XP;
    questLength = INITIAL_QUEST_TIME;
    questTime = 0;

    ui->progressBar->setFormat("%v/%m XP");
    ui->progressBar->setMaximum(currentMaxXp);

    ui->lbl_level->setText((new QString("Level %1"))->arg(QString::number(level)));
    ui->questList->addItem("Selecting class...");

    connect(timer, SIGNAL(timeout()), this, SLOT(timerTick()));

    timerTick();

}

MainWindow::~MainWindow()
{
    delete ui;
}

// Adds one XP to character and quest XP every second. Checks if character is
// due for a level up or a new quest.
void MainWindow::timerTick() {
    xp++;
    questTime++;

    if(xp == currentMaxXp)
        this->levelUp();
    if(questTime == questLength)
        this->nextQuest();

    ui->progressBar->setValue(xp);
}

// Adds 1 to level and resets XP. Updates
void MainWindow::levelUp() {
    level++;
    xp = 0;

    currentMaxXp = ceil(currentMaxXp * XP_LEVEL_UP_FACTOR);
    ui->progressBar->setMaximum(currentMaxXp);
    ui->lbl_level->setText((new QString("Level %1"))->arg(QString::number(level)));
}

/*void MainWindow::initItemVectors() {
    MainWindow::initItemTypeVector();
    MainWindow::initMaterialVector();
    MainWindow::initOriginVector();
    MainWindow::initQualityVector();
}*/

// Changes the current quest's title to 'completed' and adds a random quest.
// Resets quest xp and increases quest length
void MainWindow::nextQuest() {
    ui->questList->item(0)->setText(ui->questList->item(0)->text() + "completed");
    questTime = 0;
    questLength = ceil(questLength * QUEST_LEVEL_UP_FACTOR);
    std::cout << questLength << std::endl;
}
