#include "zonas.h"
#include <iostream>
#include "basicas.h"

using namespace std;



string zonas::getHorario() const
{
    return horario;
}

void zonas::setHorario(const string &value)
{
    horario = value;
}

string zonas::getNombre() const
{
    return nombre;
}

void zonas::setNombre(const string &value)
{
    nombre = value;
}

int zonas::getPrecio() const
{
    return precio;
}

void zonas::setPrecio(int value)
{
    precio = value;
}

int zonas::getAforo() const
{
    return aforo;
}

void zonas::setAforo(int value)
{
    aforo = value;
}

listabutacas *zonas::getLb() const
{
    return lb;
}

void zonas::setLb(listabutacas *value)
{
    lb = value;
}

listatrabajadores *zonas::getLt() const
{
    return lt;
}

void zonas::setLt(listatrabajadores *value)
{
    lt = value;
}


listaclientes *zonas::getLc() const
{
    return lc;
}

void zonas::setLc(listaclientes *value)
{
    lc = value;
}
zonas::zonas()
{
    this->precio = 0;
    this->aforo  = 0;
    this->lt = new listatrabajadores();
    this->lb = new listabutacas();
    this->lc = new listaclientes();
}

zonas::~zonas()
{

}

void zonas::leerZona()
{
    system("cls");
    basicas::gotoxy(45, 14); cout<<"             REGISTRO UNA ZONA       ";
    basicas::gotoxy(40, 15); this->nombre   =  basicas::leerTexto("Nombre de la zona:");
    basicas::gotoxy(40, 16); this->precio   =  basicas::leerInt  ("Precio de entrada: ");
    basicas::gotoxy(40, 17); this->horario  =  basicas::leerTexto("HORARIO: ");
    basicas::gotoxy(40, 18); this->aforo    =  basicas::leerInt  ("Aforo MAXIMO: ");
}

void zonas::confirmarZona()
{
    system("cls");
    basicas::gotoxy(40, 10); cout<<"     ZONA REGISTRADA     ";
    basicas::gotoxy(40, 12); cout<<"Aforo MAXIMO :  "<<getAforo();
    basicas::gotoxy(40, 13); cout<<"Nombre: "<<getNombre();
    basicas::gotoxy(40, 14); cout<<"Precio : "<<getPrecio();
    basicas::gotoxy(40, 15); cout<<"Horario: "<<getHorario();
    basicas::gotoxy(40, 20); system("pause");
}

