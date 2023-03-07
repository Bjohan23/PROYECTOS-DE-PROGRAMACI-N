#include "licoreria.h"
#include <windows.h>

Lista_Marcas *Licoreria::getLM() const
{
    return LM;
}

void Licoreria::setLM(Lista_Marcas *value)
{
    LM = value;
}
Licoreria::Licoreria()
{

}

Licoreria::~Licoreria()
{

}

void Licoreria::gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
int Licoreria::cuadro(){
    for(int i=37; i<82; i++){
        gotoxy (i,4); cout<<char(205);
        gotoxy (i,6); cout<<char(205);
        gotoxy (i,16); cout<<char(205);
    }
    for(int i=4; i<16; i++){
        gotoxy (37,i); cout<<char(186);
        gotoxy (82,i); cout<<char(186);
    }
    gotoxy (37,4); cout<<char(201);
    gotoxy (37,6); cout<<char(204);
    gotoxy (37,16); cout<<char(200);

    gotoxy (82,4); cout<<char(187);
    gotoxy (82,6); cout<<char(185);
    gotoxy (82,16); cout<<char(188);
}

int Licoreria::menu(){
    int op;
    gotoxy(52,5), cout<<"MENU DE OPCIONES"<<endl;
    gotoxy(40,7), cout<<"1: Registrar Marca  "<<endl;
    gotoxy(40,8), cout<<"2: Registrar Licor  "<<endl;
    gotoxy(40,9), cout<<"3: Registrar Cleinte"<<endl;
    gotoxy(40,10),cout<<"4: Buscar un licor|stock|datos"<<endl;
    gotoxy(40,11),cout<<"5: Datos de Tienda     "<<endl;
    gotoxy(40,12),cout<<"0: Salir"<<endl;
    do{
        gotoxy(44,15),cout<<char(175)<<"Elija Una Opc: ";
        cin>>op;
        system("cls");
    }while (!(op>0&&op<7));
    return op;
}
