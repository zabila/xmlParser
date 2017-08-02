#ifndef CEMPTYELEMENT_H
#define CEMPTYELEMENT_H

#include <QDebug>

#include "ielementtag.h"

class CEmptyElement : public IElementTag
{
public:
    explicit CEmptyElement(const QString& name);
    virtual void addElement(IElementTag* element) override;
    CEmptyElement();
private:
    QString m_nameElement_;
};

#endif // CEMPTYELEMENT_H
