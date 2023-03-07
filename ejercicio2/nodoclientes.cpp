#include "nodoclientes.h"


nodoclientes *nodoclientes::getSgte() const
{
    return sgte;
}

void nodoclientes::setSgte(nodoclientes *value)
{
    sgte = value;
}

clientes *nodoclientes::getInfo() const
{
    return info;
}

void nodoclientes::setInfo(clientes *value)
{
    info = value;
}
nodoclientes::nodoclientes()
{

}

nodoclientes::~nodoclientes()
{

}

