#ifndef CXMLPARSER_H
#define CXMLPARSER_H

#include "readxmlprofile.h"
#include "ielementtag.h"
#include "nelement.h"


class CXMLParser
{
public:
    CXMLParser();
    void pareser();
private:
    ReadXmlProfile* xmlProfile_;
    QVector<IElementTag*> xmlProfilePerser_;
};

#endif // CXMLPARSER_H
