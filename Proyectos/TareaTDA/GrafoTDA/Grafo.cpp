#include "Grafo.h"

void Grafo::Inicializa()//El vertice inicial es NULO
{
    h = NULL;
}

bool Grafo::Vacio()
{
    if(h==NULL)
    {
        return true;
    }
    else
        return false;
}

Vertice *Grafo::GetVertice(int nro)
{
    Vertice *aux;//Para recorrer el grafo usamos un auxiliar
    aux = h; // El auxiliar primero ser igual al primer vertice de nuestro grafo

    while(aux != NULL)// Con este verificamos que no pare hasta que aux == NULL
    {
        if(aux->nro == nro) //Si el numero auxiliar es igual al numero, si lo es return aux
        {
            return aux;
        }
        aux = aux->sig;//Esto es como i++, pero para arreglos dinamicos, punteros
    }
    return NULL; // Si ya no se encuentra aux->nro, retornamos un NULL
}

void Grafo::InsertaVertice(int nro)
{
    Vertice *nuevo = new Vertice;
    nuevo->nro = nro;
    nuevo->sig = NULL;
    nuevo->ady = NULL;

    if(Vacio())
    {
        h = nuevo;// Asi el h va a ser el primer vertice
    }
    else
    {
        Vertice *aux;
        aux = h;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void Grafo::InsertaArista(Vertice *origen, Vertice *destino)
{
    Arista *nueva = new Arista;
    nueva->ady = NULL;
    nueva->sig = NULL;

    Arista *aux;

    aux = origen->ady;

    if(aux == NULL)
    {
        origen->ady = nueva;
        nueva->ady = destino;
    }
    else
    {
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nueva;
        nueva->ady = destino;
    }
}

void Grafo::ListaAdyacencia()
{
    ofstream archivo;

    archivo.open("FicheroTDA.dot",ios::out);//ios::out se usa cuando se desea escribir en un archivo, en este caso vamos a escribir el grafo
    archivo<<"graph A{"<<endl;

    Vertice *vertaux;
    Arista *arisaux;

    vertaux = h;
    while(vertaux != NULL)
    {
        archivo<<vertaux->nro<<"--";
        arisaux = vertaux->ady;
        while(arisaux != NULL)
        {
            archivo<<arisaux->ady->nro<<"--";
            arisaux = arisaux->sig;
        }
        archivo<<"1;"<<endl;
        vertaux = vertaux->sig;
    }
    archivo<<"}";
    archivo.close();// Cerramos el archivo para liberar memoria

    system("dot -Tpng FicheroTDA.dot -o ImagenTDA.png");
}

