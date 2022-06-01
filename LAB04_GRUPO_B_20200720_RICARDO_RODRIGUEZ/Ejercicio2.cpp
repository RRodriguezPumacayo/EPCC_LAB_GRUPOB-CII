/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
contrario, retornar falso.
*/
#include<iostream>

using namespace std;

bool found(int num,int numeros[8]){
    for(int i=0;i<8;i++){
        if(num==numeros[i]){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int numeros[]={1,3,5,7,9,11,13,15},num;
    do{
        cout<<"Escoja el numero a buscar: "; cin>>num;
        if(found(num,numeros)==true){
            cout<<"El numero "<<num<<" existe en el array";
        }
        else
            cout<<"El numero no se encuentra en el array\n";
    }
    while(found(num,numeros)==false);
}
