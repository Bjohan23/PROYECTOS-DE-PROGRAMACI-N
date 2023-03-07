#include "marcas.h"
#ifndef NODO_MARCAS_H
#define NODO_MARCAS_H


class Nodo_Marcas
{
private:
    Marcas *Marc;
    Nodo_Marcas *sgte;
public:
    Nodo_Marcas();
    ~Nodo_Marcas();
    Marcas *getMarc() const;
    void setMarc(Marcas *value);
    Nodo_Marcas *getSgte() const;
    void setSgte(Nodo_Marcas *value);
};

#endif // NODO_MARCAS_H
