#include "nodobutacas.h"
#include "basicas.h"

butacas *nodobutacas::getInfo() const
{
    return info;
}

void nodobutacas::setInfo(butacas *value)
{
    info = value;
}

nodobutacas *nodobutacas::getSgte() const
{
    return sgte;
}

void nodobutacas::setSgte(nodobutacas *value)
{
    sgte = value;
}


nodobutacas::nodobutacas()
{

}

nodobutacas::~nodobutacas()
{
    
}

