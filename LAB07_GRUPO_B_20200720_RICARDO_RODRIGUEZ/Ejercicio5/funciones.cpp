#include"operacionFactorial.h"

Base::Base(){
}

Base::~Base(){
}

Factorial::Factorial(){
}

Factorial::~Factorial(){
}

void Base::setOperador(int){
    cout<<"Ingrese la base = ";cin>>operador;
    int aux=operador;
    int aux2=1;
    for(int i{2};i<=aux;i++){
        aux2 = i * aux2;
    }
    operador = aux2;
}

int Base::getOperador(){
    cout<<"La base es = "<<operador<<endl;
}

int Factorial::devolverFactorial(){
    cout<<"El factorial es = "<<operador<<endl;
}
