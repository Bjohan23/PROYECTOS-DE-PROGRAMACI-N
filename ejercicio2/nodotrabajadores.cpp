#include "nodotrabajadores.h"


trabajadores *nodotrabajadores::getInfo() const
{
    return info;
}

void nodotrabajadores::setInfo(trabajadores *value)
{
    info = value;
}

nodotrabajadores *nodotrabajadores::getSgte() const
{
    return sgte;
}

void nodotrabajadores::setSgte(nodotrabajadores *value)
{
    sgte = value;
}
nodotrabajadores::nodotrabajadores()
{
    
}

nodotrabajadores::~nodotrabajadores()
{
    
}

