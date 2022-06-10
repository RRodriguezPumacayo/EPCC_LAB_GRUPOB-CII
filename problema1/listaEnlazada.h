#ifndef LISTAENLAZADA_H_INCLUDED
#define LISTAENLAZADA_H_INCLUDED
#include <iostream>

using namespace std;

class lista{
    private:
        int *elementos;
        int *agregar;
        int *band;
    public:
        lista();
        void inputDate();
        void inicio();
        void medio();
        void getDates();
        void eliminar();

};

#endif // LISTAENLAZADA_H_INCLUDED
