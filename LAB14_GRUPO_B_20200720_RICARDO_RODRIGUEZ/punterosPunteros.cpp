/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
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
#include<iostream>
using namespace std;

void datos(string **producto){
    producto = new string*[10];
    for(int i=0;i<10;i++){
        producto[i] = new string[10];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            if(j==0)
            {
                *(*(producto+i)+j) = to_string(100000 + rand()%(1000000 - 100000));
            }
            if(j==1)
            {
                cout<<"Input Name: ";getline(cin,*(*(producto+i)+j));
            }
            if(j==2)
            {
                cout<<"Input Price: ";getline(cin,*(*(producto+i)+j));
            }
            if(j==3)
            {
                cout<<"Stock: ";getline(cin,*(*(producto+i)+j));
            }
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            cout<<producto[i][j]<<"\t";
        }
        cout<<endl;
    }
    string pos;
    cout<<"\nCual producto desea dar de baja? ";getline(cin, pos);
    for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            if(*(*(producto+i)+j)==pos)
            {
                *(*(producto+i)+3) = to_string(0);
            }
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            cout<<producto[i][j]<<"\t";
        }
        cout<<endl;
    }

    int opc, code;
    string nombre;
    cout<<"\nComo desea buscar el producto?\n";
    cout<<"1) Codigo\n";
    cout<<"2) Nombre\n";
    cin>>opc;
    cin.ignore();
    if(opc==1)
    {
        cout<<"Codigo del producto a buscar: ";cin>>code;
        for(int i=0;i<10;i++){
            for(int j=0;j<4;j++){
                if(*(*(producto+i)+j)==to_string(code))
                {
                    cout<<"Producto encontrado: "<<*(*(producto+i)+0)<<"\t"<<*(*(producto+i)+1)<<"\t"<<*(*(producto+i)+2)<<"\t"<<*(*(producto+i)+3);
                }
            }
        }
    }
    if(opc==2)
    {
        cout<<"Nombre del producto a buscar: ";getline(cin, nombre);
        for(int i=0;i<10;i++){
            for(int j=0;j<4;j++){
                if(*(*(producto+i)+j)==nombre)
                {
                    cout<<"Producto encontrado: "<<*(*(producto+i)+0)<<"\t"<<*(*(producto+i)+1)<<"\t"<<*(*(producto+i)+2)<<"\t"<<*(*(producto+i)+3)<<endl;
                }
            }
        }
    }

    cout<<"\nQue producto desea modificar? ";getline(cin, nombre);
    cin.ignore();
    for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            if(*(*(producto+i)+j)==nombre)
            {
                *(*(producto+i)+0) = to_string(100000 + rand()%(1000000 - 100000));
                cout<<"Nuevo Codigo Producto: ";*(*(producto+i)+0);
                cout<<"Nuevo Nombre Producto: ";cin>>*(*(producto+i)+1);
                cout<<"Nuevo Precio Producto: ";cin>>*(*(producto+i)+2);
                cout<<"Nuevo Stock Producto: ";cin>>*(*(producto+i)+3);
            }
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            cout<<producto[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    string **producto;
    datos(producto);
}

