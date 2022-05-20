// Clase ClaseDerivada.cpp
#include "ClaseDerivada.h"

ClaseDerivada::ClaseDerivada(){

}

ClaseDerivada::~ClaseDerivada(){

}

void ClaseDerivada::print() // print() ya es una función virtual en la clase
// derivada, también podríamos declararlo como virtual void print()
// explícitamente
{
    cout << "Imprime ClaseDerivada" << endl;
}

void ClaseDerivada::show()
{
    cout << "Muestra ClaseDerivada" << endl;
}