#include "nodo_marcas.h"
#ifndef LISTA_MARCAS_H
#define LISTA_MARCAS_H


class Lista_Marcas
{
private:
    int nMarc;
    Nodo_Marcas *cab;
public:
    Lista_Marcas();
    ~Lista_Marcas();
    int getNMarc() const;
    void setNMarc(int value);
    Nodo_Marcas *getCab() const;
    void setCab(Nodo_Marcas *value);
    string leerTexto(string mensaje);
    void gotoxy(int x,int y);
    void registrar_Marca(Marcas *mar);
    void insertar_Marca();
    void listar_Marca();
    void auxMarca();
    Nodo_Marcas *elegirMarcas();
};

#endif // LISTA_MARCAS_H
