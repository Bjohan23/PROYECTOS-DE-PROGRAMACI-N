#include "lista_marcas.h"
#include <windows.h>
#include "marcas.h"
int Lista_Marcas::getNMarc() const
{
    return nMarc;
}

void Lista_Marcas::setNMarc(int value)
{
    nMarc = value;
}

Nodo_Marcas *Lista_Marcas::getCab() const
{
    return cab;
}

void Lista_Marcas::setCab(Nodo_Marcas *value)
{
    cab = value;
}
Lista_Marcas::Lista_Marcas()
{
    this->cab=NULL;
    this->nMarc=0;
}

Lista_Marcas::~Lista_Marcas()
{

}
string Lista_Marcas::leerTexto(string mensaje){
    string texto;
    do{
        cout<<mensaje;
        fflush(stdin);
        getline(cin, texto);
    }while (! (texto.length()>0));
    return texto;
}
void Lista_Marcas::gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
void Lista_Marcas::registrar_Marca(Marcas *mar){
        Nodo_Marcas *aux=new Nodo_Marcas();
        Nodo_Marcas *temp= new Nodo_Marcas();
        temp->setMarc(mar);
        temp->setSgte(NULL);
        if(this->cab==NULL)
            this->cab = temp;
        else{
            aux = this->cab;
            while( aux->getSgte()!=NULL){
                aux->setSgte(aux->getSgte());
            }
            aux->setSgte(temp);
        }
        this->nMarc++;
    }
void Lista_Marcas::insertar_Marca(){
        Marcas *mar=new Marcas();
        mar->leer_Marca();
        this->registrar_Marca(mar);
    }
void Lista_Marcas::listar_Marca(){
        Nodo_Marcas *aux= this->cab;
        unsigned short pos=8;
        if(this->cab==NULL)return;
        else{
           system("cls");
            while(aux){
                aux->getMarc()->Mostrar_Marca( pos++ );
                aux=aux->getSgte();
            }
        }
        system("pause>NULL");
}
Nodo_Marcas *Lista_Marcas::elegirMarcas()
{
    /*
    int opc, x = 0;
    Nodo_Marcas *aux = this->cab;
        basicas::gotoxy(40,3);cout<<" LISTA DE MARCAS REGISTRADAS ";
        while(aux){
            // modificar los datos que se ban a mostrar y agregar basicas
            basicas::gotoxy(20,5+x); cout<<x+1<<". "<<aux->Marc->getCodigo()<<" - "<<aux->Marc->getNomMarca();
            x++;
            aux = aux->getSgte();
        }
        do{
        basicas::gotoxy(20,6+x); opc = basicas::leerInt("Ingrese su opcion: ");// arreglar la funcion tmbn
        }while(!( opc > 0 && opc < this->nMarc+1 ));
        aux = this->cab;
        for(int y=0; y < opc - 1; y++){
            aux = aux->getSgte();
        }
        return aux;
        */
}

void Lista_Marcas::auxMarca()
{
    /*
    system("cls");
    //agregar basicas
    if(this->nMarc == 0){
        basicas::gotoxy(20, 3); cout<<"No hay MARCAS registradas!";
        system("pause");
        return;
    }
    Nodo_Marcas *aux = elegirMarcas();
    // aca es un ejemplo
    aux->getMarc()->leer_Marca();
    */


}

