/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días.
*/

#include<iostream>
using namespace std;

int anios(int anio,int dia, int mes, int a, int d, int m){
    int band=0,band1=0,band2=0;

    if(dia>0 && dia<=30 && d>0 && d<=30){
        band = dia - d;
    }
    if(mes>0 && mes<=12 && m>0 && m<=12){
        band1 = mes - m;
    }
    band2 = anio-a;
    cout<<"Tienes "<<band<<" dias , "<<band1<<" meses, "<<band2<<" anios";
}

int main()
{
    int dia,mes,anio, nas_dia,nas_mes,nas_anio;
    cout<<"FECHA ACTUAL:\n";
    cout<<"Dia: ";cin>>dia;
    cout<<"Mes: ";cin>>mes;
    cout<<"Anio: ";cin>>anio;
    cout<<"FECHA NACIMIENTO:\n";
    cout<<"Dia: ";cin>>nas_dia;
    cout<<"Mes: ";cin>>nas_mes;
    cout<<"Anio: ";cin>>nas_anio;
    anios(anio,dia,mes, nas_anio,nas_dia,nas_mes);
}
