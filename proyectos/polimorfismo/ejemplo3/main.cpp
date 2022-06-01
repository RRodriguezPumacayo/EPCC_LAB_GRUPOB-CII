#include "ClaseDerivada.h"

int main()
{
    ClaseBase *bptr;
    ClaseDerivada d;
    bptr = &d;
    // función virtual, enlazada en tiempo de ejecución (polimorfismo en tiempo de ejecución)
    bptr->print();
    // Función no virtual, enlazada en tiempo de compilación
    bptr->show();
}
