#include"cosas.h"

RGB::RGB(){

}

RGB::~RGB(){    
}

Material::Material(){

}

Material::~Material(){

}

Objetos::Objetos(string _object){
    object = _object;
}

Objetos::~Objetos(){

}

int RGB::inputColor(){
    color = new string[3];
    for(int i{0};i<3;i++){
        cout<<"Ingrese un color : ";cin>>color;
    }
}

int Material::inputMaterial(){
    cout<<"Ingrese un material :  ";cin>>cosa;
}

int Objetos::describeObject(string object){
    cout<<"Tenemos un(a) "<<object<<" de "<<cosa<<" y de color "<<color1;
}