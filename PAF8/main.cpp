#include <iostream>
#include <windows.h>
#include <basicas.cpp>
#include <estructuras.cpp>

using namespace std;


void inicializargrafoSipanCars(grafoSucursales *&g){
    g= new grafoSucursales ();
    g->aristaG= NULL;
    g->nodoG  = NULL;
}
void inicializarColaClientes(colaClientes *&cola){
    cola = new colaClientes();
    cola->atr=NULL;
    cola->adl=NULL;
    cola->nCc=0;
}

void inicializarListaTrabajadores(listaTrabajadores *&lT){
    lT = new listaTrabajadores();
    lT->cab=NULL;
    lT->nTrab = 0;
}

void inicializarListaVentas(listaVentas *&lV){
    lV = new listaVentas ();
    lV->cab=NULL;
    lV->nVentas=0;
}
void inicializarListaMarcas( listaMarcas *&lm ){
    lm = new listaMarcas ();
    lm->cab   = NULL;
    lm->nMarc = 0;
}

void inicializarListaAutos ( listaAutos *&la ){
    la = new listaAutos ();
    la->cab =NULL;
    la->nAut = 0;
}
void inicializarSipanCars(sipanCars *sC){
    pintarRegistro();
    gotoxy(20,5);cout << "  ###    ###   ####     #    #   #          ###     #    ####    ### ";
    gotoxy(20,6);cout << " #   #    #    #   #   # #   #   #         #   #   # #   #   #  #   #";
    gotoxy(20,7);cout << " #        #    #   #  #   #  ##  #         #      #   #  #   #  #    ";
    gotoxy(20,8);cout << "  ###     #    ####   #   #  # # #         #      #   #  ####    ### ";
    gotoxy(20,9);cout << "     #    #    #      #####  #  ##         #      #####  # #        #";
    gotoxy(20,10);cout << " #   #    #    #      #   #  #   #         #   #  #   #  #  #   #   #";
    gotoxy(20,11);cout << "  ###    ###   #      #   #  #   #          ###   #   #  #   #   ### ";
    gotoxy(35,14);cout <<" :::: DATOS DE LA EMPRESA::::";
    gotoxy(35,16);cout <<"DIRECCION: Av.Los Alamos 321  ";
    gotoxy(35,18);cout <<"Propietario: Lucho Gonzales ";
    gotoxy(35,20);cout <<"RUC: 13759034430";
    inicializargrafoSipanCars(sC->gS);
    inicializarListaVentas(sC->lV);
    inicializarColaClientes(sC->cCli);
    inicializarListaMarcas( sC->lM );
    inicializarListaAutos( sC->lA);

    Sleep (3000);
}


//TRABAJADORES

nodo *elegirSucursal( nodo *&nD ){
    int opc, x = 0;
    nodo *aux = nD;
        gotoxy(40,2);cout<<"SUCURSALES DISPONIBLES:";
        gotoxy(40,3);cout<<"----------------------";
        while(aux){
            gotoxy(35,5+x);cout<<x+1<<". "<<aux->sC->suclDireccion;
            x++;
            aux = aux->sgte;
        }
        do{
        gotoxy(35,7+x);cout<<"Elige sucursal: ";cin>>opc;
        }while(!(opc>0 && opc <= nD->nSuc++));
        aux = nD;
        for(int y=0;y<opc-1;y++){
            aux = aux->sgte;
        }
        return aux;
}

void inicializaTrabajador(trabajador *tB ){
    tB->sueldo=0.0;
}

void leerTrabajador( trabajador *t ){
    system("cls");
     gotoxy( 45, 10); cout<<"::::REGISTRAR TRABAJADOR::::";
     gotoxy( 45, 13); t->cargo   = leerTexto ("CARGO:   ");
     gotoxy( 45, 14); t->codigo  = leerTexto ("CODIGO:  ");
     gotoxy( 45, 15); t->dni     = leerTexto ("DNI:     ");
     gotoxy( 45, 16); t->nombres = leerTexto ("NOMBRES: ");
     gotoxy( 45, 17); t->sueldo  = leerReal  ("SUELDO:  ");
}

