#include"persona.h"

alumno::alumno(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

persona::~persona(){
}

void alumno::inputName(){
    cout<<"The name is: ";cin>>nombre;
}

void alumno::inputAge(){
    cout<<"The age is: ";cin>>edad;
}

void alumno::mostrarDatos(){
    cout<<"The name is: "<<nombre;
    cout<<"The age is: "<<edad;
}