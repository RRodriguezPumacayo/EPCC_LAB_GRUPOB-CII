#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include<iostream>
#include <cstdlib>
#include<fstream>

using namespace std;

class Arista;//Declaramos primero el prototipo de class Arista, porque declaramos la class Arista despues de Vertice
            //Y para que class Vertice pueda usar class Arista, declaramos el prototipo.

class Vertice
{
    Vertice *sig; // Puntero hacia el siguiente vertice, es como el i++
    Arista *ady; // Puntero hacie el vertice adyacente, la conexion entre dos vertices
    int nro; // En este caso un numero va a ser el identificador de cada vertice.
    friend class Grafo; //Permite que la clase Grafo pueda acceder a los datos privados y protegidos de la clase Vertice
};

class Arista
{
    Arista *sig;// Puntero hacia la siguiente arista
    Vertice *ady;// Puntero hacie el vertice adyacente
    friend class Grafo;
};

class Grafo
{
    Vertice *h;// Apuntador de tipo vertice, funciona como un identificador del primer vertice de nuestro grafo
    public://Las funciones para Grafo.cpp
        void Inicializa();
        bool Vacio();
        Vertice *GetVertice(int nro);
        void InsertaArista(Vertice *origen, Vertice *destino);
        void InsertaVertice(int nro);
        void ListaAdyacencia();
};

#endif
