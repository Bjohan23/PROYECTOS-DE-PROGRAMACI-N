#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x,int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}

void pintarRegistro() {
    system("color 2f");
    for(int i = 10; i<100; i++) {
        gotoxy(i,2); printf("%c", 205);
        gotoxy(i,22); printf("%c", 205);
    }
    for(int i =2 ; i<22; i++) {
        gotoxy(10,i); printf("%c", 186);
        gotoxy(100,i); printf("%c", 186);
    }
    gotoxy(10,2); printf("%c", 201);
    gotoxy(100,2); printf("%c", 187);
    gotoxy(10,22); printf("%c", 200);
    gotoxy(100,22); printf("%c", 188);

}


int menu(){
    int opc;
    system("cls");
    system("color f2");
    gotoxy(40, 3);  cout<<"================================================";
    gotoxy(40, 4);  cout<<"               OPCIONES DE INICIO ";
    gotoxy(40, 5);  cout<<"================================================";
    gotoxy(40, 8);  cout<<"[1]. Registrar Sucursal";      // listo
    gotoxy(40, 9);  cout<<"[2]. Registrar Marca ";       //listo
    gotoxy(40, 10); cout<<"[3]. Registrar Auto";      //listo ->OJO
    gotoxy(40, 11); cout<<"[4]. Registrar Trabajador "; //LISTO
    gotoxy(40, 12); cout<<"[5]. Realizar venta a cliente"; //LISTO
    gotoxy(40, 13); cout<<"[6]. Mostrar auto  ";  //LISTO
    gotoxy(40, 14); cout<<"[7]. Mostrar sucursal "; //listo
    gotoxy(40, 15); cout<<"[8]. Buscar auto ";  //listo
    gotoxy(40, 16); cout<<"[9]. Buscar sucursal"; // listo
    gotoxy(40, 17); cout<<"[10]. Salir";
    do{
        gotoxy(40, 20);cout<<"Ingrese opcion: ";
        cin>>opc;
    }while(!( opc > 0 && opc < 11 ));
    return opc;
}
//menu atención al cliente
unsigned short menu2(){
    unsigned short opc1;
    system("cls");
    gotoxy(40, 4); cout << ".::MENU DE VENTAS AL CLIENTE::.";
    gotoxy(38, 6); cout << "[1] Registrar cola para atencion";
    gotoxy(38, 7); cout << "[2] Mostar cola de atencion";
    gotoxy(38, 8); cout << "[3] Venta de autos a clientes";
    gotoxy(38, 9); cout << "[4] Expedientes de ventas";
    gotoxy(38, 10); cout <<"[5] Salir";
    do{
        gotoxy( 38, 13); cout << "Elija una opcion: ";
        cin >> opc1;
    }while(!( opc1 > 0 && opc1 <=5));
    return opc1;
}
//encabezado
void encabezado1(){
    gotoxy(5, 3 ); cout << "Nro";
    gotoxy(10, 3 ); cout << "NOMBRES";
    gotoxy(20, 3 ); cout << "APELLIDOS";
    gotoxy(35, 3 ); cout << "DNI";
    gotoxy(50, 3 ); cout << "DIRECCION";
    gotoxy(65, 3 ); cout << "TELEFONO";
}
string leerNombre(string mensaje){
    string nombre;
    cout << mensaje;
    fflush(stdin);
    getline(cin, nombre);
    return nombre;
}

unsigned short leerEntero( string mensaje ){
    unsigned short num;
    cout << mensaje;
    do{
        cin >> num;
    }while(!( num > 0 ));
    return num;
}

string leerTexto(string mensaje){
    string nombre;
    cout << mensaje;
    fflush(stdin);
    getline(cin, nombre);
    return nombre;
}
string leerRuc(string mensaje){
    string texto;
    do{
        cout << mensaje;
        fflush(stdin);
        getline(cin,texto);
    }while(!( texto.length() < 9));
    return texto;
}

unsigned short leerEdad(string mensaje){
    unsigned short valor;
    cout << mensaje;
    do{
        cin >> valor;
    }while(!( valor >1 && valor < 100));
    return valor;
}

float leerReal (string mensaje){
    float valor;
    cout << mensaje;
    do{
        cin >> valor;
    }while(!( valor > 9));
    return valor;
}

float leerFloat(string mensaje){
    unsigned short valor;
    do{
        cout << mensaje;
        cin >> valor;
    }while(!( valor >9 ));
    return valor;
}

void encabezado2 (){
    gotoxy (10, 3);cout <<"MODELO DEL AUTO";
    gotoxy (30, 3);cout <<"NUMERO DE ASIENTO";
    gotoxy (50, 3);cout <<"PLACA";
    gotoxy (60, 3);cout <<"COLOR";
    gotoxy (70, 3);cout <<"MOTOR";
    gotoxy (80, 3);cout <<"TIPO DE COMBUSTIBLE";
    gotoxy (105, 3);cout<<"MANTENIMIENTO";
    gotoxy (125, 3);cout<<"PRECIO";
}
