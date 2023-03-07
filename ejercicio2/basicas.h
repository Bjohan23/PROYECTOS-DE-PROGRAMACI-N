#include <iostream>
#include <windows.h>
using namespace std;
#ifndef BASICAS_H
#define BASICAS_H


class basicas
{
public:
    static void gotoxy(int x,int y);
    static string leerTexto(string mensaje);
    static float leerReal(string mensaje);
    static unsigned short leerEdad(string mensaje);
    static int leerInt(string mensaje);

    basicas();
    ~basicas();
};

#endif // BASICAS_H
