#include "persona.h"

int main()
{
    string name;
    int age;
    alumno estudiante{name,age};

    estudiante.inputName();
    estudiante.inputAge();
    estudiante.mostrarDatos();
}