void insertarTrabajador(listaTrabajadores *lP, trabajador *tra){
    nodoTrabajador *aux ;
    nodoTrabajador *temp = new nodoTrabajador();
    temp->trab= tra;
    temp->sgt = NULL;
    aux = lP->cab;
    if(aux == NULL){
       lP->cab = temp;
    }
     else{
        while(aux->sgt !=NULL){
            aux = aux->sgt;
        }
        aux->sgt = temp;
    }
    lP->nTrab++;
}

void registrarTrabajadores(nodo *&nD){
    system("cls");
    system("color 70");
    if (nD->nSuc > 0 ){
        nodo *aux = new nodo();
        aux = elegirSucursal( nD );
        if ( aux != NULL ){
           trabajador *tB = new trabajador();
           inicializaTrabajador( tB );
           leerTrabajador ( tB );
           insertarTrabajador( aux->lT,tB );
        }
    }
    else{
        gotoxy( 30,5 ); cout << "No sucursales registradas" << endl;
    }
    system("pause");
}

//SUCURSALES

void inicializarSucursal( nodo *&n){
    n->adyte = NULL;
    n->lT = new listaTrabajadores();
    inicializarListaTrabajadores( n->lT );
    n->nSuc = 0;
    n->sC = new sucursal();
    n->sgte = NULL;
}

void leerSucursal( nodo *s ){
    system("cls");
    gotoxy( 45, 10); cout<<"====================";
    gotoxy( 45, 11); cout<<"REGISTRO DE SUCURSAL";
    gotoxy( 45, 12); cout<<"====================";
    gotoxy( 46, 14); s->sC->codigo        ="11";// leerTexto("Codigo: ");
    gotoxy( 46, 15); s->sC->gerente       = "johan";//leerTexto("Gerente: ");
    gotoxy( 46, 16); s->sC->suclDireccion = "cix";//leerTexto("Direccion:");
    s->nSuc++;
}

//registramos grafo Sipan Cars
void registrarGrafoSipanCars ( grafoSucursales *&g ){
    system("cls");system("color f2");
    nodo *aux = new nodo ();
    nodo *nue = new nodo ();
    inicializarSucursal ( nue );
    leerSucursal ( nue );
    if  ( g->nodoG == NULL){
         g->nodoG = nue;
    }
    else{
        aux = g->nodoG;
        while ( aux->sgte != NULL){
            aux = aux->sgte;
        }
        aux->sgte = nue;
    }
    gotoxy (45,18); cout << "Sucursal registrada correctamente...."<< endl;
    Sleep (1000);
}

//inicializando arista
void inicializarAristaSucursal ( arista *nueva){
    nueva->destino = NULL;
    nueva->sgte    = NULL;
}
//insertando arista
void insertarAristaSucursal ( nodo*aux,nodo *temp, arista *nueva ){
    arista *tempo;
    if ( aux->adyte == NULL){
        aux->adyte = nueva;
        nueva->destino = temp;
    }
    else{
        tempo = aux->adyte;
        while ( tempo->sgte != NULL ){
            tempo = tempo->sgte;
        }
        nueva->destino = temp;
        tempo->sgte = nueva;
    }
    gotoxy(40,9); cout << "Arista Registrada Correctamente"<< endl;
    Sleep (1000);
}
//Registar arista sucursales
void registrarAristaSucursales ( nodo *&nodoG){
    system("cls");
    system("color f2");
    string sucursalOrigen, sucursalAdyacente;
    nodo *aux = nodoG,*temp = nodoG;
    arista *nueva = new arista ();
    inicializarAristaSucursal ( nueva );
    if( nodoG == NULL){
        gotoxy(40,8); cout << "*********************************";
        gotoxy(40,7); cout << "** NINGUNA SUCURSAL REGISTRADA **";
        gotoxy(40,9); cout << "*********************************";
        return;
    }
    gotoxy (40,7);sucursalOrigen= leerTexto    ( "INGRESE SUCURSAL PRINCIPAL: ");
    gotoxy (40,8);sucursalAdyacente = leerTexto( "INGRESE SUCURSAL ADYACENTE: ");
    while ( aux != NULL ){
        if ( aux->sC->suclDireccion == sucursalOrigen ){
            break;
        }
        aux = aux->sgte;
    }
    while ( temp != NULL){
        if ( temp->sC->suclDireccion == sucursalAdyacente){
            if ( aux != NULL){
                insertarAristaSucursal( aux,temp, nueva );
                return;
            }
        }
        temp = temp->sgte;
    }
    gotoxy (40,9);cout<<"RESGITRO COMPLETADO"<<endl;
}

