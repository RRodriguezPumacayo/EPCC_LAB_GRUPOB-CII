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

void Grafo::inputListaInicio(int nro)
{
    Vertice *nuevo = new Vertice;
    nuevo->nro = nro;

    Vertice *aux;
    aux = nuevo;
    aux->sig = h;
    while(aux->sig != NULL)
    {
        cout<<"GA: "<<aux->nro<<endl;
        aux = aux->sig;
    }
}

void Grafo::eliminarListaUltimo(){
    Vertice *vertaux;
    int i{1};
    vertaux = h;
    while(vertaux != NULL)
    {
        cout<<i<<": "<<vertaux->nro<<" - ";
        vertaux = vertaux->sig;
        if(vertaux->sig == NULL)
            vertaux = NULL;
        i++;
    }
}

void Grafo::mostrarLista(){
    Vertice *vertaux;

    vertaux = h;
    while(vertaux != NULL)
    {
        cout<<vertaux->nro<<" - ";
        vertaux = vertaux->sig;
    }
}




