/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||

*/

/*
Ejercicios
Resolver los siguientes ejercicios planteados:
    1. Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
    el producto de ambos.

    2. Escriba un código que solicite el primer nombre de una persona, el apellido paterno
    y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
    primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
    materno. (se agrega el dominio de la universidad al final).

    3. Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de
    cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el
    formato de salida debe de estar en AM o PM según corresponda).

    4. Escriba un código que solicite una cantidad de minutos específica y muestre como
    resultado la hora y fecha resultante tomando como referencia la hora y fecha actual y
    restarle el tiempo indicado.

    5. Elabore un código que reciba como entrada una secuencia de caracteres que contiene
    un numero flotante y retorne el número redondeado.

    6. Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
    en binario.

    7. Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
    divisor del otro.

    8. Escribir un programa que calcule la media de x cantidad números introducidos por el
    teclado.

    9. Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean
    negativos.

    10. Escribir un programa que almacene la cadena de caracteres contraseña en unas
    variable, pregunte al usuario por la contraseña hasta que introduzca la contraseña
    correcta.

*/

#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int exercise1(){
    cout<<"Problema 1: Escriba un codigo que solicite al usuario ingresar dos numeros enteros y que muestre el producto de ambos"<<endl;
    int num, num2;
    cout<<"Ingrese el primer numero ";cin>>num;
    cout<<"Ingrese el segundo numero ";cin>>num2;
    cout<<"El producto de los dos numeros es: "<<num*num2;
}

int exercise2(){
    cout<<"Problema 2: Escriba un codigo que solicite el primer nombre de una persona, el apellido paterno y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la primera letra del nombre, el apellido paterno completo, y la primera letra del apellidomaterno. (se agrega el dominio de la universidad al final)."<<endl;
    char nombre[100];
    char llidopaterno[100];
    char llidomaterno[100];

    cout<<"Nombre: ";cin>>nombre;
    cout<<"Apellido paterno: ";cin>>llidopaterno;
    cout<<"Apellido materno: ";cin>>llidomaterno;
    nombre[0] = towlower(nombre[0]);
    llidomaterno[0] = towlower(llidomaterno[0]);
    llidopaterno[0] = towlower(llidopaterno[0]);
    cout<<"Su correo es: \n"<<nombre[0]<<llidopaterno<<llidomaterno[0]<<"@unsa.edu.pe";
}

int exercise3(){
    cout<<"Problema 3: Elabore un programa que solicite ingresar una hora del dia (HH:MM en formato de cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el formato de salida debe de estar en AM o PM según corresponda).\n";
    int hora,minutos,agregar;
    cout<<"Ingrese la hora: ";cin>>hora;
    cout<<"Ingrese los minutos: ";cin>>minutos;
    if(hora>9 && hora<=24){
        cout<<"Minutos a agregar:";cin>>agregar;
        if(agregar>=60){
            agregar = agregar%60;
            cout<<"La hora es: "<<hora<<":"<<minutos;
        }
    }
    if(hora<=9 && hora>=0){
        cout<<"Minutos a agregar:";cin>>agregar;
        if(agregar>=60){
            hora = hora + agregar%60;
            cout<<"La hora es: 0"<<hora<<":"<<minutos;
        }
    }
}
int exercise4(){
    cout<<"Problema 4: Escriba un codigo que solicite una cantidad de minutos especifica y muestre como resultado la hora y fecha resultante tomando como referencia la hora y fecha actual y restarle el tiempo indicado."<<endl;
    int minutos,hora=19,dia=21,mes=4,anio=2022;
    cout<<"Ingrese la cantidad de minutos: ";cin>>minutos;
    if(minutos>=60){
        hora = hora - (minutos/60);
    }
    else{
        hora = hora - 1;
    }
    if(minutos>=1440){
        dia = dia-(minutos/1440);
    }
    cout<<"La fecha modificada es: "<<hora<<" horas, "<<dia<<"/"<<mes<<"/"<<anio;
}

int exercise5(){
    cout<<"Problema 5: Elabore un codigo que reciba como entrada una secuencia de caracteres que contienen numero flotante y retorne el numero redondeado."<<endl;
    double num,redondeado,entero;
    cout<<"Ingrese numero: ";cin>>num;
    redondeado = modf(num,&entero);
    redondeado = 1 - redondeado;
    if(redondeado<=0.5){
        cout<<"El numero redondeado es: "<<num+redondeado;
    }
    else{
        cout<<"El numero redondeado es: "<<entero;
    }
}

int exercise6(int num){
    if(num>1){
        exercise6(num/2);
    }
    cout<<num%2<<" ";

}

int exercise7(){
    cout<<"Problema 7: Elabore un algoritmo que lea por teclado dos numeros enteros y determine si uno es divisor del otro."<<endl;
    int num1,num2;
    cout<<"El primer numero es: ";cin>>num1;
    cout<<"El segundo numero es: ";cin>>num2;
    if(num1%num2==0 || num2%num1==0){
        cout<<"Los numeros "<<num1<<" y "<<num2<<"son divisibles entre ellos"<<endl;
    }
    else{
        cout<<"Ninguno es divisor del otro";
    }
}

int exercise8(){
    cout<<"Problema 8: Escribir un programa que calcule la media de x cantidad numeros introducidos por el teclado."<<endl;
    int num,j=1;
    float dato,sum=0;
    cout<<"Numero de datos: ";cin>>num;
    for(int i=0;i<num;i++){
        cout<<"Ingrese el "<<j++<<" dato: ";cin>>dato;
        sum = sum + dato;
    }
    cout<<"La media es: "<<sum/2;
}

int exercise9(){
    cout<<"Problema 9: Escribir un programa que lea 10 datos desde el teclado y sume solo aquellos que sean negativos."<<endl;
    int j=1,dato,sum=0;
    for(int i=0;i<10;i++){
        cout<<"Ingrese el "<<j++<<" dato: ";cin>>dato;
        if(dato<0){
            sum = sum + dato;
        }
    }
    cout<<"La suma de los numeros negativos es: "<<sum;
}

int exercise10(){
    cout<<"Problema 10: Escribir un programa que almacene la cadena de caracteres contrasenia en una variable, pregunte al usuario por la contrasenia hasta que introduzca la contrasenia correcta."<<endl;
    char key[]="pacho2020";
    char adivina[100];
    do{
        cout<<"Introdusca la contrasena: ";cin>>adivina;
        if(strcmp(key,adivina)==0){
            cout<<"La contrasena es correcta"<<endl;
            break;
        }
        else{
            cout<<"Intente de nuevo"<<endl;
        }
    }
    while(adivina!=key);

}

int main()
{
    int opc;
    cout<<"|||  Son 10 ejercicios   |||"<<endl;
    cout<<"Escoja un ejercicio: ";cin>>opc;
    switch(opc){
        case 1:
            exercise1();
        break;
        case 2:
            exercise2();
        break;
        case 3:
            exercise3();
        break;
        case 4:
            exercise4();
        break;
        case 5:
            exercise5();
        break;
        case 6:
            int num;
            cout<<"Problema 6: Elabore un codigo que solicite un numero entre 100 < x < 999 y muestre el resultado en binario."<<endl;
            cout<<"Digite un numero dentro del rango de 0-100: ";cin>>num;
            if(num>=0 && num<=100){
                exercise6(num);
            }
            else{
                cout<<"El numero no esta en el rango de 0-100";
            }
        break;
        case 7:
            exercise7();
        break;
        case 8:
            exercise8();
        break;
        case 9:
            exercise9();
        break;
        case 10:
            exercise10();
        break;
    }
    return 0;
}

