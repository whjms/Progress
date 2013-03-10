#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

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
    int xp;
    int questTime;
    int level;
    int currentMaxXp;
    int questLength;
    const int INITIAL_MAX_XP = 10;
    const int INITIAL_QUEST_TIME = 5;
    const double XP_LEVEL_UP_FACTOR = 1.25;
    const double QUEST_LEVEL_UP_FACTOR = 1.15;
    void levelUp();
    void nextQuest();

private slots:
    void timerTick();
};

#endif // MAINWINDOW_H
