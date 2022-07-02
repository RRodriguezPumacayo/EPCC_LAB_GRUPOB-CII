/*
Resolver los siguientes ejercicios planteados:
Implemente un programa utilizando puntero a punteros que gestione los datos de
stock de una tienda de ropa, la información a recoger será: código, nombre y
precio del producto, asimismo la cantidad en stock. La tienda dispone de 10
productos distintos. El programa debe ser capaz de:
    1. Dar de alta un producto nuevo, es decir Ingresar un nuevo producto.
    2. Dar de baja a un producto. (No hay stock).
    3. Buscar un producto por su nombre o código.
    4. Modificar el nombre, precio o cantidad de un producto dado.
*/
#include "stdio.h"
#include<time.h>
#include "iostream"
using namespace std;

void codigo(int *code){
    code = new int;
    *code = 700000+rand()%(800000-700000);
    cout<<*code<<endl;
}

void administrar(int **producto)
{
    producto = new int*[5];
    for(int i{0};i<5;i++){
        producto[i] = new int[5];
    }

    for(int i{0};i<2;i++){
        for(int j{0};j<2;j++){
            cin>>*(*(producto+i)+j);
        }
    }

    for(int i{0};i<2;i++){
        for(int j{0};j<2;j++){
            cout<<*(*(producto+i)+j);
        }
        cout<<endl;
    }
}

void mostrar(int **producto)
{
    for(int i{0};i<2;i++){
        for(int j{0};j<2;j++){
            cout<<*(*(producto+i)+j);
        }
        cout<<endl;
    }
}

int main()
{
    int **producto1;
    administrar(producto1);
    cout<<"GA";
    mostrar(producto1);

    /*int i;
    int *ptrToi; /* Puntero a entero
    int **ptrToPtrToi; /* Puntero a puntero a entero
    ptrToPtrToi = &ptrToi; /* Puntero contiene dirección de puntero
    ptrToi = &i; /* Puntero contiene dirección de entero
    i = 10; /* Asignación directa
    *ptrToi = 20; /* Asignación indirecta
    **ptrToPtrToi = 30; /* Asignación con doble indirección
    printf("%d\n", &i);
    printf("%d\n", &ptrToi); /* Dirección de memoria
    printf("%d\n", &ptrToPtrToi);
    printf("%d\n", i);
    printf("%d\n", ptrToi); /* Referencia de la dirección de memoria
    printf("%d\n", ptrToPtrToi);
    printf("%d\n", i);
    printf("%d\n", *ptrToi); /* Contenido de la referencia de la DM
    printf("%d\n", **ptrToPtrToi);
    system("pause");
    */
    return 0;
}
