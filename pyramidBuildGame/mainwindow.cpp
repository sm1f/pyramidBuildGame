#include "mainwindow.h"

#include <QComboBox>
#include <QFormLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QSpinBox>
#include <QVBoxLayout>

MainWindow::MainWindow()
{
    createMenu();

    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok
                                     | QDialogButtonBox::Cancel);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    QVBoxLayout *mainLayout = new QVBoxLayout;

//    mainLayout->setMenuBar(menuBar);


    mainLayout->addWidget(buttonBox);

    setLayout(mainLayout);

    setWindowTitle(tr("Basic Layouts"));
}

MainWindow::~MainWindow()
{

}

void MainWindow::createMenu()
{
    menuBar = new QMenuBar;

    fileMenu = new QMenu(tr("&File"), this);
    exitAction = fileMenu->addAction(tr("E&xit"));
    menuBar->addMenu(fileMenu);

    connect(exitAction, SIGNAL(triggered()), this, SLOT(accept()));
}
