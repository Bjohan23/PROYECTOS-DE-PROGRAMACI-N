#include "nodoventas.h"


ventas *nodoventas::getInfo() const
{
    return info;
}

void nodoventas::setInfo(ventas *value)
{
    info = value;
}

nodoventas *nodoventas::getSgte() const
{
    return sgte;
}

void nodoventas::setSgte(nodoventas *value)
{
    sgte = value;
}
nodoventas::nodoventas()
{
    
}

nodoventas::~nodoventas()
{
    
}

