/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
2. Crear una clase Color que mantenga 3 valores (RGB). Una segunda clase Material,
tendr� como informaci�n una variable de texto que describa alg�n material (Ejemplo:
madera, vidrio, platico, etc.) Una tercera clase, Objetos, deber� de heredar contenido
de ambas clases con la finalidad de describir diferentes objetos en cuanto a color y el
material. (Ejemplo: mesa de color caf� y material de pl�stico)
*/
#include"claseBase.h"

int main()
{
    Objetos cosa;
    cosa.inputBaseColores();
    cosa.inputBaseMateria();
    cosa.inputObjeto();
    cosa.mostrar();
}
