#include<iostream>
using namespace std;

class RGB{
    protected:
        string* colores;
    public:
        RGB();
        ~RGB();
        void inputBaseColores();
};

class Material: public RGB{
    protected:
        string materia;
    public:
        Material();
        ~Material();
        void inputBaseMateria();
};

class Objetos:public Material{
    private:
        string objeto;
    public:
        Objetos();
        ~Objetos();
        void inputObjeto();
        void mostrar();
};
