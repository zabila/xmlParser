#include "celementwithcontent.h"

CElementWithContent::CElementWithContent()
{

}

void CElementWithContent::addElement(IElementTag *element)
{
    vElementsEmpty_.push_back(element);
}

CElementWithContent::~CElementWithContent()
{
    for(auto element: vElementsEmpty_ ){
        delete element;
        element = nullptr;
    }
}
