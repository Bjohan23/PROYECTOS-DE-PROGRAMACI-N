#include "listazonas.h"
#include "basicas.h"
#include <iostream>
using namespace std;

listazonas::listazonas()
{
    this->cab    = NULL;
    this->nZonas = 0;

}

listazonas::~listazonas()
{

}

nodozonas *listazonas::getCab() const
{
    return cab;
}

void listazonas::setCab(nodozonas *value)
{
    cab = value;
}
// ____________________________________________

void listazonas::insertarZonas(zonas *info)
{
    nodozonas *aux  = new nodozonas();
    nodozonas *temp = new nodozonas();
    temp->setInfo(info);
    temp->setSgte(NULL);
    if(this->cab == NULL){
        this->cab = temp;
    }else{
        aux = this->cab;
        while(aux->getSgte() != NULL){
            aux->setSgte(aux->getSgte());
        }
        aux->setSgte(temp);
    }
    this->nZonas++;
}

void listazonas::registrarZonas()
{
    zonas *z = new zonas();
    z->leerZona();
    z->confirmarZona();
    this->insertarZonas(z);
    //z->getLb()->registarButacas();
}

nodozonas *listazonas::escogerZonas()
{
    int opc, x = 0;
    nodozonas *aux = this->cab;
        basicas::gotoxy(40,3);cout<<" LISTA DE ZONAS REGISTRADAS ";
        while(aux){
            basicas::gotoxy(20,5+x); cout<<x+1<<". "<<aux->getInfo()->getNombre()<<" - "<<aux->getInfo()->getPrecio()<<" - "<<aux->getInfo()->getAforo();
            x++;
            aux = aux->getSgte();
        }
        do{
        basicas::gotoxy(20,6+x); opc = basicas::leerInt("Ingrese su opcion: ");
        }while(!( opc > 0 && opc < this->nZonas+1 ));
        aux = this->cab;
        for(int y=0; y < opc - 1; y++){
            aux = aux->getSgte();
        }
        return aux;
}

void listazonas::listarZonaButacasClientes()
{
    //Listar una zona y las butacas ocupadas y quien lo ocupa.
    system("cls");
    if( this->nZonas == 0){
        basicas::gotoxy(40,10);cout<<"No hay Zonas rgistradas";
        system("cls");
        return ;
    }else
    {
        nodozonas *aux = escogerZonas();
       aux->getInfo()->getLc()->mostrarClientes();
    }

    basicas::gotoxy(40,10);system("pause");
}

void listazonas::auxRegistrarButacas()
{
    system("cls");
    if(this->nZonas == 0){
        basicas::gotoxy(20, 3); cout<<"No hay Zonas registradas!";
        system("pause");
        return;
    }
    nodozonas *aux = escogerZonas();
    aux->getInfo()->getLb()->registarButacas();

}

void listazonas::auxRegistrarVentas()
{
    system("cls");
    if( this->nZonas == 0){
        basicas::gotoxy(40,10);cout<<"No hay Zonas registradas";
         basicas::gotoxy(40,20);system("pause");
        return ;
    }else
    {
        nodozonas *aux = escogerZonas();
        if(aux->getInfo()->getLb()->nButRtrn()== 0){
            basicas::gotoxy(40,10);cout<<"No hay Butacas registradas";
             basicas::gotoxy(40,20);system("pause");
            return ;
        }
        aux->getInfo()->getLb()->ListarButas();
        aux->getInfo()->getLc()->registrarClientes();
    }
}

void listazonas::auxRegistrarTrabajador()
{
    system("cls");
    if( this->nZonas == 0){
        basicas::gotoxy(40,10);cout<<"No hay Zonas rgistradas";
        system("cls");
        return ;
    }else
    {
        nodozonas *aux = escogerZonas();
       aux->getInfo()->getLt()->registrarTrabajadores();
    }

}





