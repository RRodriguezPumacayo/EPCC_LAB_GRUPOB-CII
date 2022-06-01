#include"classRectangulo.h"

Rectangulo::Rectangulo(){
}

Rectangulo::~Rectangulo(){

}

void Rectangulo::setLado(){
    double aux{0};
    cout<<"Ingrese un Lado = ";cin>>lado_menor;
    cout<<"Ingrese el otro Lado = ";cin>>lado_mayor;
    if(lado_menor>lado_mayor){
        aux = lado_mayor;
        lado_mayor = lado_menor;
        lado_menor = aux;
    }
}

void Rectangulo::setArea(){
    area = lado_mayor*lado_menor;
    cout<<"El Area del Rectangulo es: "<<area<<endl;
}

void Rectangulo::setPerimetro(){
    perimetro = (2*lado_mayor)+(2*lado_menor);
    cout<<"El Perimetro del Rectangulo es: "<<perimetro<<endl;
}

void Rectangulo::changeSize(){
    area = lado_mayor*lado_menor;
    double factor{0};
    cout<<"Ingrese el factor de escala: ";cin>>factor;
    area = area * factor;
    cout<<"El nuevo tamanio del Rectangulo es: "<<area;
}

void Rectangulo::imprimir(){
    cout<<"\n|||  IMPRIMIR DATOS   |||\n";
    cout<<"Nombre de la Figura: "<<nombre<<endl;
    cout<<"Color de la Figura: "<<color<<endl;
    cout<<"Lado menor: "<<lado_menor<<endl;
    cout<<"Lado mayor: "<<lado_mayor<<endl;
    coordenada = (lado_mayor+lado_menor)/2;
    cout<<"Centro: "<<coordenada<<endl;
}
