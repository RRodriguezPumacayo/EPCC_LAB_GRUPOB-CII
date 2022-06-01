/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*
5. Realizar la implementación de un programa que haga uso de plantillas, para
elaborar una función que permita ordenar ascendentemente y descendentemente
los elementos de un arreglo de valores enteros y otro arreglo de valores flotantes.
Las funciones deben recibir como parámetros, un puntero al tipo de elemento
dado, y dos enteros que indican los índices del primero y último elemento.
int ArrayEntero [9] = {5,7,2,8,6,1,3,4,9};
float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
*/

#include"ordenamiento.h"

int main()
{
    int *ArrayEntero=NULL;
    ArrayEntero = new int[9];
    float *ArrayFloat=NULL;
    ArrayFloat = new float[5];

    Ordenamiento<int, float> arreglos(ArrayEntero, ArrayFloat);
    arreglos.llenar();
    arreglos.ascendente();
    arreglos.descendente();
    return 0;
}
