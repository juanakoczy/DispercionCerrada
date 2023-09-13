//
// Created by Usuario on 13/9/2023.
//

#ifndef DISPERCIONCERRADA_HASH_H
#define DISPERCIONCERRADA_HASH_H
#define TAM 6
#include <stdbool.h>



typedef struct Nodo{

    char * nombre;
    struct nodo * sig;

}Nodo;

Nodo * newNodo (char * nombre);//crea los nodos
int hash (const char * nombre); //funcion hash que recibe un nombre y devuelve un entero
void insertar (Nodo * tablaDeHash[], char * nombre); // funcion insertar un nombre en la tabla de hash, no devuelve nada
void imprimir (Nodo * tablaDeHash[]);//funcion que imprime por pantalla una tabla
bool existe (Nodo * tablaDeHash[], char * nombre);//funcion que busca un nombre en la tabla de hash

#endif //DISPERCIONCERRADA_HASH_H
