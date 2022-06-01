/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*1. Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados.*/

#include"argumentos.h"

int main()
{
    int valor1;
    float valor2;
    double valor3;
    cout<<"Ingrese el primer valor de tipo int = ";cin>>valor1;
    cout<<"Ingrese el segundo valor de tipo float = ";cin>>valor2;
    cout<<"Ingrese el primer valor de tipo double = ";cin>>valor3;

    Argumentos <int, float, double> tres(valor1, valor2, valor3);
    tres.ordenar();
    return 0;
}
