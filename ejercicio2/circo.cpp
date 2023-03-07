#include "circo.h"
#include <iostream>
#include "basicas.h"

listaventas *circo::getLv() const
{
    return lv;
}

void circo::setLv(listaventas *value)
{
    lv = value;
}

listazonas *circo::getLz() const
{
    return lz;
}

void circo::setLz(listazonas *value)
{
    lz = value;
}

circo::circo()
{
    this->lv = new listaventas();
    this->lz = new listazonas();
}

circo::~circo()
{

}

int circo::menu()
{
    int opc;
    system("cls");
    basicas::gotoxy(45, 10); cout<<"     Menu de opciones    ";
    basicas::gotoxy(40, 11); cout<<"[1] Registrar las zonas ";
    basicas::gotoxy(40, 12); cout<<"[2] Registrar Butacas";
    basicas::gotoxy(40, 13); cout<<"[3] Registrar los trabajadores";
    basicas::gotoxy(40, 14); cout<<"[4] Registrar las ventas de tickets";
    basicas::gotoxy(40, 15); cout<<"[5] Listar una zona y las butacas ocupadas y quien lo ocupa";
    basicas::gotoxy(40,16);  cout<<"[6] SALIR";
    do{
        basicas::gotoxy(40,17);cout<<"Ingresa una opcion: ";
        cin>>opc;
    }while(!( opc > 0 && opc < 7));
    return opc;
}