//MOSTRAR GRAFO DE SUCURSALES

void mostrarGrafoSucursal ( grafoSucursales *g){
    system("color f6");
    nodo *aux = new nodo();
    arista *temp = new arista ();
    aux = g->nodoG;
    int x = 1;
    int y = 0;
    system("cls");
    gotoxy (10,3); cout << "SUCURSAL";
    gotoxy (30,3); cout << "SUCURSAL ADYACENTE";
    while ( aux != NULL){
       gotoxy (10,3+x); cout << aux->sC->suclDireccion;
       y=0;
       if ( aux->adyte != NULL){
           temp = aux->adyte;
           while ( temp != NULL){
               gotoxy(30+y,3+x); cout << temp->destino->sC->suclDireccion;
               temp = temp->sgte;
               y+=20;
           }
       }
        aux = aux->sgte;
        x++;
    }
    cout<<"\n";system("pause");
}

//Buscar sucursal
void  buscarSucursal(sipanCars *sC,grafoSucursales *g){
    system("cls");
    system("color 6f");
    bool estado = false;
    string encontrarSucur;
    gotoxy(38,5); cout << "     SUCURSALES SIPAN CARS "<<sC->nombre;
    gotoxy(38,6); cout << "-------------------------------";
    gotoxy(38,8); encontrarSucur = leerTexto("INGRESE CODIGO DE SUCURSAL : ");
    nodo *aux = g->nodoG;
    while( aux != NULL){
        if (aux->sC->codigo == encontrarSucur){
            gotoxy(39,10); cout << "El Codigo es    : " << aux->sC->codigo;
            gotoxy(39,11); cout << "La ubicacion es : " << aux->sC->suclDireccion;
            gotoxy(39,12); cout << "El gerente es   : " << aux->sC->gerente;
            cout<<endl<<endl;
            estado = true;
            break;
        }
       aux = aux->sgte;
    }
    if(estado == false)
         gotoxy(39,12);cout<<"NO SE ENCUENTRA SUCURSAL";
    system("pause");
}

//REGISTRAR MARCAS




void leerMarcas ( marcas *&m ){
    system("cls");
    gotoxy( 45, 10); cout <<"::::INGRESE MARCA A REGISTRAR::::";
    gotoxy( 40, 13); m->nombreM  = "nissan";//leerTexto( "NOMBRE DE LA MARCA:  ");
}

void insertarMarcas(listaMarcas *&lm, marcas *&m){
    nodoMarcas *aux = new (struct nodoMarcas);
    nodoMarcas *temp = new (struct nodoMarcas);
    temp->info = m;
    temp->sgte = NULL;
    if (lm->cab == NULL )
        lm->cab = temp;
    else{
        aux = lm->cab;
        while( aux->sgte != NULL ){
            aux = aux->sgte;
        }
        aux->sgte = temp;
    }
    lm->nMarc++;
}

void registrarMarcaAutos(listaMarcas *lista ){
    marcas *mar = new marcas();
    leerMarcas( mar );
    insertarMarcas( lista, mar );
}


//REGISTRAR AUTOS


void leerAutos( autos *la ){
    system("cls");
    gotoxy( 45, 10); cout <<"::::INGRESE AUTO A REGISTRAR::::";
    gotoxy( 40, 13); la->modelo  = "aa";// leerTexto("MODELO:  ");
    gotoxy( 40, 14); la->nAsiento = "aa";//leerTexto("N DE ASIENTO: ");
    gotoxy( 40, 15); la->placa = "aa";//leerTexto("N PLACA: ") ;
    gotoxy( 40, 16); la->color = "aa";//leerTexto("COLOR: ");
    gotoxy( 40, 17); la->motor = "aa";//leerTexto("MOTOR: ");
    gotoxy( 40, 18); la->tipCombustible ="aa";// leerTexto("TIPO DE COMBUSTIBLE: ");
    gotoxy( 40, 19); la->mantenimiento ="aa";// leerTexto("MANTENIMIENTO: ");
    gotoxy( 40, 20); la->precio = 2300;//leerReal("PRECIO FINAL: ");
}

