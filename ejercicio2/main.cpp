#include <iostream>
#include "circo.h"
using namespace std;
/*
2. Un circo ofrece 3 funciones durante el día. Cada una de las funciones tiene un precio establecido
y vende butacas al público al cual le otorga un ticket al momento de ingresar.

El circo lleva el registro de sus trabajadores indicando el acto que realizan.
Un cliente puede comprar más de una entrada para las butacas que están organizadas en zonas.
Se pide:
- Registrar las zonas y sus butacas
- Registrar los trabajadores
- Registrar las ventas de tickets
- Listar una zona y las butacas ocupadas y quien lo ocupa.
*/
int butacas::auxCod = 1;

int main()
{
    circo *c = new circo();
    unsigned short opc;
    do{
        opc = c->menu();
        switch(opc){
            case 1:c->getLz()->registrarZonas();break;
            case 2:c->getLz()->auxRegistrarButacas();break;
            case 3:c->getLz()->auxRegistrarTrabajador();break;
            case 4:c->getLz()->auxRegistrarVentas();break;
            case 5:c->getLz()->listarZonaButacasClientes();break;

           }
       }while(!(opc == 6));

    return 0;
}

