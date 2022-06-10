/*
1. Defina una lista enlazada que permita insertar elementos al final de todos los
elementos que ya se hayan ingresado. Por el momento no es necesario preservar un
orden, simplemente los elementos nuevos deben de ingresar como el último elemento.
*/
/*
2. Con la implementación de la lista enlazada anterior, desarrolle una función que
permita ingresar los elementos al inicio de todos los demás elementos. Tendrá que
modificar el comportamiento del puntero que tiene referencia al primer elemento para
que sea redireccionado al nuevo elemento por ingresar.
*/
/*
3. Desarrolle una función que permita ingresar elementos en el medio de dos elementos
de la lista enlazada, como se muestra en la siguiente imagen. Solicite que se ingrese
una posición válida dentro de la lista y permita que el valor ingresado se pueda anexar
en esa posición.
*/
/*
4. Elabore una función que permita eliminar el último elemento de una lista enlazada.
(Evite copiar los elementos en una nueva lista para completar la eliminación del
elemento )
*/
/*
5. Desarrolle una función que permita eliminar el primer elemento de una lista sin perder
referencia de los demás elementos que ya se encuentran almacenados en la estructura
.(Evite copiar los elementos en una nueva lista para completar la eliminación de los
elementos)
*/
/*
6. Dado una posición válida dentro de la lista, permita al usuario eliminar un elemento
de cualquier posición sin perder referencia de los demás elementos.
/*
/*
7. Desarrolle un algoritmo de ordenamiento que permita ordenar los elementos de forma
ascendente y descendente de acuerdo a la elección del usuario. Se debe poder simular
el ingreso de 10 mil elementos de forma aleatoria y ordenarlos en el menor tiempo
posible ( < 2 seg).
*/
#include <windows.h>
#include "Grafo.h"

int main()
{
    Grafo G;
    G.Inicializa();
    int opc;

    G.InsertaVertice(10);
    G.InsertaVertice(13);
    G.InsertaVertice(16);
    G.InsertaVertice(11);
    G.InsertaVertice(18);
    G.InsertaVertice(15);
    G.InsertaVertice(12);
    G.InsertaVertice(17);
    G.InsertaVertice(20);
    G.InsertaVertice(22);

    do
    {
        system("cls");
        cout<<"Luego de ingresar un vertice o una arista, cree el grafo de nuevo para que se apliquen los cambios"<<endl;
        cout<<"1. Ingresar Numero"<<endl;
        cout<<"2. Mostrar"<<endl;
        cout<<"3. Agregar elemento al inicio"<<endl;
        cout<<"4. Agregar elemento en medio"<<endl;
        cout<<"5. Eliminar ultimo elemento"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<endl<<"Elija una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            int nro;
            system("cls");
            cout<<"Ingrese el nuevo elemento: ";
            cin.ignore();
            cin>>nro;
            cout<<"\n";
            G.InsertaVertice(nro);
            cin.get();
            cin.get();
            break;
        }
        case 2:
        {
            system("cls");
            G.mostrarLista();
            cin.get();
            cin.get();
            break;

        }
        case 3:
        {
            int nro;
            system("cls");
            cout<<"Elemento que estara al inicio: ";
            cin.ignore();
            cin>>nro;
            cout<<"\n";
            G.inputListaInicio(nro);
            cin.get();
            cin.get();
            break;
        }
        case 4:
        {
            int pos;
            system("cls");
            cout<<"Elemento que estara al inicio: ";
            cin.ignore();
            cin>>pos;
            cout<<"\n";
            G.inputListaInicio(pos);
            cin.get();
            cin.get();
            break;
        }
        case 5:
        {
            system("cls");
            G.eliminarListaUltimo();
            cin.get();
            cin.get();
            break;

        }
        case 7:
        {
            break;
        }
        }
    }
    while(opc != 7);
    return 0;

}
