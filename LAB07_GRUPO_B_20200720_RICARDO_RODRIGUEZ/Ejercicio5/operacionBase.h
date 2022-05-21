#include<iostream>
using namespace std;

class Base{
    protected:
        int operador;
    public:
        Base();
        ~Base();
        void setOperador(int);
        int getOperador();
};
