#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QDialogButtonBox>
#include <QMainWindow>
#include <QDialog>
#include <QDialogButtonBox>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>
#include <QMenuBar>
#include <QObject>
#include <QTextEdit>


class MainWindow : public QDialog
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

private:
    void createMenu();

    QMenuBar *menuBar;
    QDialogButtonBox *buttonBox;
    QMenu *fileMenu;
    QAction *exitAction;
};

#endif // MAINWINDOW_H
