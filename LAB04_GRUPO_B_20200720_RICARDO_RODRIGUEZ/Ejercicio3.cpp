/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
3. Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números que estén en una fila par.
*/
#include<iostream>

using namespace std;

int main(){
    int array[5][3],num=0,sum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<"Pos "<<i<<","<<j<<" = ";cin>>num;
            if(i%2==0){
                sum += num;
            }
        }
    }
    cout<<"La suma de las filas pares es: "<<sum;
}
