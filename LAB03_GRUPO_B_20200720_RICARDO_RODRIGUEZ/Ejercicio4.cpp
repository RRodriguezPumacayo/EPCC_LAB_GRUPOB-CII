/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).
*/

#include<iostream>
using namespace std;

bool primo(int x){
    bool condicion;
    if(x!=1 && x!=0){

        for(int i=2; i<=x; i++){
            if(x%i == 0){
                if(x==i){
                    condicion=true;
                }
                else{
                    condicion=false;
                    return condicion;
                }
            }
        }
    }
    else condicion = false;

    return condicion;
}

int main(){
    int x;
    cout<<"Ingrese hasta que numero buscar ";cin>>x;
    for(int i=1; i<=x; i++){
        if(primo(i))
            cout<<i<<"\t";
    }
}
