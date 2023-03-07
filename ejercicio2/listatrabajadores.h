#include "nodotrabajadores.h"

#ifndef LISTATRABAJADORES_H
#define LISTATRABAJADORES_H


class listatrabajadores
{
private:

    nodotrabajadores *cab;
    int nTrab;
public:
    listatrabajadores();
    ~listatrabajadores();
    nodotrabajadores *getCab() const;
    void setCab(nodotrabajadores *value);
    int getNTrab() const;
    void setNTrab(int value);
    //
    void registrarTrabajadores();
    void insertarTrabajadores( trabajadores *t );
};

#endif // LISTATRABAJADORES_H
