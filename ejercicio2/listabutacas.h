#include "nodobutacas.h"

#ifndef LISTABUTACAS_H
#define LISTABUTACAS_H


class listabutacas
{
private:
    nodobutacas *cab;
    int nBut;
public:
    listabutacas();
    ~listabutacas();
    int getNBut() const;
    void setNBut(int value);
    nodobutacas *getCab() const;
    void setCab(nodobutacas *value);

    //
    void registarButacas();
    void insertarButacas(butacas *b);
    void ListarButas();
    void auxButacas();
    nodobutacas *escogerButacas();
    int nButRtrn();
};

#endif // LISTABUTACAS_H
