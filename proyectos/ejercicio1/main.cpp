/*
2. Crear una clase Color que mantenga 3 valores (RGB). Una segunda clase Material,
tendrá como información una variable de texto que describa algún material (Ejemplo:
madera, vidrio, platico, etc.) Una tercera clase, Objetos, deberá de heredar contenido
de ambas clases con la finalidad de describir diferentes objetos en cuanto a color y el
material. (Ejemplo: mesa de color café y material de plástico)
*/

#include "header/persona.h"

int main(){
    string name;
    int age;
    alumno estudiante(name, age);
    estudiante.inputName();
    estudiante.inputAge();
    estudiante.mostrarDatos();
}