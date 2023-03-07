#include "butacas.h"
#include <iostream>
#include "basicas.h"
#include "sstream"

using namespace std;



string butacas::getCodigo() const
{
    return codigo;
}

void butacas::setCodigo(const string &value)
{
    codigo = value;
}


bool butacas::getEstado() const
{
    return estado;
}

void butacas::setEstado(bool value)
{
    estado = value;
}
butacas::butacas()
{
    this->estado = false;

}

butacas::~butacas()
{
    
}

void butacas::leerButacas()
{
    basicas::gotoxy(40, 14);this->codigo = basicas::leerTexto("CODIGO: ");
}

void butacas::confirmarButacas()
{
    system("cls");
    basicas::gotoxy(40, 13); cout<<"  ---BUTACA REGISTRADA---  ";
    basicas::gotoxy(40, 14); cout<<"Codigo: "<<this->codigo;
    basicas::gotoxy(40, 20);cout<<system("pause");
}

void butacas::generadorCodigoButacas()
{
    string aux = "B000";
    stringstream valor;
    valor<<butacas::auxCod;
    string numStr = valor.str();
    aux.append(numStr);
    this->codigo = aux;
    butacas::auxCod++;
}

void butacas::encabezadoButacas( int x )
{
        basicas::gotoxy(20,5); cout << "CODIGO BUTACA";
        basicas::gotoxy(50,5); cout << "ESTADO";
        basicas::gotoxy(20,x); cout << this->codigo;
        if( this->estado == true ){
        basicas::gotoxy(50,x); cout <<"OCUPADA" ;
        }
        basicas::gotoxy(50,x); cout <<"Desocupada";
     }

void butacas::mostrarButacas(int pos)
{
    basicas::gotoxy(25,pos); cout<<this->codigo;
    basicas::gotoxy(20,pos); cout<<this->estado;
}

void butacas::titulo( int x )
{
    basicas::gotoxy(26,x); cout << "CODIGO BUTACA";
    basicas::gotoxy(21,x); cout << "ESTADO";
}

