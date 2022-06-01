#include "student.h"

Alumno::Alumno(int _cui, string _nombre, string _apellido, float _nota1, float _nota2, float _nota3)
{
    cui = _cui;
    nombre = _nombre;
    apellido = _apellido;
    nota1 = _nota1;
}

Alumno::~Alumno()
{

}

void Alumno::intCUI(){
    cout<<"Alumno, ingrese su CUI: ";cin>>cui;
}

void Alumno::intName(){
    cin.ignore();
    cout<<"Ingrese su nombre: ";getline(cin,nombre);
    cout<<"Ingrese su apellido: ";getline(cin,apellido);
}

void Alumno::intNotas(){
    cout<<"Ingrese las notas: \n";
    cout<<"Nota 1: ";cin>>nota1;
    cout<<"Nota 2: ";cin>>nota2;
    cout<<"Nota 3: ";cin>>nota3;
}

void Alumno::printCUI(){
    cout<<"||   El CUI del estudiante es: "<<cui<<endl;
}

void Alumno::printName(){
    cout<<"||   El nombre del estudiante es: "<<nombre<<endl;
    cout<<"||   El apellido del estudiante es: "<<apellido<<endl;
}

void Alumno::promedio(){
    float prob = (nota1+nota2+nota3)/3;
    cout<<"||   El promedio del estudiante es: "<<prob<<endl;
    if(prob>=10.5){
        cout<<"||   El estudiante esta aprobado"<<endl;
    }
    else
        cout<<"||   El estudiante esta desaprobado"<<endl;
}
