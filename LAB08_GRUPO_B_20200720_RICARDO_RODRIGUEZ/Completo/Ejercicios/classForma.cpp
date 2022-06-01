#include"classForma.h"

Forma::Forma(){
}

Forma::~Forma(){
}

void Forma::setName(){
    nombre = new char[50];
    cout<<"Ingrese el nombre de la Figura: ";cin>>nombre;
}

void Forma::setColor(){
    cout<<"Ingrese el color de la Figura: ";cin>>color;
}

void Forma::changeColor(){
    cout<<"\nIngrese el Nuevo Color de la Figura: ";cin>>color;
}

void Forma::setLado(){
    cout<<"Ingrese Lado: ";cin>>lado;
}

void Forma::setArea(){
    double area = lado*lado;
    cout<<"Area = "<<area<<endl;
}

void Forma::imprimir(){
    cout<<"\n|||  IMPRIMIR DATOS   |||\n";
    cout<<"Nombre de la Figura: "<<nombre<<endl;
    cout<<"Color de la Figura: "<<color<<endl;
    cout<<"Objeto Punto: "<<coordenada<<endl;
}
