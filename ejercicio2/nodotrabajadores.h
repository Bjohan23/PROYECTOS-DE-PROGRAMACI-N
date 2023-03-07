#include "trabajadores.h"

#ifndef NODOTRABAJADORES_H
#define NODOTRABAJADORES_H


class nodotrabajadores
{
private:

    trabajadores *info;
    nodotrabajadores *sgte;
public:
    nodotrabajadores();
    ~nodotrabajadores();
    trabajadores *getInfo() const;
    void setInfo(trabajadores *value);
    nodotrabajadores *getSgte() const;
    void setSgte(nodotrabajadores *value);
};

#endif // NODOTRABAJADORES_H
