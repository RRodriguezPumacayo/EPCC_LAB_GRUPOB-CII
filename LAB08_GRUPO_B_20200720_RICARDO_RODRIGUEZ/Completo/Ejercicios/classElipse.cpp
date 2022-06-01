#include"classElipse.h"

Elipse::Elipse(){

}

Elipse::~Elipse(){

}

void Elipse::setArea(){
    double pi=3.14;
    area = pi*(radio_mayor*radio_menor);
    cout<<"El Area del Elipse es = "<<area<<endl;
}

void Elipse::setLado(){
    double aux{0};
    cout<<"Ingrese un Radio = ";cin>>radio_menor;
    cout<<"Ingrese el otro Radio = ";cin>>radio_mayor;
    if(radio_menor>radio_mayor){
        aux = radio_mayor;
        radio_mayor = radio_menor;
        radio_menor = aux;
    }
}

void Elipse::imprimir(){
    cout<<"\n|||  IMPRIMIR DATOS   |||\n";
    cout<<"Nombre de la Figura: "<<nombre<<endl;
    cout<<"Radio menor: "<<radio_menor<<endl;
    cout<<"Radio mayor: "<<radio_mayor<<endl;
}
