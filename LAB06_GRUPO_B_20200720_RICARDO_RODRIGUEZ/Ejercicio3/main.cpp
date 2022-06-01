/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
3. Implemente un programa con clases que lea la fecha de nacimiento y la fecha de hoy
y muestre por pantalla el nombre y la edad de la persona.
*/
#include "fecha.h"

int main()
{
    int nac_dia{},nac_mes{},nac_anio{},dia{},mes{},anio{},edad{};
    string nombre;
    Fecha person(nac_dia,nac_mes,nac_anio,dia, mes, anio, nombre, edad);
    //Ingresando datos
    cout<<"|||    INGRESANDO DATOS   |||\n";
    person.intNacimiento();
    person.intActual();
    //Imprimiendo datos
    cout<<"|||    IMPRIMIENDO DATOS   |||\n";
    person.printNacimiento();
    person.printActual();
    person.printEdad();
    return 0;
}
