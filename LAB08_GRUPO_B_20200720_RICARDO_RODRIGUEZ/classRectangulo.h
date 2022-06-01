#ifndef CLASSRECTANGULO_H_INCLUDED
#define CLASSRECTANGULO_H_INCLUDED
#include"classForma.h"

class Rectangulo: public Forma{
    private:
        double lado_menor;
        double lado_mayor;
        double area;
        double perimetro;
    public:
        Rectangulo();
        ~Rectangulo();
        void setLado();
        void setArea();
        void setPerimetro();
        void changeSize();
        void imprimir();

};

#endif // CLASSRECTANGULO_H_INCLUDED
