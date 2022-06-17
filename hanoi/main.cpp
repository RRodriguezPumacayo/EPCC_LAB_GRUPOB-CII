#include"tower.h"

int main()
{
    Torres T;

    T.Inicializa();

    T.asignarDiscos(5);
    T.ordenarDiscos();

    cout<<"\nBuscar elemento\n";
    T.buscarDisco(1);
    cout<<"\nEliminando al inicio\n";
    T.eliminarTorre1();
    T.mostrarTorre1();
    T.buscarDisco(1);

}

