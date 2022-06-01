#include "iostream"
#include "stdio.h"
#include "string"
using namespace std;
int main()
{
    string* titulos = NULL; //Se inicializa el puntero (inicia en null)
    string* autores = NULL; //Se inicializa el puntero (inicia en null)
    int tamanio; //Se inicializa la variable
    cout << "Cuantos libros desea ingresar?";
    string entrada;
    getline(cin, entrada); //Se asigna el valor ingresado
    tamanio = stoi(entrada); //Se transforma la entrada en n�mero
    //Declaramos un arreglo del tama�o ingresado para los t�tulos
    titulos = new string[tamanio];
    //Declaramos un arreglo del tama�o ingresado para los autores
    autores = new string[tamanio];
    cout << "Por favor ingrese la siguiente informacion de los Libros: \n";
    for(int i = 0; i < tamanio; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        //cin >> titulos[i]; //No funciona con espacios
        getline(cin, titulos[i]);
        cout << "Autor: ";
        //cin >> autores[i]; //No funciona con espacios
        getline(cin, autores[i]);
    }
    //Liberamos la memoria de ambos punteros
    delete [] titulos;
    delete [] autores;
    titulos = NULL;
    autores = NULL;
    system("pause");
    return 0;
}
