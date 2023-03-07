#include "iostream"
#include "listabutacas.h"
#include "listatrabajadores.h"
#include "listaclientes.h"

#ifndef ZONAS_H
#define ZONAS_H

using namespace std;

class zonas
{
private:
    string horario;
    string nombre;
    int precio;
    int aforo;
    listabutacas *lb;
    listatrabajadores *lt;
    listaclientes *lc;


public:
    zonas();
    ~zonas();
    //
    void leerZona();
    void confirmarZona();
    string getHorario() const;
    void setHorario(const string &value);
    string getNombre() const;
    void setNombre(const string &value);
    int getPrecio() const;
    void setPrecio(int value);
    int getAforo() const;
    void setAforo(int value);
    listabutacas *getLb() const;
    void setLb(listabutacas *value);
    listatrabajadores *getLt() const;
    void setLt(listatrabajadores *value);

    listaclientes *getLc() const;
    void setLc(listaclientes *value);
};

#endif // ZONAS_H
