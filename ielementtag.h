#ifndef AELEMENETTAG_H
#define AELEMENETTAG_H


class IElementTag
{
public:
    IElementTag();
    virtual void addElement(IElementTag* element) = 0;
    virtual ~IElementTag();

};

#endif // AELEMENETTAG_H
