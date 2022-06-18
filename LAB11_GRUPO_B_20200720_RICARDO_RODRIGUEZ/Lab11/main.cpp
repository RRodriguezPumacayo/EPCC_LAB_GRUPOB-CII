/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*
Resolver los siguientes ejercicios planteados:
1. Defina una Pila que permita insertar elementos utilizando clases.
2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Pila.
3. Implemente un algoritmo para buscar elementos de la Pila.
4. Escribir un programa que dé la solución al problema de las Torres de Hanoi para
N discos, utilizando pilas, las cuales representen cada uno de los postes:
*/
#include"hanoi.h"

int main()
{
    Torres T;

    T.Inicializa();
    cout<<"\nInsertando Elementos en la Pila\n";
    T.insertarTorre1(30);
    T.insertarTorre1(40);
    T.insertarTorre1(50);
    T.insertarTorre1(20);
    T.insertarTorre1(80);
    T.mostrarTorre1();
    cout<<"\nEliminando Elementos de la Pila\n";
    T.eliminarTorre1();
    T.eliminarTorre1();
    T.eliminarTorre1();
    T.mostrarTorre1();
    cout<<"\nBuscando Elementos de la Pila\n";
    T.buscarDisco(1);

    cout<<"\n|||    TORRE DE HANOI   |||\n";
    T.asignarDiscos(4);
    T.ordenarDiscos(4);
}

