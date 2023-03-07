#include <iostream>
#include<lista_marcas.h>
#ifndef LICORERIA_H
#define LICORERIA_H


class Licoreria
{
private:
    Lista_Marcas *LM;
public:
    Licoreria();
    ~Licoreria();
    Lista_Marcas *getLM() const;
    void setLM(Lista_Marcas *value);
    void gotoxy(int x,int y);
    int cuadro();
    int menu();
};

#endif // LICORERIA_H
