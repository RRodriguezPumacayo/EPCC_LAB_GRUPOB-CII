/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las
siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100.}
b. Validar que sea un valor par.
c. Sumar todos los números impares desde el 0 hasta el valor de x.
*/

#include<iostream>
using namespace std;

int valor(int num){
    if(num>=0 && num<=100){
        return num;
    }
}

int par(int valor){
    if(valor%2==0){
        return valor;
    }
}

int impar(int valor){
    int band=0;
    for(int i=0;i<valor;i++){
        if(i%2!=0){
            band = band + i;
        }
    }
    return band;
}

int main()
{
    int num;
    cout<<"Ingrese un numero: ";cin>>num;
    if(valor(num)){
        cout<<"Esta entre 0-100\n";
    }
    if(valor(par(valor(num)))){
        cout<<"Es par\n";
    }
    cout<<"La suma de los impares es: "<<impar(valor(num));
}
