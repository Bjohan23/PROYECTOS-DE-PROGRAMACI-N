#include "clientes.h"
#include "basicas.h"




string clientes::getCodigo() const
{
    return codigo;
}

void clientes::setCodigo(const string &value)
{
    codigo = value;
}


void clientes::leerClientes()
{
    basicas::gotoxy( 45, 14); cout<<"             REGISTRAR CLIENTES      ";
    basicas::gotoxy(40, 15); this->setNombres( basicas::leerTexto("Nombre :"));
    basicas::gotoxy(40, 16); this->setApellidos(basicas::leerTexto("APELLIDO: "));
    basicas::gotoxy(40, 17); this->setEdad( basicas::leerInt("EDAD: "));
    basicas::gotoxy(40, 17); this->codigo     = basicas::leerTexto("Codigo de butaca: ");
    basicas::gotoxy(40, 18); this->setDNI( basicas::leerTexto("DNI: "));
}

void clientes::encabezadoClientes(int x)
{
    basicas::gotoxy(5,5);  cout << "CODIGO BUTACA";
    basicas::gotoxy(5,x);  cout << this->codigo;

    basicas::gotoxy(20,5); cout << "NOMBRE";
    basicas::gotoxy(20,x);  cout << this->getNombres();

    basicas::gotoxy(35,5); cout << "APELLIDOS";
    basicas::gotoxy(35,x);  cout << this->getApellidos();

    basicas::gotoxy(55,5); cout << "EDAD";
    basicas::gotoxy(55,x);  cout << this->getEdad();

    basicas::gotoxy(65,5); cout << "DNI";
    basicas::gotoxy(65,x);  cout << this->getDNI();
 }

clientes::clientes()
{
    this->setEdad(0);
}

clientes::~clientes()
{
    
}

