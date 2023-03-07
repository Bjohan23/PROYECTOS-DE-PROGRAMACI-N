#include "listatrabajadores.h"


nodotrabajadores *listatrabajadores::getCab() const
{
    return cab;
}

void listatrabajadores::setCab(nodotrabajadores *value)
{
    cab = value;
}

int listatrabajadores::getNTrab() const
{
    return nTrab;
}

void listatrabajadores::setNTrab(int value)
{
    nTrab = value;
}

void listatrabajadores::insertarTrabajadores( trabajadores *t )
{
    nodotrabajadores *aux  = new nodotrabajadores();
    nodotrabajadores *temp = new nodotrabajadores();
    temp->setInfo(t);
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
    this->nTrab++;
}

void listatrabajadores::registrarTrabajadores()
{
    trabajadores *t = new trabajadores();
    t->leerTrabajadores();
    this->insertarTrabajadores(t);
}


listatrabajadores::listatrabajadores()
{
    this->cab   = NULL ;
    this->nTrab = 0 ;
}

listatrabajadores::~listatrabajadores()
{

}

