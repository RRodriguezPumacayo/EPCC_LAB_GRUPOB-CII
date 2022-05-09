/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
4. Construya una lista enlazada que almacene tanto números como cadenas de texto
utilizando punteros. Incluya una función de búsqueda de muestre un dato almacenado
además del tipo de dato que se encuentra almacenado (int, float, char, ...)
*/

#include<iostream>
#include <string>
using namespace std;

struct nodo{
    int num;
    string chain;
    nodo *siguiente;
};

void numeros(nodo *&lista, int dato, string cadena){
    nodo *nuevo_nodo = new nodo();

    nuevo_nodo->num = dato;
    nuevo_nodo->chain = cadena;

    nodo *aux1 = lista;
    nodo *aux2;

    while((aux1!=NULL)){// aux!=NULL, mientras no se llegue al final de la lista
        aux2 = aux1;
        aux1 = aux2->siguiente;
    }
    if(lista==aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
}

void mostrarLista(nodo *lista){
    nodo *actual = new nodo();
    actual = lista;

    while(actual!=NULL){
        if(actual->num!=NULL){
            cout<<"int::"<<actual->num<<" -> ";
        }
        if((actual->chain).size()==0){

        }
        else
            cout<<"string::"<<actual->chain<<" -> ";
        actual = actual->siguiente;
    }
    cout<<endl;
}

void busqueda(nodo *lista,int dato, string cadena){
    nodo *actual = new nodo();
    actual = lista;

    while(actual!=NULL){
        if(actual->num==dato && actual->chain==cadena){
            cout<<"El numero "<<actual->num<<" ha sido encontrado\n";
            cout<<"La cadena "<<actual->chain<<" ha sido encontrada\n";
            break;
        }
        actual = actual->siguiente;
    }
    cout<<"\n";
}

int main(){
    nodo *lista = NULL;
    int dato,opc;
    string cadena;
    do{
        cout<<"\n||| MENU |||\n";
        cout<<"1. Ingresar numero\n";
        cout<<"2. Ingresar cadena\n";
        cout<<"3. Busqueda\n";
        cout<<"4. Mostrar lista enlazada\n";
        cout<<"5. Exit\n";
        cout<<"Escoja una opcion: ";cin>>opc;
        if(opc==1){
            cout<<"Ingrese un dato: ";cin>>dato;
            numeros(lista,dato,cadena);
        }
        if(opc==2){
            cin.ignore();
            cout<<"Ingrese una cadena: ";getline(cin,cadena);
            numeros(lista,dato,cadena);
        }
        if(opc==3){
            cout<<"Ingrese un dato: ";cin>>dato;
            cin.ignore();
            cout<<"Ingrese una cadena: ";getline(cin,cadena);
            busqueda(lista,dato,cadena);
        }
        if(opc==4){
            mostrarLista(lista);
        }
    }while(opc!=5);
}
