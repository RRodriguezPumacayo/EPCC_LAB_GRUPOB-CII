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
    cout<<"IDENTIFY\n";
    for(int i=0;i<3;i++){
        cout<<"Your DNI is: ";getline(cin,dni[i]);
    }
}

int imprimir(string nombre[3],string apellido[3], int edad[3], string DNI[3]){
    for(int i=0;i<3;i++){
        cout<<"Complete is: "<<nombre[i]<<", "<<apellido[i]<<", "<<edad[i]<<", "<<DNI[i]<<endl;
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
