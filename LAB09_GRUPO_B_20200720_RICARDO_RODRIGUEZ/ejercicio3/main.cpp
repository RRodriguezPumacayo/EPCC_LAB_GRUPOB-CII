/*3. Se pide escribir una función utilizando plantillas que tome dos valores genéricos
de tipo char y string (5 veces); char corresponde a una letra y string corresponde
al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electrónico: char/string@unsa.edu.pe.*/

#include"correo.h"

int main()
{
    char letra[30];
    string cadena;
    for(int i{0};i<5;i++){
        cout<<"Ingrese Nombre: ";cin>>letra;
        cout<<"Ingrese Apellido: ";cin>>cadena;
        letra[0] = tolower(letra[0]);
        cadena[0] = tolower(cadena[0]);
        Correo<char, string> nombre(letra[0], cadena);
        nombre.crearCorreo();
    }
    return 0;
}
