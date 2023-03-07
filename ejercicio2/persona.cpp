#include "persona.h"


string Persona::getNombres() const
{
    return nombres;
}

void Persona::setNombres(const string &value)
{
    nombres = value;
}

string Persona::getApellidos() const
{
    return apellidos;
}

void Persona::setApellidos(const string &value)
{
    apellidos = value;
}

string Persona::getDNI() const
{
    return DNI;
}

void Persona::setDNI(const string &value)
{
    DNI = value;
}

unsigned short Persona::getEdad() const
{
    return edad;
}

void Persona::setEdad(unsigned short value)
{
    edad = value;
}
Persona::Persona()
{

}

Persona::~Persona()
{

}

