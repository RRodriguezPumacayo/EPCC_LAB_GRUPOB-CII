/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*
1. Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleaños de sus n compañeros. Y debe mostrarse
por pantalla quienes cumplen años en este mes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;

struct Datos{
    int dia;
    int mes;
    int anio;
    char name[20];
};

void getDatos(int n, Datos m[]);
void mostrar(int n, Datos m[]);
void mesActual(int n, Datos m[]);

int main()
{
    int n;
    cout<<"Ingrese numero de compañeros: ";cin>>n;
    Datos dias[n];
    getDatos(n, dias);
    mostrar(n, dias);
    mesActual(n, dias);
    system("PAUSE");

}

void getDatos(int n, Datos m[]){
    for(int i=0;i<n;i++){
        cout<<"Estudiante "<<i+1<<":\n";
        cout<<"Nombre del estudiante: ";cin>>m[i].name;
        cout<<"Dia de nacimiento: ";cin>>m[i].dia;
        cout<<"Mes de nacimiento: ";cin>>m[i].mes;
        cout<<"Anio de nacimiento: ";cin>>m[i].anio;
    }
}

void mostrar(int n, Datos m[]){
    cout<<"\n| Mostrando Estudiantes |\n";
    for(int i=0;i<n;i++){
        cout<<"Estudiante "<<m[i].name<<endl;;
        cout<<m[i].dia<<" / "<<m[i].mes<<" / "<<m[i].anio<<endl;
    }
}

void mesActual(int n, Datos m[]){
    int actual;
    cout<<"Ingrese el mes actual: ";cin>>actual;
    cout<<"Este mes cumplen años los siguientes estudiantes:\n";
    for(int i=0;i<n;i++){
        if(m[i].mes == actual){
            cout<<"Estudiante "<<m[i].name<<endl;;
            cout<<m[i].dia<<"/ "<<m[i].mes<<"/ "<<m[i].anio<<endl;
        }
    }
}
