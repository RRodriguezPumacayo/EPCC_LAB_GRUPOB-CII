/*
2. Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.
*/
#include<iostream>
#include<string>
using namespace std;

class Alumno
{
    private:
        int cui;
        string nombre;
        string apellido;
        float nota1;
        float nota2;
        float nota3;
    public:
        Alumno(int, string, string, float, float, float);
        ~Alumno();
        void intCUI();
        void intName();
        void intNotas();
        void printCUI();
        void printName();
        void promedio();
};
