#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED
#include <iostream>

using namespace std;

class Torres{
    private:
        int nro;
        int pos;
        Torres *sig;
        Torres *h1;
    public:
        void Inicializa();
        bool Vacio();
        void insertar(int nro);
        void insertarInicio(int nro);
        void mostrarTorres();
        void buscarDisco(int pos);
        void eliminarDisco();

};

#endif // CABECERA_H_INCLUDED
