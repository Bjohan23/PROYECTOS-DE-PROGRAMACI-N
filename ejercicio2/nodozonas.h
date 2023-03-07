#include "zonas.h"
#include "listaclientes.h"
#include "listabutacas.h"
#ifndef NODOZONAS_H
#define NODOZONAS_H


class nodozonas
{
private:

    zonas *info;
    nodozonas *sgte;
public:
    nodozonas();
    ~nodozonas();
    zonas *getInfo() const;
    void setInfo(zonas *value);
    nodozonas *getSgte() const;
    void setSgte(nodozonas *value);


};

#endif // NODOZONAS_H
