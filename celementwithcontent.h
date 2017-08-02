#ifndef CELEMENTWITHCONTENT_H
#define CELEMENTWITHCONTENT_H

#include <QVector>
#include <QDebug>

#include "ielementtag.h"
#include "nelement.h"
#include "celementwithcontent.h"
#include "cemptyelement.h"

class CElementWithContent : public IElementTag
{
public:
    explicit CElementWithContent(const QString& name);
    virtual void addElement(IElementTag *element) override;
    ~CElementWithContent();
private:
     QString m_nameElement_;
    QVector<IElementTag*> vElementsEmpty_;
};

#endif // CELEMENTWITHCONTENT_H
