#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED
#include<iostream>
using namespace std;

class rectangulo
{
    private:
        float base,altura;
    public:
        rectangulo(float, float);
        ~rectangulo();
        int ingresarBase();
        int ingresarAltura();
        void area();
        void perimetro();
};

#endif RECTANGULO_H_INCLUDED
