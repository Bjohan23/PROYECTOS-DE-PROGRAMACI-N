#include<iostream>

using namespace std;

#ifndef VENTAS_H
#define VENTAS_H


class ventas
{
private:

    string nombre;
    string codigo;
    float precio;
    bool abonado;

public:
    ventas();
    ~ventas();
    string getNombre() const;
    void setNombre(const string &value);
    float getPrecio() const;
    void setPrecio(float value);
    bool getAbonado() const;
    void setAbonado(bool value);
    string getCodigo() const;
    void setCodigo(const string &value);

    //
    void leerVentas();
    void insertarVentas(ventas *v);
};

#endif // VENTAS_H
