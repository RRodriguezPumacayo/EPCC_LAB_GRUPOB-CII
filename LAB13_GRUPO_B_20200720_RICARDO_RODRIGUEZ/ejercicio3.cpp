/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*
3. Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 años y tienen una talla mayor a 1,70 mts de altura.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;

struct Jugadores{
    float talla;
    int edad;
    char name[20];
    char grupo[20];
};

void getJugador(Jugadores m[]);
void mostrar(Jugadores m[]);

int main()
{
    Jugadores player[10];
    getJugador(player);
    mostrar(player);
    system("PAUSE");
}

void getJugador(Jugadores m[]){
    for(int i=0;i<10;i++){
        cout<<"Jugador "<<i+1<<":\n";
        cout<<"Nombre del Jugador: ";cin>>m[i].name;
        cout<<"Edad: ";cin>>m[i].edad;
        cout<<"Talla: ";cin>>m[i].talla;
    }
}

void mostrar(Jugadores m[]){
    cout<<"Mostrando Jugadores\n";
    for(int i=0;i<10;i++){
        if(m[i].edad<20 && m[i].talla>1.70){
            cout<<"El Jugador "<<m[i].name<<" esta por encima del promedio\n";
            cout<<"Edad: "<<m[i].edad<<endl;
            cout<<"Talla: "<<m[i].talla<<endl;
        }
        else{
            cout<<"Jugador "<<m[i].name<<endl;
            cout<<"Edad: "<<m[i].edad<<endl;
            cout<<"Talla: "<<m[i].talla<<endl;
        }
    }
}
