/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
6. Utilizando punteros a funciones, implemente las funciones:
a. void sumar (int a, int b);
b. void restar (int a, int b);
c. void multiplicar (int a, int b);
d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa que permita la
invocación de cada función, pero a través del puntero.
*/

#include "iostream"
#include "stdio.h"
using namespace std;

void sumar(int *a,int *b){
    cout<<"Valor x: ";cin>>*a;
    cout<<"Valor y: ";cin>>*b;
    cout<<*a + *b<<"\n";
}

void restar(int *a, int *b){
    cout<<"Valor x: ";cin>>*a;
    cout<<"Valor y: ";cin>>*b;
    cout<<*a - *b<<"\n";
}

void multiplicar(int *a, int *b){
    cout<<"Valor x: ";cin>>*a;
    cout<<"Valor y: ";cin>>*b;
    cout<<*a * *b<<"\n";
}

void dividir(int *a, int *b){
    cout<<"Valor x: ";cin>>*a;
    cout<<"Valor y: ";cin>>*b;
    cout<<*a / *b<<"\n";
}

int main(){
    int x=NULL,y=NULL, tamanio=NULL, opc=NULL;
    int* vector = NULL;
    vector = new int[tamanio];
    do{
        cout<<"\n||| MENU |||\n";
        cout<<"Los valores del vector seran segun la respuesta de la funcion escogida\n";
        cout<<"1. Sumar\n";
        cout<<"2. Restar\n";
        cout<<"3. Multiplicar\n";
        cout<<"4. Dividir\n";
        cout<<"5. Mostrar vector\n";
        cout<<"6. EXIT\n";
        cout<<"INGRESE UNA OPCION: ";cin>>opc;
        vector[tamanio] = opc;
        if(vector[tamanio]==1){
            sumar(&x,&y);
            tamanio++;
        }
        if(vector[tamanio]==2){
            restar(&x,&y);
            tamanio++;
        }
        if(vector[tamanio]==3){
            multiplicar(&x,&y);
            tamanio++;
        }
        if(vector[tamanio]==4){
            dividir(&x,&y);
            tamanio++;
        }
        if(vector[tamanio]==5){
            for(int i{0};i<tamanio;i++){
                cout<<vector[i]<<"\t";
            }
            cout<<"\n";
        }
    }while(opc!=6);
    return 0;
}
