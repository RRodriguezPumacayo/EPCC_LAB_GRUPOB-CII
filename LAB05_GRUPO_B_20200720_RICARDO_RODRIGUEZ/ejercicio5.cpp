/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
5. Implemente su propia función de concatenación de cadenas de texto especial (¡no es
la función ordinaria de concatenación!), recibirá como parámetro dos punteros de
caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer
puntero. La función no retorna ningún valor.
*/
#include<iostream>
#include<string.h>
using namespace std;

void concatenacion(string* cad1, string* cad2){
    //El getline() funciona, pero lo deje como nota usar no ahorrar tiempo en ingresar la frase.
    //getline(cin,*cad1);
    //getline(cin,*cad2);
    *cad1 = *cad2 + *cad1;
    cout<<*cad1<<endl;
}

int main(){
    string* cadena1=NULL;
    string* cadena2=NULL;
    cadena1 = new string;
    cadena2 = new string;
    *cadena1 = {" Lo que es correcto no siempre es popular "};
    *cadena2 = {" Lo que es popular no siempre es correcto "};

    concatenacion(cadena1,cadena2);
}
