#include "ventas.h"
#include "basicas.h"

string ventas::getNombre() const
{
    return nombre;
}

void ventas::setNombre(const string &value)
{
    nombre = value;
}

float ventas::getPrecio() const
{
    return precio;
}

void ventas::setPrecio(float value)
{
    precio = value;
}

bool ventas::getAbonado() const
{
    return abonado;
}

void ventas::setAbonado(bool value)
{
    abonado = value;
}

string ventas::getCodigo() const
{
    return codigo;
}

void ventas::setCodigo(const string &value)
{
    codigo = value;
}

void ventas::leerVentas()
{
    system("cls");
    basicas::gotoxy(40,10);
}
ventas::ventas()
{
    this->precio = 0;
    
}

ventas::~ventas()
{
    
}

