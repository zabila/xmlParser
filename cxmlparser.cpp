#include "cxmlparser.h"


//-----------------------------------------------------------------------------
CXMLParser::CXMLParser():
    xmlProfile_(new ReadXmlProfile("xmlProfile.xml"))
//-----------------------------------------------------------------------------
{

}

//-----------------------------------------------------------------------------
void CXMLParser::pareser()
//-----------------------------------------------------------------------------
{
    QRegExp regNameTag( "<([^>]+)>([^>]+)<(/[^>]+)>" );

    int lastPos = 0;
    while( ( lastPos = regNameTag.indexIn( xmlProfile_->getXmlProfile(), lastPos ) ) != -1 ) {
        lastPos += regNameTag.matchedLength();
     // qDebug() << regNameTag.cap( 0 ) << ":" << regNameTag.cap(1) << ":" << regNameTag.cap(2) << ":" << regNameTag.cap(3);

        if(NElement::NAME == regNameTag.cap(1))
        {
        qDebug() << regNameTag.cap(2);
        }
        if(NElement::INDICATORS == regNameTag.cap(1))
        {
        qDebug() << regNameTag.cap(2);
        }
    }
}
