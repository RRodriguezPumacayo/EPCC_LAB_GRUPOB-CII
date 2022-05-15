#include "arreglo.h"

arreglo::arreglo(int _dato){
    dato = _dato;
    //Asignamos punteros nulos para el constructor
    lista = nullptr;
}

arreglo::~arreglo()
{
}

void arreglo::inputDates()
{
    lista = new string[5];
    int i{5},opc{};
    while(opc!=4){
        cout<<"\n|| Existen "<<i<<" casillas vacias. Elija   ||\n";
        cout<<"||   1. Agregar un dato a una casilla\n";
        cout<<"||   2. Mostrar arreglo\n";
        cout<<"||   3. Retirar dato\n";
        cout<<"||   4. Salir\n";
        cin>>opc;
        if(opc==1){
            arreglo::verify();
            if(dato==true){
                i--;
            }
        }
        if(opc==2 && i>0){
            arreglo::mostrarArray();
        }
        if(opc==3){
            arreglo::retire();
        }
        if(i==0){
            cout<<"El arreglo esta LLENO\n";
            for(int z{0};z<5;z++){
                if(lista[z].empty()==true)
                    cout<<"Pos["<<z<<"] = vacio\n";
                else
                    cout<<"Pos["<<z<<"] = "<<lista[z]<<endl;
            }
        }
        if(opc==4){
            cout<<"Saliendo...\n";
            break;
        }
    }
}

void arreglo::mostrarArray()
{
    cout<<"Mostrando arreglo\n";
    for(int z{0};z<5;z++){
        if(lista[z].empty()==true)
            cout<<"Pos["<<z<<"] = vacio\n";
        else
            cout<<"Pos["<<z<<"] = "<<lista[z]<<endl;
    }
}

void arreglo::verify()
{
    int j{0};
    dato = false;
    cout<<"||   Que casilla escoje: ";cin>>j;
    if(j>=0 && j<5 ){
        if(lista[j].empty()!=true)
            cout<<"La Pos["<<j<<"] NO esta vacia\n";
        else{
            cin.ignore();
            cout<<"Ingresar Pos["<<j<<"] = ";getline(cin,lista[j]);
            dato = true;
        }
    }
    else
        cout<<"Ingrese una casilla valida";
}

void arreglo::retire()
{
    int j{0};
    cout<<"||   Que casilla quiere retirar: ";cin>>j;
    if(j>=0 && j<5 ){
        cin.ignore();
        if(lista[j].empty()!=true){
            cout<<"Ingrese el nuevo dato de la Pos["<<j<<"] = ";getline(cin,lista[j]);
        }
        else{
            cout<<"La Pos["<<j<<"] esta vacia\n";
            cout<<"Ingresar Pos["<<j<<"] = ";getline(cin,lista[j]);
        }
    }
    else
        cout<<"Ingrese una casilla valida";
}
