//
// Created by Usuario on 13/9/2023.
//

#include "hash.h"
#include "malloc.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


Nodo * newNodo (char * nombre) {

    Nodo * aux = NULL;
    aux = malloc (sizeof(Nodo));

    if (aux == NULL){
        printf ("No hay espacio de memoria suficiente.");
        exit (-1);
    }
    else{
        strcpy (aux->nombre,nombre);//copio nombre en el campo nombre del nodo
        aux->sig = NULL;//campo siguiente del nodo esta vacio
    }
    return aux;
}

int hash (const char * nombre) {
    int hash = 0;
    for(int i = 0 ; i != "/0" ; i++){//recorre el vector nombre
        hash += nombre[i];//lo suma acumulativamente en la variable hash
    }
        return hash % TAM; // mantengo la variable hash dentro del tamanio definido
    }


void insertar (Nodo * tablaDeHash[], char * nombre){

    int resultado = hash(nombre); // llamo a la funcion hash aplicada al nombre y lo persisto en resultado
    Nodo * nodoAInsertar = newNodo(nombre);//asigno espacio de memoria al nodo a insertar

    if (tablaDeHash[resultado] == NULL){ //si en el espacio de ese resultado esta vacia inserto

        tablaDeHash[resultado] = nodoAInsertar;

    }

    else {
        nodoAInsertar->sig = (struct nodo *) tablaDeHash[resultado]; // la tabla persiste en el espacio siguiente del nodo a insertar
        tablaDeHash[resultado] = nodoAInsertar; //persisto el nuevo nodo en la tabla
    }
}
void imprimir (Nodo * tablaDeHash[]) {


    printf("Tabla de Hash:\n");

    for (int i =0 ; i <TAM ; i++){
        printf("\t%s\n",tablaDeHash[i]);
    }
}
