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

int main(){
    int *x=NULL,*y=NULL,a=20,b=30;
    x = &a;
    y = &b;
    cout<<"X y Y antes del intercambio: \n";
    cout<<"X: "<<*x<<endl;
    cout<<"Y: "<<*y<<endl;
    x = &b;
    y = &a;
    cout<<"X y Y antes del intercambio: \n";
    cout<<"X: "<<*x<<endl;
    cout<<"Y: "<<*y<<endl;
}
