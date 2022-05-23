#include"classCirculo.h"

Circulo::Circulo(){

}

Circulo::~Circulo(){

}

void Circulo::setLado(){
    cout<<"Ingrese el radio = ";cin>>radio;
}

void Circulo::imprimir(){
    cout<<"\n|||  IMPRIMIR DATOS   |||\n";
    cout<<"Nombre de la Figura: "<<nombre<<endl;
    cout<<"Radio = "<<radio<<endl;
}

void Circulo::setArea(){
    double pi=3.14;
    area = pi*(radio*radio);
    cout<<"El area es = "<<area;
}

