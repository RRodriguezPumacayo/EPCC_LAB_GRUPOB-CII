/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
3. Construya una lista enlazada simple utilizando solo punteros. Añada las funciones de
insertar y eliminar un elemento. En la función insertar se debe asegurar que los
números insertados estén en orden creciente. Simule el proceso con 10000 números
aleatorios sin que el programa falle.
*/

#include<iostream>
#include<random>
using namespace std;

struct nodo{
    int dato;
    nodo *siguiente;
};

void insertarLista(nodo *&lista, int dato, int n){
     random_device engn;
    uniform_int_distribution<size_t> dist(1, n+10);// genera enteros aleatorios sin signo
    int z=0;
    while(z!=n){
        nodo *nuevo_nodo = new nodo();
        nuevo_nodo->dato = dist(engn);
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
        cout<<nuevo_nodo->dato<<"\t";
        z++;
    }
}

void mostrarLista(nodo *lista){
    nodo *actual = new nodo();
    actual = lista;

    while(actual!=NULL){
        cout<<actual->dato<<" -> ";
        actual = actual->siguiente;
    }
    cout<<endl;
}

void eliminarNodo(nodo *&lista,int dato){
    if(lista!=NULL){//Preguntar si la lista esta vacia
        nodo *aux_borrar;
        nodo *anterior = NULL;

        aux_borrar = lista;//aux_borrar apunta al inicio de la lita

        //Recorrer la lista
        while((aux_borrar!=NULL) && (aux_borrar->dato!=dato)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        //El elemento aun no a sido encontrado
        if(aux_borrar==NULL){
            cout<<"El elemento no ha sido encontrado"<<endl;
        }
        //El primer elemento es el elemento a borrar
        else if(anterior==NULL){
            lista = lista->siguiente;
            delete aux_borrar;
        }
        //El elemento esta en la lista pero no es el primer nodo
        else{
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}

int main(){
    nodo *lista = NULL;
    int dato,kill,tamanio,opc;
    do{
        cout<<"\n|||  MENU    |||\n";
        cout<<"1. Tamanio de la lista\n";
        cout<<"2. Insertar Lista\n";
        cout<<"3. Mostrar Lista\n";
        cout<<"4. Eliminar Nodo\n";
        cout<<"5. Exit\n";
        cout<<"ESCOJA UNA OPCION: ";cin>>opc;
        if(opc==1){
            cout<<"Tamanio de la lista = ";cin>>tamanio;
        }
        if(opc==2){
            insertarLista(lista,dato,tamanio);
        }
        if(opc==3){
            mostrarLista(lista);
        }
        if(opc==4){
            cout<<"Escoja el dato a eliminar = ";cin>>kill;
            eliminarNodo(lista,kill);
            mostrarLista(lista);
        }
    }while(opc!=5);
}
