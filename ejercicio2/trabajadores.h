#include<iostream>

using namespace std;
#include "persona.h"
#ifndef TRABAJADORES_H
#define TRABAJADORES_H


class trabajadores: public Persona
{
private:


public:
    trabajadores();
    ~trabajadores();

    //
    void leerTrabajadores();
};

#endif // TRABAJADORES_H
