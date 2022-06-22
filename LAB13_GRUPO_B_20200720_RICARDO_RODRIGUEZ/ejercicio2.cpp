/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*
2. Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computación. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podrá ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada ítem es 15%, 20%, 25% y 40% respectivamente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;

struct Notas{
    int notaf1;
    int notaf2;
    int notaf3;
    int notafinal;
    int proyecto;
    char name[20];
    char grupo[20];
};

void getNotas(int n, Notas m[]);
void mostrar(int n, Notas m[]);

int main()
{
    int n;
    cout<<"Ingrese numero de compañeros: ";cin>>n;
    Notas examen[n];
    getNotas(n, examen);
    mostrar(n, examen);
    system("PAUSE");

}

void getNotas(int n, Notas m[]){
    for(int i=0;i<n;i++){
        cout<<"Estudiante "<<i+1<<":\n";
        cout<<"Nombre del estudiante: ";cin>>m[i].name;
        cout<<"Grupo del estudiante: ";cin>>m[i].grupo;
        cout<<"Nota 1 fase: ";cin>>m[i].notaf1;
        cout<<"Nota 2 fase: ";cin>>m[i].notaf2;
        cout<<"Nota 3 fase: ";cin>>m[i].notaf3;
        cout<<"Nota Proyecto final: ";cin>>m[i].proyecto;
        m[i].notafinal = ((15*m[i].notaf1)/100) + ((20*m[i].notaf2)/100) + ((25*m[i].notaf3)/100) + ((40*m[i].proyecto)/100);
    }
}

void mostrar(int n, Notas m[]){
    cout<<"\n| Mostrando Estudiantes |\n";
    for(int i=0;i<n;i++){
        cout<<"Estudiante "<<m[i].name<<endl;
        cout<<"Grupo: "<<m[i].grupo<<endl;
        cout<<"Notas: "<<m[i].notaf1<<" | "<<m[i].notaf2<<" | "<<m[i].notaf3<<endl;
        cout<<"Proyecto Final: "<<m[i].proyecto<<endl;
        cout<<"Nota Final: "<<m[i].notafinal<<endl;
    }
}
