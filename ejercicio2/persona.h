#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>

using namespace std;

class Persona
{
private:
    string nombres;
    string apellidos;
    string DNI;
    unsigned short edad;
public:
    Persona();
    ~Persona();
    string getNombres() const;
    void setNombres(const string &value);
    string getApellidos() const;
    void setApellidos(const string &value);
    string getDNI() const;
    void setDNI(const string &value);
    unsigned short getEdad() const;
    void setEdad(unsigned short value);
};

#endif // PERSONA_H
