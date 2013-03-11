/*****************************************************************************
 * mainwindow.h                                                              *
 * Author: Qasim Ali                                                         *
 * Created: March 10, 2013                                                   *
 *---------------------------------------------------------------------------*
 * Class that creates the window and contains all widgets. Also handles the  *
 * creation and completion of quests, the addition of items, and leveling up *
 * the player.                                                               *
 * --------------------------------------------------------------------------*
 * Copyright 2013 Qasim Ali. Distributed under GNU GPL v3. For more          *
 * information, consult the LICENSE file located in this program's root      *
 * directory.                                                                *
 ****************************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include "quest.h"
#include "questgenerator.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    QTimer* timer;
    Quest* currentQuest;
    QuestGenerator* questGenerator;
    ItemGenerator* itemGenerator;

    int xp;
    int questTime;
    int level;
    int questCount;
    int currentMaxXp;
    int questLength;
    const int INITIAL_MAX_XP = 10;
    const int INITIAL_QUEST_TIME = 5;
    const double XP_LEVEL_UP_FACTOR = 1.25;
    const double QUEST_LEVEL_UP_FACTOR = 1.1;

    /* Adds 1 to level and resets XP and updates labels to match */
    void levelUp();

    /* Changes currentQuest to a new randomly generated one. Adds XP and Item
     * rewards to the player's current XP and inventory list.
     */
    void nextQuest();

    /* Returns the XP based on the algorithm (square root) of the quest count
     */
    int getQuestXP(int count);

    int getQuestLength(int length);

private slots:
    /* Adds one XP to character and quest XP every tick. Checks if character is
     * due for a level up or a new quest. Updates progress bars.
     */
    void timerTick();
};

#endif // MAINWINDOW_H
