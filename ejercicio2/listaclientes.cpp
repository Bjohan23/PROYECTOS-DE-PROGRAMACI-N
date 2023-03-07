#include "listaclientes.h"
#include "basicas.h"


int listaclientes::getNcli() const
{
    return ncli;
}

void listaclientes::setNcli(int value)
{
    ncli = value;
}

nodoclientes *listaclientes::getCab() const
{
    return cab;
}

void listaclientes::setCab(nodoclientes *value)
{
    cab = value;
}

void listaclientes::insertarClientes(clientes *cli)
{
    nodoclientes *auxiliar = new nodoclientes();
    nodoclientes *temporal = new nodoclientes();
    temporal->setInfo(cli);
    temporal->setSgte(NULL);
    if( this->cab == NULL){
        this->cab = temporal;
    }else{
        auxiliar = this->cab;
        while( auxiliar->getSgte() != NULL ){
            auxiliar = auxiliar->getSgte();
        }
        auxiliar->setSgte(temporal);
    }
    this->ncli++;
}

void listaclientes::registrarClientes()
{
    clientes *c = new clientes();
    c->leerClientes();
    this->insertarClientes(c);
}

void listaclientes::mostrarClientes()
{
    system("cls");
   int contador=6;
    nodoclientes *aux = new nodoclientes();
    aux = this->getCab();

    while( aux != NULL ){
        aux->getInfo()->encabezadoClientes(contador);
        aux = aux->getSgte();
        contador++;
    }

}
listaclientes::listaclientes()
{
    this->cab  = NULL;
    this->ncli = 0;
}

listaclientes::~listaclientes()
{

}

