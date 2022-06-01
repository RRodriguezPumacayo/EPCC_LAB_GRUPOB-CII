/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*2. Se pide escribir una función utilizando plantillas que tome dos argumentos
genéricos de tipo entero y flotante que devuelva las cuatro operaciones básicas.*/

#include"operaciones.h"

int main()
{
    int valor1;
    float valor2;
    cout<<"Ingrese el primer valor de tipo int = ";cin>>valor1;
    cout<<"Ingrese el segundo valor de tipo float = ";cin>>valor2;
    Operaciones<int, float> argumentos(valor1, valor2);
    argumentos.suma();
    argumentos.resta();
    argumentos.multiplicacion();
    argumentos.division();
    return 0;
}