void insertarAutos(listaAutos *&la, autos *&a){
    nodoAutos *aux = new (struct nodoAutos);
    nodoAutos *temp = new (struct nodoAutos);
    temp->Aut = a;
    temp->sgte = NULL;
    if (la->cab == NULL )
        la->cab = temp;
    else{
        aux = la->cab;
        while( aux->sgte != NULL ){
            aux = aux->sgte;
        }
        aux->sgte = temp;
    }
    la->nAut++;
}

void registrarListaAutos ( listaAutos *& la ){
      autos *a = new autos();
      leerAutos( a );
      insertarAutos (la, a );
      system("cls");
      gotoxy( 45, 15);cout<<"AUTOS REGISTRADOS: " <<la->nAut;
      gotoxy( 45, 20);system("pause");
}


//Mostrar Autos

void listarAuto (autos* la){
    gotoxy (10, 3 );cout << la->modelo;
    gotoxy (30, 3 );cout << la->nAsiento;
    gotoxy (50, 3 );cout << la->placa;
    gotoxy (60, 3 );cout << la->color;
    gotoxy (70, 3 ); cout << la->motor;
    gotoxy (80, 3 ); cout << la->tipCombustible;
    gotoxy (105,3 ); cout << la->mantenimiento;
    gotoxy (125,3 ); cout << la->precio;
}

void mostrarAuto ( listaAutos * la){
    nodoAutos * aux = la->cab;
    system ("cls");
    encabezado2();
    int x=1;
    while(aux != NULL){
        listarAuto ( aux->Aut);
        x++;
        aux = aux->sgte;
    }
    Sleep (3000);    //Pausa
    delete aux;
}

//BUSCAR AUTOS

void buscarAutos ( listaAutos *la ){
    nodoAutos *aux = la->cab;
    string modelo;
    system ("cls");
    system("color 1");

    if( aux == NULL  ){
        gotoxy ( 35, 10 ); cout<<" PRIMERO REGISTRE AUTOS ";
    }else{
        gotoxy ( 35, 5 ); modelo = leerTexto ("Ingrese el modelo del auto: ");
        while (  aux != NULL ){   //Lineal o secuencial
            if ( modelo == aux ->Aut -> modelo ){
                listarAuto (aux ->Aut );
                break;
            }
            aux = aux ->sgte;
        }

    }
     gotoxy ( 35, 25 ); cout<<system("pause");
}

//COLA DE CLIENTES

void inicializarInfoCola(colaCliente *infCola){
    infCola->nAtencion = 0;
}

//LEYENDO CLIENTES

void leerColaCliente(colaCliente *cL){
    system("cls");
    gotoxy(40,5);  cout << ".::REGISTRO DE COLA::.";
    gotoxy(38,7);  cL->nombre = leerTexto   ("Ingrese nombres   : ");
    gotoxy(38,8);  cL->apellidos = leerTexto("Ingrese apellidos : ");
    gotoxy(38,9);  cL->dni = leerTexto       ("Ingrese DNI       : ");
    gotoxy(38,10); cL->direccion= leerTexto ("Ingrese direccion : ");
    gotoxy(38,11); cL->telefono = leerTexto ("Ingrese telefono  : ");
}

void encolarCliente(colaClientes *cA, colaCliente *cC ){
    nodoColaCliente *aux = new nodoColaCliente();
    aux->info = cC;
    aux->sgte = NULL;
    if (cA->adl == NULL )
        cA->adl = aux;
    else
        cA->atr->sgte = aux;
    cA->atr = aux;
    cA->nCc++;
}

