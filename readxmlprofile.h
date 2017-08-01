#ifndef READXMLPROFILE_H
#define READXMLPROFILE_H

#include <string>
#include <QFile>
#include <QTextStream>

class ReadXmlProfile
{
public:
    ReadXmlProfile(const std::string& patchName);
    void readTextAllXmlProfile(const QString& patchName);
private:
    QString xmlProfile_;
};

#endif // READXMLPROFILE_H
