#include"claseBase.h"

RGB::RGB(){
}

RGB::~RGB(){
}

Material::Material(){
}

Material::~Material(){
}

Objetos::Objetos(){
}

Objetos::~Objetos(){
}

void RGB::inputBaseColores(){
    colores = new string[3];
    for(int i{0};i<3;i++){
        cout<<"Input Color ["<<i<<"] = ";getline(cin,colores[i]);
    }
}

void Material::inputBaseMateria(){
    cout<<"Input Materia = ";getline(cin,materia);
}

void Objetos::inputObjeto(){
    cout<<"Input Objeto = ";getline(cin,objeto);
}

void Objetos::mostrar(){
    cout<<"Objeto es : "<<objeto<<endl;
    cout<<"Materia prima del objeto: "<<materia<<endl;
    cout<<"Los Colores del objeto son:\n";
    for(int i{0};i<3;i++)
        cout<<colores[i]<<endl;

}


