#include "listaventas.h"


nodoventas *listaventas::getCab() const
{
    return cab;
}

void listaventas::setCab(nodoventas *value)
{
    cab = value;
}

int listaventas::getNVentas() const
{
    return nVentas;
}

void listaventas::setNVentas(int value)
{
    nVentas = value;
}

void listaventas::registrarVentas()
{
    ventas *v = new ventas();
    v->leerVentas();
    this->insertarVentas(v);
}

void listaventas::insertarVentas(ventas *v)
{
    nodoventas *aux  = new nodoventas();
    nodoventas *temp = new nodoventas();
    temp->setInfo(v);
    temp->setSgte(NULL);
    if(this->cab == NULL){
        this->cab = temp;
    }else{
        aux = this->cab;
        while(aux->getSgte() != NULL){
            aux->setSgte(aux->getSgte());
        }
        aux->setSgte(temp);
    }
    this->nVentas++;

}
listaventas::listaventas()
{
    this->cab = NULL;
    this->nVentas = 0;
}

listaventas::~listaventas()
{
    
}

