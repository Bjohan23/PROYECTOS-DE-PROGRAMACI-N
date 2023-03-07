#include <iostream>


using namespace std;


//             VENTA DE AUTOS DE UNA CONCESSIONARIA


//Lista ventas

struct ventaSipanCar{
    string nombreAuto;
    unsigned short cantidad;
    float precio;
    float total;
    float subTotal;
    float IGV;
    string fecha;
    string empleado;
};

struct nodoVenta{
    ventaSipanCar *v;
    nodoVenta *sgte;
    nodoVenta *ant;
};

struct listaVentas{
    nodoVenta *cab;
    unsigned short nVentas;
};

//Lista Trabajador

struct trabajador{
    string codigo;
    string nombres;
    string cargo;
    string dni;
    float sueldo;
};

struct nodoTrabajador{
    trabajador *trab;
    nodoTrabajador *ant;
    nodoTrabajador*sgt;
};

struct listaTrabajadores{
    nodoTrabajador *cab;
    unsigned short nTrab;
};


// Lista autos

struct autos{
    string modelo;
    string color;
    float precio;
    string tipCombustible;
    string nAsiento;
    string motor;
    string tipAuto;
    string placa;
    string mantenimiento;
};

struct nodoAutos{
    autos *Aut;
    nodoAutos *sgte;
};

struct listaAutos{
    nodoAutos *cab;
    unsigned short nAut;
};

//Pila de Expedientes
struct expedientesP{
    string codigo;
    unsigned short edad;
    string genero;
    string nombre;
    string apellidos;
    string dni;
    string fecha;
};

struct nodoExpedienteP{
    expedientesP *eP;
    nodoExpedienteP *sgte;
};

struct pilaExpediente{
    nodoExpedienteP *cima;
    unsigned short nExp;
};

//COLA CLIENTES

struct colaCliente{
    int nAtencion;
    string nombre;
    string apellidos;
    string dni;
    string direccion;
    string telefono;
};

struct nodoColaCliente{
    colaCliente *info;
    nodoColaCliente *sgte;
};

struct colaClientes{
    nodoColaCliente *adl;
    nodoColaCliente *atr;
    unsigned short nAten;
    unsigned short nCc;
};


//LISTANDO A LOS CLIENTES

struct cliente{
    string nombre;
    string apellidos;
    string dni;
    string telefono;
};

struct nodoCliente{
    cliente *cLt;
    nodoCliente *ant;
    nodoCliente *sgt;
};

struct listaClientes{
    nodoCliente *cab;
    unsigned short nCli;
};

//Lista marca de autos
struct marcas{
    string nombreM;
    listaAutos *lA;
};

struct nodoMarcas{
    marcas *info;
    nodoMarcas *sgte;
    nodoMarcas *ant;
};

struct listaMarcas{
    nodoMarcas *cab;
    unsigned short nMarc;
};


//Sucursales

struct sucursal{
    string codigo;
    string gerente;
    string suclDireccion;
};

struct nodo{
    sucursal *sC;
    listaTrabajadores *lT;
    struct nodo *sgte;
    struct arista *adyte;
    unsigned short nSuc;
};

struct arista{
    struct nodo *destino;
    struct arista *sgte;
};

struct grafoSucursales{
    nodo *nodoG;
    arista *aristaG;
};


//TIENDA SIPAN CARS Estructura principal

struct sipanCars{
    string nombre;
    string ruc;
    string propietario;
    string direccion;
    listaClientes *lC;
    listaMarcas* lM;
    grafoSucursales *gS;
    listaVentas *lV;
    listaAutos *lA;
    listaTrabajadores *lt;
    colaClientes *cCli;
    pilaExpediente  *pE;
};
