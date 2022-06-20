/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*
1. Defina una Cola que permita insertar elementos utilizando clases.
2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Cola.
3. Implemente un algoritmo para buscar elementos de la Cola.
4. Escribir un programa que permita comparar las edades de diferentes elementos.
Debe utilizar el formato de colas en clases. Se debe definir· inicialmente el
número de elementos y valores de cada cola (pudiendo ser de diferentes tamaños
ej. 2-3). Se evaluará el resultado de la comparación de los primeros elementos de
las colas, realizada en un número de iteraciones 'n', en cada iteración se debe
realizar el procedimiento de inserción y eliminación de elementos (rotando los
elementos definidos inicialmente)
*/
#include"cabecera.h"

int main()
{
    Colas C;
    C.Inicializa();
    Colas C2;
    C2.Inicializa();

    int opc{0};
    int elementos{0},nro{0};

    do
    {
        system("cls");
        cout<<"|||  MENU   |||\n";
        cout<<"\n 1) Numero de elementos en la cola 1\n";
        cout<<"\n 2) Numero de elementos en la cola 2\n";
        cout<<"\n 3) Mostrar elementos en la cola 1\n";
        cout<<"\n 4) Mostrar elementos en la cola 2\n";
        cout<<"\n 5) Eliminar elemento Cola1\n";
        cout<<"\n 6) Eliminar elemento Cola2\n";
        cout<<"\n 7) Buscar elemento Cola1\n";
        cout<<"\n 8) Buscar elemento Cola2\n";
        cout<<"\n 9) Comparar Cola1 y Cola2\n";
        cout<<"\n 10) SALIR  \n";
        cout<<"\n Elija: ";cin>>opc;
        cout<<endl;
        switch(opc)
        {
        case 1:
        {
            system("cls");
            cin.ignore();
            cout<<"Ingrese el numero de elementos de la Cola 1: ";
            cin>>elementos;
            for(int i{1};i<=elementos;i++){
                cout<<"Numero agregar a la posicion "<<i<<" de la cola 1\n";cin>>nro;
                C.agregarCola(nro);
            }
            cin.get();
            cin.get();
            break;
        }
        case 2:
        {
            system("cls");
            cout<<"Ingrese el numero de elementos de la Cola 2: ";
            cin.ignore();
            cin>>elementos;
            for(int i{1};i<=elementos;i++){
                cout<<"Numero agregar a la posicion "<<i<<" de la cola 2\n";cin>>nro;
                C.agregarCola2(nro);
            }
            cin.get();
            cin.get();
            break;
        }
        case 3:
        {
            system("cls");
            C.mostrarCola();
            cin.get();
            cin.get();
            break;
        }
        case 4:
        {
            system("cls");
            C.mostrarCola2();
            cin.get();
            cin.get();
            break;
        }
        case 5:
        {
            system("cls");
            C.eliminarCola();
            C.mostrarCola();
            cin.get();
            cin.get();
            break;
        }
        case 6:
        {
            system("cls");
            C.eliminarCola2();
            C.mostrarCola2();
            cin.get();
            cin.get();
            break;
        }
        case 7:
        {
            system("cls");
            C.buscarCola1();
            cin.get();
            cin.get();
            break;
        }
        case 8:
        {
            system("cls");
            C.buscarCola2();
            cin.get();
            cin.get();
            break;
        }
        case 9:
        {
            system("cls");
            int nro{0};
            cin.ignore();
            C.compararCola();
            cin.get();
            cin.get();
            break;
        }
        }
    }
    while(opc != 10);

    return 0;
}
