#include "FenPrincipale.h"

FenPrincipale::FenPrincipale()
{
    setFixedSize(800, 500);

    /********************************************************************/
    /****************************menu buttons****************************/
    /********************************************************************/
    //main butonns
    QMenu *menuFichiers = menuBar()->addMenu("&fichiers");
    QMenu *menuEdition = menuBar()->addMenu("&Edition");
    QMenu *menuAffichage = menuBar()->addMenu("&Affichage");


    //menu action (fichiers)
    //recent files
    QMenu *fichiersRecents = menuFichiers->addMenu("Fichiers &récents");
    fichiersRecents->addAction("Fichier bidon 1.txt");
    fichiersRecents->addAction("Fichier bidon 2.txt");
    fichiersRecents->addAction("Fichier bidon 3.txt");


    //quit
    QAction *actionQuitter = new QAction("&Quitter", this);
    menuFichiers->addAction(actionQuitter);
    actionQuitter->setShortcut(QKeySequence("ctrl+Q"));
    //actionQuitter->setIcon(QIcon("filename.png"));
    connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));


    //menu action (Edition)
    //gras
    QAction *actionGras = new QAction("&Gras", this);
    menuEdition->addAction(actionGras);
    actionGras->setCheckable(false);


    //widget central
    QWidget *zoneCentrale = new QWidget;

    QLineEdit *nom = new QLineEdit;
    QLineEdit *prenom = new QLineEdit;
    QLineEdit *age = new QLineEdit;

    QFormLayout *layout = new QFormLayout;
    layout->addRow("votre nom", nom);
    layout->addRow("votre prénom", prenom);
    layout->addRow("votre age", age);


    /********************************************************************/
    /******************************toolbar*******************************/
    /********************************************************************/
    //main toolbar buttons
    QToolBar *toolBarFichiers = addToolBar("Fichiers");

    //toolbar actions (fichiers)
    //fontChoose
    QFontComboBox *fontChoose = new QFontComboBox;
    toolBarFichiers->addWidget(fontChoose);

    //quit
    toolBarFichiers->addAction(actionQuitter);



    /********************************************************************/
    /***************************zone centrale****************************/
    /********************************************************************/
    //creation layout
    zoneCentrale->setLayout(layout);
    //creation widget
    setCentralWidget(zoneCentrale);
}
