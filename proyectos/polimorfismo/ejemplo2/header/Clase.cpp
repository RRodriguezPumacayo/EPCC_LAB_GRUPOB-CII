// Clase ClaseBase.cpp
#include "ClaseBase.h"
#include <iostream>
using namespace std;
ClaseBase::ClaseBase()
{
}
ClaseBase::~ClaseBase()
{
}

// funcion con un parametros entero
void ClaseBase::funcion(int x)
{
    cout << "Funcion 1: El valor de x es: " << x << endl;
}

// funcion con el mismo nombre con un parametros double
void ClaseBase::funcion(double x)
{
    cout << "Funcion 2: El valor de x es: " << x << endl;
}

// funcion con el mismo nombre con dos parametros enteros
void ClaseBase::funcion(int x, int y)
{
    cout << "Funcion 3: Los valores de x y y son: " << x << ", " << y <<endl;
}