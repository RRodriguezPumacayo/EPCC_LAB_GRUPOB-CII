#ifndef CORREO_H_INCLUDED
#define CORREO_H_INCLUDED
#include <iostream>

using namespace std;

template<class T, class T2>
class Correo{
    private:
        T x;
        T2 y;
    public:
        Correo(T x=0, T2 y=0);
        void crearCorreo(){
            cout<<x<<y<<"@unsa.edu.pe\n";
        }
};

template<class T, class T2>

Correo<T, T2>::Correo(T _x, T2 _y){
    this->x = _x;
    this->y = _y;
}

#endif // CORREO_H_INCLUDED
