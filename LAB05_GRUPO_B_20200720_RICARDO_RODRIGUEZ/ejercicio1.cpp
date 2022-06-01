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

<<<<<<< HEAD
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

=======
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
>>>>>>> 3e76562da92f3a507797194d3f83847031b59d6d
}
