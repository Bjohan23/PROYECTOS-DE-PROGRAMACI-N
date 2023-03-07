#include<iostream>
#include<butacas.h>
#include <persona.h>
using namespace std;
#ifndef CLIENTES_H
#define CLIENTES_H


class clientes: public Persona
{
private:
    string codigo;

public:
    clientes();
    ~clientes();

    string getCodigo() const;
    void setCodigo(const string &value);

    void leerClientes();
    void encabezadoClientes( int x);

};

#endif // CLIENTES_H
