#ifndef CLASSCIRCULO_H_INCLUDED
#define CLASSCIRCULO_H_INCLUDED
#include"classElipse.h"

class Circulo:public Elipse{
    private:
        double area;
        double radio;
    public:
        Circulo();
        ~Circulo();
        void setLado();
        void setArea();
        void imprimir();
};

#endif // CLASSCIRCULO_H_INCLUDED
