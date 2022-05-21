#include<iostream>
using namespace std;

class persona{
    public:
        persona();
        ~persona();
        void inputEdad();
        void inputNombre();
    protected:
        string nombre;
        int edad;
};

class alumno:public persona{
    public:
        alumno(string, int);
        ~alumno();
        void inputName();
        void inputAge();
        void mostrarDatos();
};
