#include "nodo_marcas.h"


Marcas *Nodo_Marcas::getMarc() const
{
    return Marc;
}

void Nodo_Marcas::setMarc(Marcas *value)
{
    Marc = value;
}

Nodo_Marcas *Nodo_Marcas::getSgte() const
{
    return sgte;
}

void Nodo_Marcas::setSgte(Nodo_Marcas *value)
{
    sgte = value;
}
Nodo_Marcas::Nodo_Marcas()
{

}

Nodo_Marcas::~Nodo_Marcas()
{

}

