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
    QRegExp re( "<([^>]+)>" );

    int lastPos = 0;
        while( ( lastPos = re.indexIn( xmlProfile_->getXmlProfile(), lastPos ) ) != -1 ) {
            lastPos += re.matchedLength();
            qDebug() << re.cap( 0 ) << ":" << re.cap( 1 );
        }
}
