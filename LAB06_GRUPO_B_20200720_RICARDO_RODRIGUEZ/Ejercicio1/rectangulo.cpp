#include "rectangulo.h"

rectangulo::rectangulo(float _base, float _altura)
{
    base = _base;
    altura = _altura;
}

rectangulo::~rectangulo()
{
}

int rectangulo::ingresarBase(){
    cout<<"Ingresar base = ";cin>>base;
    return base;
}

int rectangulo::ingresarAltura(){
    cout<<"Ingresar altura = ";cin>>altura;
    return altura;
}

void rectangulo::area(){
    int a=base*altura;
    cout<<"El area es = "<<a<<endl;
}

void rectangulo::perimetro(){
    int p=(2*base)+(2*altura);
    cout<<"El perimetro es = "<<p<<endl;
}
