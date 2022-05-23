#ifndef CLASSFORMA_H_INCLUDED
#define CLASSFORMA_H_INCLUDED
#include<iostream>
using namespace std;

class Forma{
    protected:
        string color;
        double coordenada;
        double lado;
        char* nombre;
    public:
        Forma();
        ~Forma();
        virtual void imprimir();
        virtual void setLado();
        virtual void setArea();
        void setName();
        void setColor();
        void changeColor();
        void moverCentro();
};

#endif // CLASSFORMA_H_INCLUDED
