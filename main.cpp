#include <QApplication>
#include <QtWidgets>
#include "FenPrincipale.h"
#include "sqlite3.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    FenPrincipale fenetre;
    fenetre.show();

    return app.exec();
}
