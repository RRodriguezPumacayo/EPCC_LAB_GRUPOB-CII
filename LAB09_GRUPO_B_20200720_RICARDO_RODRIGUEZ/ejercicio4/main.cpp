/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
/*
4. Implemente un programa que haga uso de plantillas para determinar el mínimo y
máximo valor de un arreglo de elementos dado. Debe de existir dos funciones, la
primera que retorne el mayor de los valores y la segunda que retorne el menor de
los valores. Asimismo, en la función main, se hace una prueba de estas funciones,
con arreglos de enteros y flotantes.
int ArrayEntero [5] = {10,7,2, 8, 6};
float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
*/
#include"ordenamiento.h"

int main()
{
    vector<int> ArrayEntero = {10,7,2, 8, 6};
    vector<float> ArrayFloat = {12.1, 8.7, 5.6, 8.4, 1.2};

    Ordenamiento<int, float> arreglos(ArrayEntero, ArrayFloat);
    arreglos.mayor();
    arreglos.menor();
    return 0;
}
