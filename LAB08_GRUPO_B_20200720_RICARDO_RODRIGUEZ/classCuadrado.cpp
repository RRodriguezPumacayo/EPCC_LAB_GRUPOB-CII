#include"classCuadrado.h"

Cuadrado::Cuadrado(){

}

Cuadrado::~Cuadrado(){
}

void Cuadrado::setLado(){
    cout<<"Ingrese el lado del Cuadrado = ";cin>>lado;
}

void Cuadrado::setArea(){
    area = lado*lado;
    cout<<"El area es = "<<area;
}

void Cuadrado::imprimir(){
    cout<<"\n|||  IMPRIMIR DATOS   |||\n";
    cout<<"Nombre de la Figura: "<<nombre<<endl;
    cout<<"Lado del Cuadrado = "<<lado<<endl;
}

