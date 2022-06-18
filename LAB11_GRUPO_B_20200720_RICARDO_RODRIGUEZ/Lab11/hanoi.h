#ifndef HANOI_H_INCLUDED
#define HANOI_H_INCLUDED
#include <iostream>

using namespace std;

class Torres{
    private:
        int nro;
        int pos;
        Torres *sig;
        Torres *h1;
        Torres *h2;
        Torres *h3;
    public:
        void Inicializa();
        bool Vacio();
        void insertarTorre1(int nro);
        void insertarTorre2(int nro);
        void insertarTorre3(int nro);
        void mostrarTorre1();
        void mostrarTorre2();
        void mostrarTorre3();
        void eliminarTorre1();
        void eliminarTorre2();
        void eliminarTorre3();
        void buscarDisco(int pos);
        void asignarDiscos(int nro);
        void ordenarDiscos(int nro);
};

#endif // HANOI_H_INCLUDED
