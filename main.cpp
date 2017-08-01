#include <QCoreApplication>

#include "readxmlprofile.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ReadXmlProfile xmlProfile("xmlProfile.xml");

    return a.exec();
}
