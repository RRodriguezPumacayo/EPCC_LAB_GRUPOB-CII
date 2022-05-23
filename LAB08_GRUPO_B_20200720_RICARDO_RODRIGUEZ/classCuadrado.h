#ifndef CLASSCUADRADO_H_INCLUDED
#define CLASSCUADRADO_H_INCLUDED
#include"classRectangulo.h"

class Cuadrado:public Rectangulo{
    private:
        double lado;
        double area;
    public:
        Cuadrado();
        ~Cuadrado();
        void setLado();
        void setArea();
        void imprimir();

};

#endif // CLASSCUADRADO_H_INCLUDED
