#ifndef CLASSELIPSE_H_INCLUDED
#define CLASSELIPSE_H_INCLUDED
#include"classForma.h"

class Elipse:public Forma{
    private:
        double area;
        double radio_mayor;
        double radio_menor;
    public:
        Elipse();
        ~Elipse();
        void setLado();
        void setArea();
        void imprimir();
};

#endif // CLASSELIPSE_H_INCLUDED
