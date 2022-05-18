/*
1. Crear una clase Persona del cual tendrá métodos asignar una edad y nombre. Una
segunda clase, alumno, tendrá que heredar este contenido y a través de esta clase
poder asignar los datos de edad y nombre de los estudiantes.
*/

#include "persona.h"

int main()
{
    string nombre;
    int edad;
    alumno unsa(nombre,edad);

    unsa.inputName();
    unsa.inputAge();
    unsa.mostrarDatos();
}