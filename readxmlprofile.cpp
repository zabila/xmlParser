#include "readxmlprofile.h"

ReadXmlProfile::ReadXmlProfile(const std::string &patchName)
{

}

void ReadXmlProfile::readTextAllXmlProfile(const QString &patchName)
{
   QFile textFile(patchName);
   if (!textFile.open(QIODevice::ReadOnly | QIODevice::Text))
   {

   }
   else
   {
       textFile.open(QIODevice::ReadOnly | QIODevice::Text);
       QTextStream stream(&textFile);
   }



}
