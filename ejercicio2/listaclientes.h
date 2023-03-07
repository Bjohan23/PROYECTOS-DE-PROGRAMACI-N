#include<nodoclientes.h>

#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H


class listaclientes
{
private:
    nodoclientes *cab;
    int ncli;
public:
    listaclientes();
    ~listaclientes();
    int getNcli() const;
    void setNcli(int value);
    nodoclientes *getCab() const;
    void setCab(nodoclientes *value);

    void insertarClientes(clientes *cli);
    void registrarClientes();
    void mostrarClientes();
};

#endif // LISTACLIENTES_H
