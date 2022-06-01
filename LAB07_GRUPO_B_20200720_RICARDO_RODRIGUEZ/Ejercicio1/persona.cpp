#include"persona.h"

persona::persona(){
}

persona::~persona(){
}

alumno::alumno(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

alumno::~alumno(){
}

void alumno::inputName(){
    cout<<"The name is: ";getline(cin,nombre);

}

void alumno::inputAge(){
    cout<<"The age is: ";cin>>edad;
}

void alumno::mostrarDatos(){
    cout<<"The name is: "<<nombre<<endl;
    cout<<"The age is: "<<edad;
}
