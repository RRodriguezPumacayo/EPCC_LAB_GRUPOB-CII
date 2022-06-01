/*1. Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados.*/
#ifndef ARGUMENTOS_H_INCLUDED
#define ARGUMENTOS_H_INCLUDED
#include <iostream>

using namespace std;
template<class T, class T2, class T3>

class Argumentos{
    private:
        T x;
        T2 y;
        T3 z;
    public:
        Argumentos(T x=0, T2 y=0, T3 z=0);
        void ordenar(){
            if(x<y && x<z)
                cout<<"El menor es x = "<<x<<endl;
            else{
                if(y<x && y<z)
                    cout<<"El menor es y = "<<y<<endl;
                else
                    cout<<"El menor es z = "<<z<<endl;
            }

            if(x>y && x>z)
                cout<<"El mayor es x = "<<x<<endl;
            else{
                if(y>x && y>z)
                    cout<<"El mayor es y = "<<y<<endl;
                else
                    cout<<"El mayor es z = "<<z<<endl;
            }
        }
};

template<class T,class T2,class T3>
Argumentos<T,T2,T3>::Argumentos(T x, T2 y, T3 z){
    this->x = x;
    this->y = y;
    this->z = z;
}


#endif // ARGUMENTOS_H_INCLUDED
