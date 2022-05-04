/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla.
*/

#include "iostream"
using namespace std;

int name(string nombre[3]){
    cout<<"NAME\n";
    for(int i=0;i<3;i++){
        cout<<"Your name is: ";getline(cin,nombre[i]);//cin no funciona con espacios
    }
}

int lastname(string apellido[3]){
    cout<<"LAST NAME\n";
    for(int i=0;i<3;i++){
        cout<<"Your lastname is: ";getline(cin,apellido[i]);
    }
}

int age(int edad[3]){
    cout<<"AGE\n";
    for(int i=0;i<3;i++){
        cout<<"Your age is: ";cin>>edad[i];
    }
}

int identify(string dni[3]){
    cout<<"DNI\n";
    for(int i=0;i<3;i++){
        cout<<"Your DNI is: ";getline(cin,dni[i]);
    }
}

int imprimir(string nombre[3],string apellido[3], int edad[3], string DNI[3]){
    for(int i=0;i<3;i++){
        cout<<"Complete dates are: \n"<<i+1<<"Person: "<<nombre[i]<<", "<<apellido[i]<<", "<<edad[i]<<", "<<DNI[i]<<endl;
    }
}

int main()
{
    string nombre[3];
    string apellido[3];
    int edad[3];
    string dni[3];

    name(nombre);
    lastname(apellido);
    identify(dni);
    age(edad);
    imprimir(nombre,apellido,edad,dni);

}
