#ifndef AELEMENETTAG_H
#define AELEMENETTAG_H

#include <QVector>


class IElementTag
{
public:
    IElementTag();
    virtual void addElement(IElementTag* element) = 0;
    virtual ~IElementTag() = 0;
private:
    QVector<IElementTag*> vElenets_;
};

#endif // AELEMENETTAG_H
