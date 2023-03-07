#include "trabajadores.h"
#include "basicas.h"


void trabajadores::leerTrabajadores()
{
    system("cls");
    basicas::gotoxy(45, 14); cout<<"             REGISTRAR TRABAJADORES      ";
    basicas::gotoxy(40, 15); this->setNombres( basicas::leerTexto("Nombre :"));
    basicas::gotoxy(40, 16); this->setApellidos( basicas::leerTexto("Apellidos: "));
    basicas::gotoxy(40, 17); this->setDNI( basicas::leerTexto("Dni : "));
    basicas::gotoxy(40, 18); this->setEdad( basicas::leerInt  ("edad: "));
}
trabajadores::trabajadores()
{
    
}

trabajadores::~trabajadores()
{
    
}

