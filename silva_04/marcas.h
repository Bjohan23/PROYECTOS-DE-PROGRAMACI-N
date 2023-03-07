#include"iostream"
#ifndef MARCAS_H
#define MARCAS_H

using namespace std;
class Marcas
{
private:
    string codigo;
    string nomMarca;
public:
    Marcas();
    ~Marcas();
    string getCodigo() const;
    void setCodigo(const string &value);
    string getNomMarca() const;
    void setNomMarca(const string &value);
    void leer_Marca();
    string leerTexto(string mensaje);
    void gotoxy(int x,int y);
    void Mostrar_Marca(int pos);
};


#endif // MARCAS_H
