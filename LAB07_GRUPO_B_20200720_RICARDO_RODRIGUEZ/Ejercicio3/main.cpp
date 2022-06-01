/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
3. Dada la siguiente jerarquía de herencia, indica la visibilidad de los atributos de la
clase ProductoBancario en las clases CuentaJoven e Hipoteca.
*/
#include"clases.h"

int main()
{
    CuentaJoven cliente;
    cliente.imprimirProducto();
    cliente.imprimirCuenta();
    cliente.imprimirJoven();
    cout<<endl;
    Hipoteca usuario;
    usuario.imprimirProducto();
    usuario.imprimirPrestamo();
    usuario.imprimirHipoteca();
    return 0;
}
