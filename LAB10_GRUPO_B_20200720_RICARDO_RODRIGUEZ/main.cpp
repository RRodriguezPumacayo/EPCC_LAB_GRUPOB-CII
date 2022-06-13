/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/

#include <windows.h>
#include "cabecera.h"

int main()
{
    Lista L;
    L.Inicializa();
    int opc;

    L.InsertaVertice(10);
    L.InsertaVertice(13);
    L.InsertaVertice(16);
    L.InsertaVertice(11);
    L.InsertaVertice(18);
    L.InsertaVertice(15);
    L.InsertaVertice(12);
    L.InsertaVertice(17);
    L.InsertaVertice(20);
    L.InsertaVertice(22);

    do
    {
        system("cls");
        cout<<"1. Ingresar Numero"<<endl;
        cout<<"2. Mostrar"<<endl;
        cout<<"3. Agregar elemento al inicio"<<endl;
        cout<<"4. Agregar elemento en medio"<<endl;
        cout<<"5. Eliminar ultimo elemento"<<endl;
        cout<<"6. Eliminar primer elemento"<<endl;
        cout<<"7. Eliminar cualquier elemento"<<endl;
        cout<<"8. Randomear 1000 numeros"<<endl;
        cout<<"9. Salir"<<endl;
        cout<<endl<<"Elija una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            /*
            1. Defina una lista enlazada que permita insertar elementos al final de todos los
            elementos que ya se hayan ingresado. Por el momento no es necesario preservar un
            orden, simplemente los elementos nuevos deben de ingresar como el último elemento.
            */
            int nro;
            system("cls");
            cout<<"Ingrese el nuevo elemento: ";
            cin.ignore();
            cin>>nro;
            cout<<"\n";
            L.InsertaVertice(nro);
            cin.get();
            cin.get();
            break;
        }
        case 2:
        {
            /*
            3. Desarrolle una función que permita ingresar elementos en el medio de dos elementos
            de la lista enlazada, como se muestra en la siguiente imagen. Solicite que se ingrese
            una posición válida dentro de la lista y permita que el valor ingresado se pueda anexar
            en esa posición.
            */
            system("cls");
            L.mostrarLista();
            cin.get();
            cin.get();
            break;
        }
        case 3:
        {
            /*
            2. Con la implementación de la lista enlazada anterior, desarrolle una función que
            permita ingresar los elementos al inicio de todos los demás elementos. Tendrá que
            modificar el comportamiento del puntero que tiene referencia al primer elemento para
            que sea redireccionado al nuevo elemento por ingresar.
            */
            int nro;
            system("cls");
            cout<<"Elemento que estara al inicio: ";
            cin.ignore();
            cin>>nro;
            cout<<"\n";
            L.inputListaInicio(nro);
            cin.get();
            cin.get();
            break;
        }
        case 4:
        {
            /*
            3. Desarrolle una función que permita ingresar elementos en el medio de dos elementos
            de la lista enlazada, como se muestra en la siguiente imagen. Solicite que se ingrese
            una posición válida dentro de la lista y permita que el valor ingresado se pueda anexar
            en esa posición.
            */
            int pos, nro;
            system("cls");
            cout<<"Posicion del elemento: ";
            cin.ignore();
            cin>>pos;
            cout<<"Elemento a agregar: ";
            cin.ignore();
            cin>>nro;
            L.inputListaMedio(pos, nro);
            cin.get();
            cin.get();
            break;
        }
        case 5:
        {
            /*
            4. Elabore una función que permita eliminar el último elemento de una lista enlazada.
            (Evite copiar los elementos en una nueva lista para completar la eliminación del
            elemento )
            */
            system("cls");
            cout<<"Elemento eliminado\n";
            L.eliminarListaUltimo();
            cin.get();
            cin.get();
            break;
        }
        case 6:
        {
            /*
            5. Desarrolle una función que permita eliminar el primer elemento de una lista sin perder
            referencia de los demás elementos que ya se encuentran almacenados en la estructura
            .(Evite copiar los elementos en una nueva lista para completar la eliminación de los
            elementos)
            */

            system("cls");
            cout<<"Elemento eliminado\n";
            L.eliminarListaPrimero();
            cin.get();
            cin.get();
            break;
        }
        case 7:
        {
            /*
            6. Dado una posición válida dentro de la lista, permita al usuario eliminar un elemento
            de cualquier posición sin perder referencia de los demás elementos.
            */
            int pos;
            system("cls");
            cout<<"Posicion del elemento: ";
            cin.ignore();
            cin>>pos;
            cout<<"Elemento eliminado\n";
            L.eliminarListaCualquiera(pos);
            cin.get();
            cin.get();
            break;
        }
        case 8:
        {
            /*
            7. Se debe poder simular el ingreso de 10 mil elementos de forma aleatoria y ordenarlos en el menor tiempo
            posible ( < 2 seg).
            */
            system("cls");
            L.randomear(1000);
            cin.get();
            cin.get();
            break;
        }
        }
    }
    while(opc != 9);
    return 0;
}
