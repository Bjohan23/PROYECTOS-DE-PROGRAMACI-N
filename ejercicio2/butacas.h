#include<iostream>
using namespace std;

#ifndef BUTACAS_H
#define BUTACAS_H


class butacas
{
private:
    static int auxCod; //Complemento de codigo


public:
    string codigo;
    bool estado;
     butacas();
    ~butacas();

     //
     void leerButacas();
     void confirmarButacas();
     void generadorCodigoButacas();
     void encabezadoButacas( int x );
     void mostrarButacas(int pos);
     void titulo( int x);
     string getCodigo() const;
     void setCodigo( const string &value);
     bool getEstado() const;
     void setEstado(bool value);
};

#endif // BUTACAS_H
