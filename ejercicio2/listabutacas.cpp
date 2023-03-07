#include "listabutacas.h"
#include "basicas.h"

listabutacas::listabutacas()
{
   this->cab  = NULL;
   this->nBut = 0;
}

listabutacas::~listabutacas()
{

}
int listabutacas::getNBut() const
{
    return nBut;
}

void listabutacas::setNBut(int value)
{
    nBut = value;
}

nodobutacas *listabutacas::getCab() const
{
    return cab;
}

void listabutacas::setCab(nodobutacas *value)
{
    cab = value;
}


void listabutacas::insertarButacas(butacas *b)
{
    nodobutacas *auxiliar = new nodobutacas();
    nodobutacas *temporal = new nodobutacas();
    temporal->setInfo(b);
    temporal->setSgte(NULL);
    if( this->cab == NULL){
        this->cab = temporal;
    }else{
        auxiliar = this->cab;
        while( auxiliar->getSgte() != NULL ){
            auxiliar = auxiliar->getSgte();
        }
        auxiliar->setSgte(temporal);
    }
    this->nBut++;
}

void listabutacas::ListarButas()
{
    system("cls");
   //string numTienda;
   int contador=6;
    //bool estadoBusqueda = false;
    nodobutacas *buscador = new nodobutacas();
    buscador = this->getCab();

    //basicas::gotoxy(45,14); cout << ">> BUSQUEDA DE TIENDA <<";
    //basicas::gotoxy(40,15); numTienda = basicas::leerTexto("Ingresa Numero Tienda: ");

    while( buscador != NULL ){
        /*
        if( numTienda == buscador->getInfo()->getCodigo()){
            //buscador->getInfo()->titulo(5);
            buscador->getInfo()->encabezadoButacas(6);
            basicas::gotoxy(40,8); cout << "BUTACA ENCONTRADA";
            estadoBusqueda = true;
            basicas::gotoxy(40,20); cout <<system("pause");
            break;
        }*/
        buscador->getInfo()->encabezadoButacas(contador);
        buscador = buscador->getSgte();
        contador++;
    }
/*
    if( estadoBusqueda == false ){
        basicas::gotoxy(10,5); cout << "Butaca NO ENCONTRADA" << endl;
        basicas::gotoxy(20,20); cout <<system("pause");
    }
*/
   // basicas::gotoxy(40, 20);cout<<system("pause");
}

void listabutacas::auxButacas()
{
    system("cls");
    if( this->nBut == 0){
        basicas::gotoxy(40,10);cout<<"No hay Butacas registradas";
        system("cls");
        return ;
    }else
    {
        nodobutacas *aux = escogerButacas();
        //aux->getInfo()->getLc()->registrarClientes();
        //aux->getInfo()->getLb()->ListarButas();
    }
}

nodobutacas *listabutacas::escogerButacas()
{
    int opc, x = 0;
    nodobutacas *aux = this->cab ;
        basicas::gotoxy( 40,3 );cout<<" LISTA DE ZONAS REGISTRADAS ";
        while( aux ){
            basicas::gotoxy(20,5+x); cout<<x+1<<". "<<aux->getInfo()->codigo<<" - "<<aux->getInfo()->getEstado();
            x++;
            aux = aux->getSgte();
        }
        do{
        basicas::gotoxy(20,6+x); opc = basicas::leerInt("Ingrese su opcion: ");
        }while(!( opc > 0 && opc < this->nBut+1 ));
        aux = this->cab;
        for(int y=0; y < opc - 1; y++){
            aux = aux->getSgte();
        }
        return aux;
}

int listabutacas::nButRtrn()
{
    if(this->nBut == 0){
        return 0;
    }else{
        return 1;
    }

}

void listabutacas::registarButacas()
{
    system("cls");
    basicas::gotoxy(45,10);cout<<"N butacas registradas: "<<this->nBut;
    butacas *a = new butacas();
    a->leerButacas();
    a->confirmarButacas();
    this->insertarButacas(a);

}


