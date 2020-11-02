// IMPLEMENTAMOS PLANTILLAS TEMPLATES 

#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<string> arreglo;
    // agregar 4 string's a arreglo usando insertar_final e insersar_inicio()
    arreglo.insertar_inicio("Cadena2");
    arreglo.insertar_inicio("Cadena1");
    arreglo.insertar_final("Cadena3");
    arreglo.insertar_final("Cadena4");

    // mostrar() los elementos de arreglo
    arreglo.mostrar();

    // insertar() el elemento en la posición 2
    arreglo.insertar("Cadena3.0",2);

    // mostrar los elementos de arreglo
    arreglo.mostrar();

    // eliminar_inicio() y eliminar_final()
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();

    // eliminar() el elemento de la posición 1
    arreglo.eliminar(1);

    // mostrar() los elementos de arreglo
    arreglo.mostrar();

    return 0;
}