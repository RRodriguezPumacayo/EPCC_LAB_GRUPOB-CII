#include"fecha.h"

Fecha::Fecha(int nac_dia, int nac_mes, int nac_anio, int act_dia, int act_mes, int act_anio, string _nombre, int _edad)
{
    dia = nac_dia;
    mes = nac_mes;
    anio = nac_anio;
    dia2 = act_dia;
    mes2 = act_mes;
    anio2 = act_anio;
    nombre = _nombre;
    edad = _edad;
}

Fecha::~Fecha()
{

}

void Fecha::intNacimiento()
{
    cout<<"Dia de nacimiento: ";cin>>dia;
    cout<<"Mes de nacimiento: ";cin>>mes;
    cout<<"Anio de nacimiento: ";cin>>anio;
}

void Fecha::intActual()
{
    cout<<"Dia de actual: ";cin>>dia2;
    cout<<"Mes de actual: ";cin>>mes2;
    cout<<"Anio de actual: ";cin>>anio2;
}

void Fecha::printNacimiento()
{
    cout<<"Fecha de nacimiento: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

void Fecha::printActual()
{
    cout<<"Fecha de actual: "<<dia2<<"/"<<mes2<<"/"<<anio2<<endl;
}

void Fecha::printEdad()
{
    if(anio>anio2)
        cout<<"Las fechas no tienen sentido, fecha de nacimiento sucedio despues del presente";
    else{
        edad = anio2 - anio;
        cout<<"Tu edad es: "<<edad;
    }

}
