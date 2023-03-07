#include "nodozonas.h"

#ifndef LISTAZONAS_H
#define LISTAZONAS_H


class listazonas
{
private:

    nodozonas *cab;
    int nZonas;
public:
    listazonas();
    ~listazonas();
    nodozonas *getCab() const;
    void setCab(nodozonas *value);

    //
    void insertarZonas(zonas *info);
    void registrarZonas();
    void auxRegistrarButacas();
    void auxRegistrarVentas();
    void auxRegistrarTrabajador();
    nodozonas *escogerZonas();
    void listarZonaButacasClientes();
};

#endif // LISTAZONAS_H
