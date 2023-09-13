#include <stdio.h>
#include "hash.h"

int main() {

    Nodo * nuevatabla[TAM];

    insertar(nuevatabla, "juan");
    insertar(nuevatabla, "jose");
    insertar(nuevatabla, "maria");
    insertar(nuevatabla, "florencia");
    insertar(nuevatabla, "ignacio");
    insertar(nuevatabla, "juan");

    imprimir(nuevatabla);



    
    return 0;
}
