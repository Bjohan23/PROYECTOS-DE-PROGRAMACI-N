#include "nodoventas.h"
#ifndef LISTAVENTAS_H
#define LISTAVENTAS_H


class listaventas
{
private:

    nodoventas *cab;
    int nVentas;
public:
    listaventas();
    ~listaventas();

    nodoventas *getCab() const;
    void setCab(nodoventas *value);
    int getNVentas() const;
    void setNVentas(int value);

    void registrarVentas();
    void insertarVentas(ventas *v);
};

#endif // LISTAVENTAS_H
