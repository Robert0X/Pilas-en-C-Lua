#ifndef LISTA_DOBLE_CIRCULAR_H
#define LISTA_DOBLE_CIRCULAR_H

// Definición de la estructura NodoDobleCircular
typedef struct NodoDobleCircular
{
    int valor;
    struct NodoDobleCircular *anterior;
    struct NodoDobleCircular *siguiente;
} NodoDobleCircular;

// Prototipos de funciones para listas doblemente ligadas circulares
void insertarInicioDobleCircular(NodoDobleCircular **head, int valor);
void insertarFinDobleCircular(NodoDobleCircular **head, int valor);
void insertarOrdenadoDobleCircular(NodoDobleCircular **head, int valor);
void borrarDobleCircular(NodoDobleCircular **head, int valor);
void imprimirDobleCircular(NodoDobleCircular *head);

#endif // LISTA_DOBLE_CIRCULAR_H
