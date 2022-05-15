#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED

#include<iostream>
#include<random>
using namespace std;

/*
5. Implementar un programa con clases que haga la b�squeda de un dato almacenado en
una matriz de 3x3 que tiene los n�meros de 1 al 9 ingresados aleatoriamente y debe
indicar la posici�n donde se encuentra el dato.
*/

class Matriz
{
    private:
        int **matrix;
        int dato;
    public:
        Matriz(int);
        ~Matriz();
        int aleatorio();
        int busqueda();

};

#endif // MATRICES_H_INCLUDED
