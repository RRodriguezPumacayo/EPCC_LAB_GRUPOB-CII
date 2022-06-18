#include"listaEnlazada.h"

lista::lista(){
    elementos = new int;
    elementos[0] = 1;
    elementos[1] = 2;
    elementos[2] = 3;
    elementos[3] = 4;
    agregar = nullptr;
    band = nullptr;
}

void lista::getDates(){
    int i{0};
    while(elementos[i]!=NULL){
        cout<<i<<":"<<elementos[i]<<" - ";
        i++;
    }
    cout<<endl;
}

void lista::inputDate(){
    agregar = new int;
    int n=3;
    cout<<"Agrege el dato al elementos: ";cin>>*agregar;
    n++;
    elementos[n] = *agregar;
    cout<<elementos[n]<<endl;
    delete agregar;
}

void lista::inicio(){
    int band[5];
    agregar = new int;
    int i{0};
    cout<<"Ingrese el nuevo primer elemento = ";cin>>*agregar;

    band[0] = *agregar;
    while(elementos[i]!=NULL){
        band[i+1] = elementos[i];
        elementos[i] = band[i];
        cout<<i<<":"<<elementos[i]<<" - ";
        i++;
    }
    cout<<endl;
    delete agregar;
}

void lista::medio(){
    int cambio[5];
    agregar = new int;
    int i{0};
    int pos{0};
    cout<<"Ingrese la posicion del nuevo elemento = ";cin>>pos;
    cout<<"Ingrese el nuevo elemento = ";cin>>*agregar;
    elementos[pos+1] = elementos[pos];
    elementos[pos+2] = elementos[pos+1];
    elementos[pos] = *agregar;
    while(i!=5){
        cout<<elementos[i]<<" - ";
        i++;
    }
    cout<<endl;
    delete agregar;
}

void lista::eliminar(){
    int i{0};
    elementos[0] = 0;
    while(elementos[i]!=NULL){
        cout<<i<<":"<<elementos[i]<<" - ";
        i++;
    }
    cout<<endl;
}
