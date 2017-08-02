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
    const QString& getXmlProfile() const;

private:
    QString m_xmlProfile_;
};

#endif // READXMLPROFILE_H
