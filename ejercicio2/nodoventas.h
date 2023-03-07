#include "ventas.h"
#ifndef NODOVENTAS_H
#define NODOVENTAS_H


class nodoventas
{
private:
    ventas *info;
    nodoventas *sgte;
public:
    nodoventas();
    ~nodoventas();

    ventas *getInfo() const;
    void setInfo(ventas *value);
    nodoventas *getSgte() const;
    void setSgte(nodoventas *value);
};

#endif // NODOVENTAS_H
