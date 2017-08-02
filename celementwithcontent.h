#ifndef CELEMENTWITHCONTENT_H
#define CELEMENTWITHCONTENT_H

#include <QVector>

#include "ielementtag.h"

class CElementWithContent : public IElementTag
{
public:
    CElementWithContent();
    virtual void addElement(IElementTag *element) override;
    ~CElementWithContent();
private:
    QVector<IElementTag*> vElementsEmpty_;
};

#endif // CELEMENTWITHCONTENT_H
