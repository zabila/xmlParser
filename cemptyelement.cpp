#include "cemptyelement.h"

//-----------------------------------------------------------------------------
CEmptyElement::CEmptyElement(const QString &name):
    m_nameElement_(name)
//-----------------------------------------------------------------------------
{
    qDebug() << "Create Empty Element";
}

//-----------------------------------------------------------------------------
void CEmptyElement::addElement(IElementTag *element)
//-----------------------------------------------------------------------------
{


}


