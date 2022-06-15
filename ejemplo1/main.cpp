#include"cabecera.h"

int main()
{
    Torres T;
    T.Inicializa();

    T.insertar(20);
    T.insertar(30);
    T.insertar(40);

    T.mostrarTorres();
    cout<<"\nBuscar elemento\n";
    T.buscarDisco(1);
    cout<<"\nEliminando al inicio\n";
    T.eliminarDisco();
    T.mostrarTorres();
    T.buscarDisco(1);

    /*
    cout<<"PILAS JAAAAAAA\n";
    T.insertarInicio(1242140);
    cout<<"Agregando al inicio\n";
    T.mostrarTorres();
    cout<<"Eliminando al inicio\n";
    T.eliminarDisco();
    T.mostrarTorres();
    return 0;
    */
}
