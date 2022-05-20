#include<iostream>
using namespace std;

class Forma{
    private:
        string color;
        float coordenada_centro;
        char* nombre_forma;
    public:
        Forma();
        ~Forma();
        int imprimir(char);
        void get_change_color(string);
        void moveForm(float);
};