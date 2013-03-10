#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <math.h>
#include <iostream>
#include "quests.h"

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
    questCount = 0;
    questGenerator = new Quests();

    ui->progressBar->setFormat("%v/%m XP");
    ui->progressBar->setMaximum(currentMaxXp);
    ui->questProgress->setMaximum(questLength);

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

/* Adds one XP to character and quest XP every tick. Checks if character is
 * due for a level up or a new quest. Updates progress bars.
 */
void MainWindow::timerTick() {
    xp++;
    questTime++;

    if(xp >= currentMaxXp)
        this->levelUp();
    if(questTime >= questLength)
        this->nextQuest();

    ui->progressBar->setValue(xp);
    ui->questProgress->setValue(questTime);
}

/* Adds 1 to level and resets XP. Updates labels as well.
 *
 */
void MainWindow::levelUp() {
    level++;
    xp = 0;

    currentMaxXp = ceil(currentMaxXp * XP_LEVEL_UP_FACTOR);
    ui->progressBar->setMaximum(currentMaxXp);
    ui->lbl_level->setText((new QString("Level %1"))->arg(QString::number(level)));
}

/* Changes the current quest's title to 'completed' and adds a random quest.
 * Resets quest xp and increases quest length. Rewards player with XP for
 * completing quests, based on how many quests have been completed.
 */
void MainWindow::nextQuest() {
    ui->questList->item(0)->setText(ui->questList->item(0)->text() + "completed");
    questCount++;
    xp += ceil(sqrt(questCount));
    questTime = 0;
    questLength = ceil(questLength * QUEST_LEVEL_UP_FACTOR);

    ui->questList->insertItem(0, QString::fromStdString(questGenerator->getQuest()));
    ui->questProgress->setMaximum(questLength);
}