void confirmarCliente(colaCliente *cC){
    system("cls");
    gotoxy(40,5);cout<<".:: DATOS REGISTRADOS DE MANERA CORRECTA ::.";
    gotoxy(39,7);cout<<"Nombre:   "<<cC->nombre;
    gotoxy(39,8);cout<<"Apellido: "<<cC->apellidos;
    gotoxy(39,9);cout<<"DNI:      "<<cC->dni;
    gotoxy(39,10);cout<<"Direccion: "<<cC->direccion;
    gotoxy(39,11);cout<<"Telefono:  "<<cC->telefono;
    gotoxy(39,12);Sleep(2000);
}
//registro en cola
void registroColaClientes(colaClientes *cClien){
    system("color f5");
    colaCliente *cC = new colaCliente();
    inicializarInfoCola(cC);
    leerColaCliente(cC);
    encolarCliente(cClien, cC);
    confirmarCliente(cC);
}

void mostrarColaC(colaCliente *cC, int x){
    gotoxy(3,4+x);cout<<"*";
    gotoxy(5,4+x);cout<<x+1;
    gotoxy(10,4+x);cout<<cC->nombre;
    gotoxy(20,4+x);cout<<cC->apellidos;
    gotoxy(35,4+x);cout<<cC->dni;
    gotoxy(50,4+x);cout<<cC->direccion;
    gotoxy(65,4+x);cout<<cC->telefono;
}
//MOSTRANDO COLA DE ATENCION
void mostrarColaClientes(colaClientes *cClien){
    system("cls");
    system("color f5");
    gotoxy(1,1 );cout <<"COLA DE ATENCION";
    if(cClien->adl != NULL){
        encabezado1();
        int x = 0;
        nodoColaCliente *aux = cClien->adl;
        while(aux){
            mostrarColaC(aux->info,x);
            x++;
            aux = aux->sgte;
    }
    }else{
        gotoxy(40,4);cout<<".:: NO HAY CLIENTES EN COLA ::.";
    }
    gotoxy(70,1);system("pause");
}
void regresarPrincipal(){
    system("color 70");
    system("cls");
    gotoxy(38,10);cout<<"REGRESANDO AL MENU PRINCIPAL....";Sleep(1500);
}

//TODO SOBRE LA COMPRA
void confirmarClienteCola(colaCliente *cCl){
    system("cls");
    gotoxy(40,3 );cout<<"        CAJA DE VENTAS        ";
    gotoxy(40,4);cout <<"------------------------------";
    gotoxy(40,6);cout <<"Cliente en cola por atender:";
    gotoxy(39,7);cout <<"Nombres  : "<<cCl->nombre;
    gotoxy(39,8);cout <<"Apellidos: "<<cCl->apellidos;
    gotoxy(39,9);cout <<"DNI      : "<<cCl->dni;
    gotoxy(39,10);cout <<"Direccion : "<<cCl->direccion;
    gotoxy(39,11);cout <<"Telefono  : "<<cCl->telefono;
    gotoxy(39,12);system("pause");
}

//pasando datos de cola a pila
void pasarDatosCola(expedientesP *pE, colaCliente *cCli){
    pE->nombre = cCli->nombre;
    pE->apellidos = cCli->apellidos;
    pE->dni = cCli->dni;
    pE->fecha = cCli->direccion;
    pE->genero = cCli->telefono;
}

void desencolarClienteEnCola (colaClientes *cC){
    nodoColaCliente *aux = new nodoColaCliente();
    aux = cC->adl;
    cC->adl = cC->adl->sgte;
    cC->nCc--;
    delete aux;
}

//inicializar venta
void inicializarVenta(ventaSipanCar *ven){
    ven->cantidad = 0;
    ven->precio = 0.0;
}

//insetar venta
void insertarVenta(listaVentas *lV, ventaSipanCar *ven ){
    nodoVenta*aux = new nodoVenta();
    nodoVenta *temp = new nodoVenta();
    temp->v = ven;
    aux = lV->cab;
    if ( aux ){

        while( aux->sgte ){
            aux = aux->sgte;
        }
        temp->sgte = aux->sgte;
        aux->sgte = temp;
        temp->ant = aux;
    }
    else{
        temp->sgte = aux;
        temp->ant = NULL;
        lV->cab = temp;
    }
    lV->nVentas++;
}

