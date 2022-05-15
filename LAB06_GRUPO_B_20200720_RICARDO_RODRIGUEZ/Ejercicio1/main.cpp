/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
//1. Implemente un programa con clases que calcule el área de un rectángulo y perímetro.
#include "rectangulo.h"

int main()
{
    int base,altura;
    rectangulo rec1 = rectangulo(base, altura);
    rec1.ingresarBase();
    rec1.ingresarAltura();
    rec1.area();
    rec1.perimetro();
    return 0;
}
