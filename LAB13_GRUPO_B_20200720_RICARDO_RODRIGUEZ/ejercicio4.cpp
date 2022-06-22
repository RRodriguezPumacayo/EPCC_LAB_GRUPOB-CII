/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*
4. Implemente un programa que maneje un arreglo de estructuras que solicite
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por
pantalla el menor y mayor sueldo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;

struct Empleados{
    int sueldo;
    char name[20];
    char sexo[20];
};

void getEmpleado(int n, Empleados m[]);
void mostrar(int n, Empleados m[]);
void ordenarSueldos(int n, Empleados m[]);

int main()
{
    int n;
    cout<<"Ingrese numero de Empleados: ";cin>>n;
    Empleados trabajador[10];
    getEmpleado(n, trabajador);
    mostrar(n ,trabajador);
    ordenarSueldos(n, trabajador);
    system("PAUSE");
}

void getEmpleado(int n, Empleados m[]){
    for(int i=0;i<n;i++){
        cout<<"Empleado "<<i+1<<":\n";
        cout<<"Nombre del Empleado: ";cin>>m[i].name;
        cout<<"Sexo: ";cin>>m[i].sexo;
        cout<<"Sueldo: ";cin>>m[i].sueldo;
    }
}

void mostrar(int n, Empleados m[]){
    cout<<"\n|    Mostrando Empleados     |\n";
    for(int i=0;i<n;i++){
        cout<<"Empleado "<<m[i].name<<endl;
        cout<<"Sexo: "<<m[i].sexo<<endl;
        cout<<"Sueldo: "<<m[i].sueldo<<endl;
    }
}

void ordenarSueldos(int n, Empleados m[]){
    int aux;
    cout<<"\n|      Mostrando el Mayor y Menor sueldo    |\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(m[j].sueldo > m[j+1].sueldo){
                aux = m[j].sueldo;
                m[j].sueldo = m[j+1].sueldo;
                m[j+1].sueldo = aux;
            }
        }
    }

    cout<<"El MAYOR sueldo es: "<<m[n-1].sueldo<<" soles"<<endl;
    cout<<"El MENOR sueldo es: "<<m[0].sueldo<<" soles"<<endl;
}
