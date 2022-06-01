/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
1. Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.
*/

#include<iostream>

using namespace std;

int intercambio(int *a, int *b){
    cin>>*a;
    cin>>*b;
    int temp{*a};
    cout<<"X y Y antes del intercambio: \n";
    cout<<"X: "<<*a<<endl;
    cout<<"Y: "<<*b<<endl;
    a = b;
    b = &temp;
    cout<<"X y Y antes del intercambio: \n";
    cout<<"X: "<<*a<<endl;
    cout<<"Y: "<<*b<<endl;

}

int main(){
    int x=NULL; int y=NULL;
    intercambio(&x,&y);

}
