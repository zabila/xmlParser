#include "celementwithcontent.h"

//-----------------------------------------------------------------------------
CElementWithContent::CElementWithContent(const QString &name):
    m_nameElement_(name)
//-----------------------------------------------------------------------------
{
    qDebug() << "Create CElement with content";
}

//-----------------------------------------------------------------------------
void CElementWithContent::addElement(IElementTag *element)
//-----------------------------------------------------------------------------
{
    vElementsEmpty_.push_back(element);
}

//-----------------------------------------------------------------------------
CElementWithContent::~CElementWithContent()
//-----------------------------------------------------------------------------
{
    for(auto element: vElementsEmpty_ ){
        delete element;
        element = nullptr;
    }
}
