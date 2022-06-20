#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED
#include <iostream>

using namespace std;

class Colas{
    private:
        int nro;
        int pos;
        int iteraciones;
        Colas *sig;
        Colas *h;
        Colas *h2;
    public:
        void Inicializa();
        bool Vacio();
        void agregarCola(int nro);
        void agregarCola2(int nro);
        void mostrarCola();
        void mostrarCola2();
        void eliminarCola();
        void eliminarCola2();
        void buscarCola1();
        void buscarCola2();
        void compararCola();
};

#endif // CABECERA_H_INCLUDED
