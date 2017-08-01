#ifndef READXMLPROFILE_H
#define READXMLPROFILE_H

#include <QString>
#include <QFile>
#include <QTextStream>

#include "logger.h"

class ReadXmlProfile
{
public:
    ReadXmlProfile(const QString& patchName);
    void readTextAllXmlProfile(const QString& patchName);
private:
    QString xmlProfile_;
};

#endif // READXMLPROFILE_H
