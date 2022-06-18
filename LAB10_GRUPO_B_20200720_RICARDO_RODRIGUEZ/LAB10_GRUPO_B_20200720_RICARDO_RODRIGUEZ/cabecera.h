#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED
#include<iostream>
#include<random>
#include <cstdlib>

using namespace std;

class Vertice
{
    Vertice *sig; // Puntero hacia el siguiente vertice, es como el i++
    Vertice *ant;
    int pos;
    int nro;
    friend class Lista; //Permite que la clase Grafo pueda acceder a los datos privados y protegidos de la clase Vertice
};

class Lista
{
    Vertice *h;// Apuntador de tipo vertice, funciona como un identificador del primer vertice
    public:
        void Inicializa();
        bool Vacio();
        void InsertaVertice(int nro);
        void mostrarLista();
        void inputListaInicio(int nro);
        void inputListaMedio(int pos, int nro);
        void eliminarListaUltimo();
        void eliminarListaPrimero();
        void eliminarListaCualquiera(int pos);
        void randomear(int nro);
};

#endif // CABECERA_H_INCLUDED
