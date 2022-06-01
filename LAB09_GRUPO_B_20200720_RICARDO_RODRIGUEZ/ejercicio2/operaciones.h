#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED
#include <iostream>

using namespace std;

template<class T, class T2>
class Operaciones{
    private:
        T x;
        T2 y;
    public:
        Operaciones(T x=0, T2 y=0);
        void suma(){
            cout<<"SUMA = "<<x+y<<endl;
        }
        void resta(){
            cout<<"RESTA = "<<x-y<<endl;
        }
        void multiplicacion(){
            cout<<"MULTIPLICACION = "<<x*y<<endl;
        }
        void division(){
            cout<<"DIVISION = "<<x/y<<endl;
        }
};

template<class T, class T2>

Operaciones<T,T2>::Operaciones(T _x, T2 _y){
    this->x = _x;
    this->y = _y;
}


#endif // OPERACIONES_H_INCLUDED