//buscar el producto a comprar
void  buscarAutoRegistrado(listaAutos *lA,listaVentas *lV){
    ventaSipanCar *ven =new ventaSipanCar();
    bool estado = false;
    string encontrarAuto;
    float pago,vuelto,subTotal;
    unsigned short cantidad;
    gotoxy(38,13); cout << "INGRESE MODELO DE AUTO A COMPRAR: ";
    fflush(stdin);
    getline(cin,encontrarAuto);
    nodoAutos *aux = lA->cab;
    while(aux != NULL){
        if (aux->Aut->modelo == encontrarAuto){
            gotoxy(38,14); cout << "El auto cuesta: " << aux->Aut->precio;
            gotoxy(38,15); cantidad = leerEntero("Cuantos autos desea: ");
            subTotal = (aux->Aut->precio * cantidad);
            gotoxy(38,16); cout << "Usted debe pagar: "<< subTotal <<"/s";
            gotoxy(38,17); pago = leerReal("Con cuanto pagara?: ");
            vuelto = pago - (aux->Aut->precio * cantidad);
            gotoxy(38,18); cout<<"Su vuelto es: "<<vuelto;
            inicializarVenta(ven);
            ven->subTotal = subTotal;
            ven->cantidad= cantidad;
            ven->total= pago;
            ven->nombreAuto = aux->Aut->modelo;
            ven->precio = aux->Aut->precio;
            insertarVenta(lV,ven);
            cout<<endl<<endl;
            estado = true;
            break;
        }
       aux = aux->sgte;
    }
    if(estado == false)
    gotoxy(39,10);cout<<"...";
    system("pause");

}


void completarDatosPilaExpediente(expedientesP *eP){
    system("cls");
    gotoxy(40,2);cout << "REGISTRO A COMPLETAR";
    gotoxy(40,5);cout<<"** Datos a agregar **";
    gotoxy(38,7);eP->codigo = leerTexto ("Ingrese codigo de venta: ");
    gotoxy(38,8);eP->edad = leerEdad    ("Ingrese edad   : ");
    gotoxy(38,9);eP->genero = leerTexto ("Ingrese Genero : ");
    fflush(stdin);
    gotoxy(38,10);eP->fecha = leerTexto ("Ingrese Fecha  : ");
}

void pushPilaExpedientes( pilaExpediente *pE, expedientesP *cL ){
    nodoExpedienteP *aux = new nodoExpedienteP();
    aux->eP = cL;
    aux->sgte = pE->cima;
    pE->cima = aux;
    pE->nExp++;
}


//confirmacon de venta con exito
void confirmarDatosPila(expedientesP *eP,listaVentas *lV){
    system("cls");
    gotoxy(40,2 );cout << "REGISTRO DE LA VENTA ";
    gotoxy(40,6);cout<< "Boleta de venta: ";
    gotoxy(39,7);cout<< "Codigo de venta: "<<eP->codigo;
    gotoxy(39,8);cout<< "Nombres      : "<<eP->nombre;
    gotoxy(39,9);cout<< "Apellidos    : "<<eP->apellidos;
    gotoxy(39,10);cout<<"DNI          : "<<eP->dni;
    gotoxy(39,11);cout<<"Direccion    : "<<eP->genero;
    gotoxy(39,12);cout<<"Precio       : "<<lV->cab->v->precio;
    gotoxy(39,13);cout<<"Cantidad     : "<<lV->cab->v->cantidad;
    gotoxy(39,14);cout<<"Fecha        : "<<lV->cab->v->fecha;
    gotoxy(39,15);cout<<"IGV          : "<<lV->cab->v->IGV;
    gotoxy(39,16);cout<<"Sub Total    : "<<lV->cab->v->subTotal;
    gotoxy(39,17);cout<<"Total        : "<<lV->cab->v->total;
    gotoxy(40,18);system("pause");
}

//REGISTRO DE COMPRA DE CLIENTES
void registroClientes(colaClientes *cC, listaAutos *lA,  pilaExpediente *pE, listaVentas *lV){
    system("cls");
    system("color f5");
    nodoColaCliente *aux;
    aux = cC->adl;
    if(aux!=NULL){
        confirmarClienteCola(cC->adl->info);
        system("cls");
        expedientesP *eP = new expedientesP();
        pasarDatosCola(eP,cC->adl->info);
        desencolarClienteEnCola(cC);
        completarDatosPilaExpediente(eP);
        buscarAutoRegistrado(lA,lV);
        pushPilaExpedientes(pE,eP);
        desencolarClienteEnCola(cC);
        confirmarDatosPila(eP,lV);
        cC->nCc++;
    }else{
        gotoxy(40, 10);cout<<"Cola esta vacia";
        gotoxy(40, 12 );system("pause");
    }
}


