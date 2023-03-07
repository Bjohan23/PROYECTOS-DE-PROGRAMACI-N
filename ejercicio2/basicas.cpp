#include "basicas.h"

basicas::basicas()
{

}

basicas::~basicas()
{

}


//Posición
void basicas::gotoxy(int x,int y){
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}

//Leer texto
string basicas::leerTexto(string mensaje){
    string nombre;
    cout << mensaje;
    fflush(stdin);
    getline(cin,nombre);
    return nombre;
}

//Leer real
float basicas::leerReal(string mensaje){
    float valor;
    cout << mensaje;
    do{
        cin >> valor;
    }while(!(valor > 0));
    return valor;
}


//Leer edad

unsigned short basicas::leerEdad(string mensaje){
    unsigned short valor;
    cout<<mensaje;
    do{
        cin>>valor;
    }while(!(valor > 0 && valor < 100));
    return valor;
}

//Leer entero

int basicas::leerInt(string mensaje){
    int valor;
    cout << mensaje;
    do{
        cin >> valor;
    }while(!(valor >0));
    return valor;
}

