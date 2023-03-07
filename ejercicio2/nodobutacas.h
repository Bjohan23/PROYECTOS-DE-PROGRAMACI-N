#include "butacas.h"

#ifndef NODOBUTACAS_H
#define NODOBUTACAS_H


class nodobutacas
{
private:
    nodobutacas *sgte;
    butacas *info;
public:
    nodobutacas();
    ~nodobutacas();
    butacas *getInfo() const;
    void setInfo(butacas *value);
    nodobutacas *getSgte() const;
    void setSgte(nodobutacas *value);

};

#endif // NODOBUTACAS_H