//Mostrando expedientes
void mostrarExps(nodoVenta *nV,pilaExpediente *pE,int &f,int &i){
    nodoExpedienteP*auxa = pE->cima;
    while( auxa ){
        gotoxy(5, 3 + f );cout<<i+1<<". "<<"Codigo de venta:   "<<auxa->eP->codigo;
        gotoxy(5, 4 + f );cout<< "Cliente  : "<<auxa->eP->nombre<<" "<<auxa->eP->apellidos;
        gotoxy(5, 5 + f );cout<< "DNI      : "<<auxa->eP->dni;
        gotoxy(5, 6 + f );cout<< "Edad     : "<<auxa->eP->edad;
        gotoxy(5, 6 + f );cout<< "Fecha    : "<<auxa->eP->fecha;
        gotoxy(5, 7 + f );cout<< "Genero   : "<<auxa->eP->genero;
        gotoxy(5, 8 + f );cout<< "Marca    : "<<nV->v->nombreAuto;
        gotoxy(5, 9 + f );cout<< "Cantidad : "<<nV->v->cantidad;
        gotoxy(5, 10 + f );cout<<"Precio   : "<<nV->v->precio;
        gotoxy(5, 11 + f );cout<<"IGV      : "<<nV->v->IGV;
        gotoxy(5, 12 + f );cout<<"Total    : "<<nV->v->total;
        f=f+12;i++;
        auxa = auxa->sgte;
 }
}


//MOSTRAR LOS EXPEDIENTES DE LAS VENTAS
void mostarExpedientesVentasTotales(listaVentas *lV, pilaExpediente *pE){
    system("cls");
    system("color f5");
    gotoxy(1,1 );cout << "ARCHIVOS GUARDADOS DE VENTAS";
    if (lV->nVentas==0){
        gotoxy(40,5);cout<<"______________________________________";
        gotoxy(40,4);cout<<".:: No hay expedientes registrados ::.";
    }else{
        int f=0,i=0;
        nodoVenta *aux = lV->cab;
            mostrarExps(aux,pE,f,i);
            aux = aux->sgte;

    }
    gotoxy(70,1);system("pause");
}

void menuVentaClientes(sipanCars *sC)
{
    system("color e0");
    unsigned short op;
    do{
        op = menu2();
        switch (op) {
        case 1: registroColaClientes(sC->cCli); break;
        case 2: mostrarColaClientes(sC->cCli); break;
        case 3: registroClientes(sC->cCli, sC->lA, sC->pE,sC->lV);break;
        case 4: mostarExpedientesVentasTotales(sC->lV,sC->pE); break;
        case 5: regresarPrincipal(); break;
        }
   }while(!(op == 5));
}

//SALIENDO DEL PROGRAMA
void salirDelPrograma(){
    system("cls"); system("color 70");
    gotoxy(40, 10);cout << "MUCHAS GRACIASS POR SU PREFERENCIA!";
    Sleep(1500);
}

int main()
{
     sipanCars *sC = new sipanCars(); // reserva espacio de memoria
     inicializarSipanCars (sC); // se ejecuta solo una vez
     registrarGrafoSipanCars ( sC->gS );
     registrarMarcaAutos ( sC->lM ) ;
    int opc;
    do{

        opc = menu();
        switch (opc) {
        case 1: registrarGrafoSipanCars ( sC->gS ); break;
        case 2: registrarMarcaAutos ( sC->lM ) ;break;
        case 3: registrarListaAutos( sC->lA );break;
        case 4: registrarTrabajadores( sC->gS->nodoG); break;
        case 5: menuVentaClientes(sC);break;
        case 6: mostrarAuto (sC->lA); break;
        case 7: mostrarGrafoSucursal (sC->gS);break;
        case 8: buscarAutos (sC->lA);break;//jesus
        case 9: buscarSucursal(sC,sC->gS);break;//jesus
        case 10: salirDelPrograma();break;
        }
   }while(!(opc == 10));
    return 0;
}

