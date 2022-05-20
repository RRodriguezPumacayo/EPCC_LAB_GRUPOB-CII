#include<iostream>
using namespace std;

class persona{
    protected:
        string nombre;
        int edad;
    public: 
        persona();
        ~persona();
        void inputEdad();
        void inputName();
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
