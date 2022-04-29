/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
1. Hacer un programa que sin usar la función pow(), pero por medio de una función,
calcule la potencia de un número (ambos números ingresados por teclado).
*/

#include<iostream>

using namespace std;

int potencia(int num,int po){
    int band=1;
    for(int i{0};i<po;i++){
        band = band*num;
    }
    return band;
}

void imprimir(int funcion){
    cout<<funcion;
}

int main(){
    int num,po;
    cout<<"Numero: ";cin>>num;
    cout<<"Elevado a : ";cin>>po;
    imprimir(potencia(num,po));
    return 0;
}
