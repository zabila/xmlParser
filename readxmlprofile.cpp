#include "readxmlprofile.h"

//-----------------------------------------------------------------------------
ReadXmlProfile::ReadXmlProfile(const QString &patchName)
//-----------------------------------------------------------------------------
{
    readTextAllXmlProfile(patchName);
}

//-----------------------------------------------------------------------------
void ReadXmlProfile::readTextAllXmlProfile(const QString &patchName)
//-----------------------------------------------------------------------------
{
   QFile textFile(patchName);
   if (!textFile.open(QIODevice::ReadOnly | QIODevice::Text))
   {
       qDebug(logWarning()) << "Error file is not open!";
   }
   else
   {
       textFile.open(QIODevice::ReadOnly | QIODevice::Text);
       QTextStream stream(&textFile);
       m_xmlProfile_ = stream.readAll();
   }
}
