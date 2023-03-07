#include "clientes.h"
#ifndef NODOCLIENTES_H
#define NODOCLIENTES_H


class nodoclientes
{
private:
    nodoclientes *sgte;
    clientes *info;
public:
    nodoclientes();
    ~nodoclientes();
    nodoclientes *getSgte() const;
    void setSgte(nodoclientes *value);
    clientes *getInfo() const;
    void setInfo(clientes *value);
};

#endif // NODOCLIENTES_H
