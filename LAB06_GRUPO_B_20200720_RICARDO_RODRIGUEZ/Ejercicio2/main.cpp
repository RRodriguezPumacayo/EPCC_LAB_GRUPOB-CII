/*
2. Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.
*/

#include "student.h"

int main()
{
    int cui{};
    string nombre{};
    string apellido{};
    int nota1{},nota2{},nota3{};
    Alumno estudiante{cui,nombre,apellido,nota1,nota2,nota3};
    //Ingresando datos
    estudiante.intCUI();
    estudiante.intName();
    estudiante.intNotas();
    //Imprimiendo datos
    estudiante.printCUI();
    estudiante.printName();
    estudiante.promedio();
    estudiante.~Alumno();

    return 0;
}
