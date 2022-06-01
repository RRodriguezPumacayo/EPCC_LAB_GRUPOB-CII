/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
5. Implementar un programa con clases que haga la búsqueda de un dato almacenado en
una matriz de 3x3 que tiene los números de 1 al 9 ingresados aleatoriamente y debe
indicar la posición donde se encuentra el dato.
*/
#include"matrices.h"
#include <iostream>

using namespace std;

int main()
{
    int numero{};
    Matriz molde(numero);
    molde.aleatorio();
    molde.busqueda();
    return 0;
}
