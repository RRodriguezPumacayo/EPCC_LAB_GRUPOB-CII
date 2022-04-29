/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
2. Hacer un programa que lea por teclado un a�o, calcule y muestre si es bisiesto. Para
realizar el c�lculo utiliza una funci�n llamada bisiesto. La funci�n bisiesto recibe el
a�o le�do por teclado, comprueba si es o no bisiesto.
*/

#include<iostream>

using namespace std;

int bisiesto(int anio){
    if(anio%4==0){
        if(anio%100==0 && anio%400==0){
            return true;
        }
        else
            return false;
        return true;
    }
    else
        return false;
}

void imprimir(int funcion){
    if(funcion==true){
        cout<<"El anio es bisiesto";
    }
    else
        cout<<"El anio no es bisiesto";
}

int main(){
    int anio;
    cout<<"Ingrese el anio: ";cin>>anio;
    imprimir(bisiesto(anio));
}
