/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
4. Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.
*/

#include<iostream>

using namespace std;

bool primo(int n){
    bool condicion;
    if(n!=1 && n!=0){
        for(int i=2;i<=n;i++){
            if(n%i==0){
                if(n==i){
                    condicion=true;
                }
                else{
                    condicion = false;
                    return condicion;
                }
            }
        }
    }
    else
        condicion = false;
    return condicion;
}

int main(){
    int array[100],j=0;

    for(int i=0;i<=100;i++){
        if(primo(i)){
            array[j] = i;
            j++;
        }
    }

    for(int i=j-1;i>=0;i--){
        cout<<array[i]<<"\t";
    }
}
