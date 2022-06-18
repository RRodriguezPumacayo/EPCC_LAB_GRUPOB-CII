#include <iostream>
#include <windows.h>
#include "Grafo.h"
#include<fstream>

using namespace std;

int main()
{
    Grafo G;
    G.Inicializa();
    int opc;

    G.InsertaVertice(10);
    G.InsertaVertice(13);
    G.InsertaVertice(16);
    G.InsertaVertice(11);
    G.InsertaVertice(18);
    G.InsertaVertice(15);
    G.InsertaVertice(12);
    G.InsertaVertice(17);
    G.InsertaVertice(20);
    G.InsertaVertice(22);

    G.InsertaArista(G.GetVertice(10), G.GetVertice(13));
    G.InsertaArista(G.GetVertice(11), G.GetVertice(15));
    G.InsertaArista(G.GetVertice(12), G.GetVertice(17));
    G.InsertaArista(G.GetVertice(12), G.GetVertice(22));
    G.InsertaArista(G.GetVertice(13), G.GetVertice(11));
    G.InsertaArista(G.GetVertice(15), G.GetVertice(12));
    G.InsertaArista(G.GetVertice(15), G.GetVertice(20));
    G.InsertaArista(G.GetVertice(16), G.GetVertice(20));
    G.InsertaArista(G.GetVertice(16), G.GetVertice(12));
    G.InsertaArista(G.GetVertice(17), G.GetVertice(10));
    G.InsertaArista(G.GetVertice(17), G.GetVertice(16));
    G.InsertaArista(G.GetVertice(18), G.GetVertice(13));
    G.InsertaArista(G.GetVertice(18), G.GetVertice(17));
    G.InsertaArista(G.GetVertice(22), G.GetVertice(11));




    do
    {
        system("cls");
        cout<<"Luego de ingresar un vertice o una arista, cree el grafo de nuevo para que se apliquen los cambios"<<endl;
        cout<<"1. Ingresar Vertice"<<endl;
        cout<<"2. Ingresar arista"<<endl;
        cout<<"3. Crear grafo"<<endl;
        cout<<"4. Mostrar grafo"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<endl<<"Elija una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            int nro;
            system("cls");
            cout<<"Ingrese el nombre del vertice: ";
            cin.ignore();
            cin>>nro;
            cout<<"\n";
            G.InsertaVertice(nro);
            cin.get();
            cin.get();
            break;
        }
        case 2:
        {
            int origen, destino;
            system("cls");
            if(G.Vacio())
            {
                cout<<"El grafo esta vacio"<<endl;
            }
            else
            {
                cout<<"Ingrese del nombre del vertice origen: ";
                cin.ignore();
                cin>>origen;
                cout<<"\n";
                cout<<"Ingrese el nombre del vertice destino: ";
                cin>>destino;
                cout<<"\n";

                if(G.GetVertice(origen) == NULL || G.GetVertice(destino) == NULL)
                {
                    cout<<"Uno de los vertices no es valido"<<endl;
                }
                else
                {
                    G.InsertaArista(G.GetVertice(origen), G.GetVertice(destino));
                }
            }
            cin.get();
            cin.get();
            break;
        }
        case 3:
        {
            system("cls");
            if(G.Vacio())
            {
                cout<<"El grafo esta vacio"<<endl;
            }
            else
            {
                cout<<"El archivo.dot se ha creado en la carpeta donde esta el proyecto...";
                G.ListaAdyacencia();
            }
            cin.get();
            cin.get();
            break;
        }
        case 4:
        {
            system("cls");
            cout<<"No verificar la direccion de la imagen en el codigo"<<endl;
            system("D://AUNSA_B//EstructurasDiscretas2//TareaTDA//GrafoTDA//ImagenTDA.png");
            cin.get();
            cin.get();

        }
        case 5:
        {
            break;
        }
        }
    }
    while(opc != 5);
    return 0;

}
