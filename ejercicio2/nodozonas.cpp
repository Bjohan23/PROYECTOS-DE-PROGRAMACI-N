#include "nodozonas.h"


zonas *nodozonas::getInfo() const
{
    return info;
}

void nodozonas::setInfo(zonas *value)
{
    info = value;
}

nodozonas *nodozonas::getSgte() const
{
    return sgte;
}

void nodozonas::setSgte(nodozonas *value)
{
    sgte = value;
}


nodozonas::nodozonas()
{
    
}

nodozonas::~nodozonas()
{
    
}

