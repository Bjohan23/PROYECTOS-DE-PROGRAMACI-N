#include <iostream>
#include "listazonas.h"
#include "listaventas.h"

using namespace std;
#ifndef CIRCO_H
#define CIRCO_H


class circo
{
private:
    listazonas *lz;
    listaventas *lv;

public:
    circo();
    ~circo();
    listaventas *getLv() const;
    void setLv(listaventas *value);
    listazonas *getLz() const;
    void setLz(listazonas *value);

    int menu();
};

#endif // CIRCO_H
