
#include "marcas.h"

#include <windows.h>
string Marcas::getCodigo() const
{
    return codigo;
}

void Marcas::setCodigo(const string &value)
{
    codigo = value;
}

string Marcas::getNomMarca() const
{
    return nomMarca;
}

void Marcas::setNomMarca(const string &value)
{
    nomMarca = value;
}
Marcas::Marcas()
{

}

Marcas::~Marcas()
{

}

string Marcas::leerTexto(string mensaje){
    string texto;
    do{
        cout<<mensaje;
        fflush(stdin);
        getline(cin, texto);
    }while (! (texto.length()>0));
    return texto;
}

void Marcas::gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
void Marcas::leer_Marca(){
    gotoxy(44,5),                        cout<<"    REGISTRO DEL DETENIDO "<<endl;
    gotoxy(38,7),this->codigo=leerTexto       ("Ingresa Codigo      : ");
    gotoxy(38,8),this->nomMarca=leerTexto     ("Ingresa Nombre   : ");

    system("cls");
}
void Marcas::Mostrar_Marca(int pos){

    gotoxy(5,5);cout<<"CODIGO"<<endl;
    gotoxy(20,5);cout<<"NOMBRE"<<endl;


    gotoxy(5,pos);cout<<this->codigo;
    gotoxy(20,pos);cout<<this->nomMarca;

}
