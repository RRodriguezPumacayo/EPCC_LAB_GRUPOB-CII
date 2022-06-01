#include<iostream>
#include<string>
using namespace std;

class Fecha
{
    private:
        int dia;
        int mes;
        int anio;
        int dia2;
        int mes2;
        int anio2;
        string nombre;
        int edad;
    public:
        Fecha(int, int, int, int, int, int, string, int);
        ~Fecha();
        void intNacimiento();
        void intActual();
        void printNacimiento();
        void printActual();
        void printEdad();
};
