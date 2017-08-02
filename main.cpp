#include <QCoreApplication>

#include "cxmlparser.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CXMLParser parser;
    parser.pareser();


    return a.exec();
}
