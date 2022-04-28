/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||

*/
/*
1. Sumar todos los enteros pares desde 2 hasta 100.
2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.
3. Escribir un programa que visualice en pantalla los números múltiplos de 5
comprendidos entre 1 y 100.
4. Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. Muestre
todos los números primos que se encuentren entre el rango de valores, de no
encontrarse, mostrar el primo más cercano a 𝑥 o 𝑦.
5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la
media de los números leídos.
6. Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando
los dos anteriores a él.
7. Calcula el promedio de 3 notas para n estudiantes.
8. Escribir un programa que genere la tabla de multiplicar de un número introducido por
el teclado.
9. Escribir un programa que pida al usuario un número entero y muestre por pantalla un
triángulo rectángulo como el de más abajo, de altura el número introducido.
*
**
***
****
*****
10. Escribir un programa que pida al usuario una palabra y luego muestre por pantalla
una a una las letras de la palabra introducida empezando por la última.
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include <math.h>

using namespace std;

int exercise1(){
    cout<<"Problema 1:\n";
    int suma;
    for(int i=2;i<=100;i++){
        if(i%2==0){
            suma = suma + i;
        }
    }
    cout<<"La suma de los pares entre 1-100 es:"<<suma<<endl;
}

void exercise2(int n) {
    cout<<"Problema 2:\n";
    while (n%2 == 0){
        cout<<"2\t";
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2){
        while (n%i == 0){
            cout<<i<<"\t";
            n = n/i;
        }
    }
    if (n > 2)
        cout<<n<<"\t";
    cout<<endl;
}

int exercise3(){
    cout<<"Problema 3:\n";
    for(int i=1;i<=100;i++){
        if(i%5==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int exercise4(){
    int x,y;
    do{
        cout<<"Ingrese el valor de X: ";cin>>x;
        cout<<"Ingrese el valor de Y: ";cin>>y;
        if(x>y){
            cout<<"Y debe ser mayor a X\n";
        }

        if(x<y){
            int n=y;
            while (n%2 == 0){
                cout<<"2\t";
                n = n/2;
            }
            for (int i = x; i <= sqrt(n); i = i+2){
                while (n%i == 0){
                    cout<<i<<"\t";
                    n = n/i;
                }
            }
            if (n > 2){
                cout<<n<<"\t";
            }
            cout<<endl;
            break;
        }
    }
    while(x>y);
}

int exercise5(){
    cout<<"Problema 5:\n";
    int n;
    cout<<"Cantidad de numeros a leer: ";cin>>n;
    int numeros[n],aux,mayor,menor,media=0;

//Ingresar numeros
    for(int i=0;i<n;i++){
        cout<<"Ingrese numero:";cin>>numeros[i];
    }

//Ordenar los numeros

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(numeros[j]>numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
//Media
    for(int i=0;i<n;i++){
        media = media + numeros[i];
    }
    media = media/2;

//Imprimir
    cout<<"El numero mayor es: "<<numeros[n-1]<<endl;
    cout<<"El numero menor es: "<<numeros[0]<<endl;
    cout<<"La media es: "<<media<<endl;
}

int exercise6(){
    cout<<"Problema 6\n";
    int a=0,b=1,c=1,n;
    cout<<"Rango de la series de Fibonacci: ";cin>>n;
    for(int i=1;i<=n;i++)
    {
        c = a+b;
        a = b;
        cout<<a<<" ";
        b = c;
    }
    cout<<endl;
}

int exercise7(){
    int note,n;
    float promedy=0;
    cout<<"Numero de estudiantes: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            note = rand();
            note = rand()%20;
            promedy = promedy + note;
        }
        cout<<"El promedio del alumno "<<i<<" es: "<<promedy/3<<endl;
    }
}

int exercise8(){
    cout<<"Problema 8:\n";
    int num;
    cout<<"Ingrese el numero: ";cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<"|"<<i*j<<"\t";
        }
        cout<<endl;
    }
}

int exercise9(){
    cout<<"Problem 9:\n";
    int num;
    cout<<"Ingrese el numero: ";cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int exercise10(){
    cout<<"Problema 10:\n";
    char palabra[100];
    cout<<"La palabra es: ";cin>>palabra;
    for(int i=strlen(palabra);i>=0;i--){
        cout<<palabra[i]<<" ";
    }
}

int main()
{
    int opc;
    do{
        cout<<"\n|||  MENU    |||"<<endl;
        cout<<"Escoja cualquier problema del 1-10\n";
        cout<<"Menos el 2 y 4\n";
        cout<<"Introdusca 11 para terminar el programa\n";
        cin>>opc;
        if(opc==1){
            exercise1();
        }
        if(opc==3){
            exercise3();
        }
        if(opc==5){
            exercise5();
        }
        if(opc==6){
            exercise6();
        }
        if(opc==7){
            exercise7();
        }
        if(opc==8){
            exercise8();
        }
        if(opc==9){
            exercise9();
        }
        if(opc==10){
            exercise10();
        }
        if(opc==11){
            break;
        }
    }
    while(opc!=11);

    return 0;

}
