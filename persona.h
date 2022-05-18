#include<iostream>
using namespace std;

class persona{
    public: 
        persona();
        ~persona();
        void inputEdad();
        void inputName();
    protected:
        string nombre;
        int edad;
};

class alumno:public persona{
    private:
        string llido;
        int age;
    public:
        alumno(string, int);
        ~alumno();
        void inputAge();
        void inputName();
        void mostrarDatos();
};