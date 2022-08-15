/*
||||||||||||||||||||||||||||||||||||||||||||||||||||
|||                                              |||
|||     NOMBRES: RICARDO ALEXANDER               |||
|||     APELLIDOS: RODRIGUEZ PUMACAYO            |||
|||     CURSO: CIENCIAS DE LA COMPUTACION II     |||
|||     GRUPO: B                                 |||
|||                                              |||
||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*
EJERCICIO 1:
1. Implemente el siguiente código que usa punteros sin procesar y explique lo que
hace:
    {
        double* d = new double(1.0);
        Point* pt = new Point(1.0, 2.0);
        *d = 2.0;
        (*pt).X(3.0);
        (*pt).Y(3.0);
        pt->X(3.0);
        pt->Y(3.0);
        delete d;
        delete pt;
    }
*/

#include<iostream>
using namespace std;

class Point{
    public:
        Point(double _num1, double _num2){
            num1 = _num1;
            num2 = _num2;
        }
        void X(double num){
            cout<<num<<endl;
        }
        void Y(double num){
            cout<<num<<endl;
        }
    private:
        double num1;
        double num2;
};

int main(){
    double* d = new double(1.0);//CREAMOS UN PUNTERO double, Y LE ASIGNAMOS UN ESPACIO DE MEMORIA CON new.
    cout<<"CREAMOS UN PUNTERO double, Y LE ASIGNAMOS UN ESPACIO DE MEMORIA CON new."<<endl;
    cout<<*d<<endl;
    cout<<d<<endl;
    Point* pt = new Point(1.0, 2.0);//CREAMOS UN PUNTERO DE LA CLASE Point Y LE ASIGNAMOS MEMORIA CON Point(1.0, 2.0)
    *d = 2.0;//EL PUNTERO d CAMBIA DE VALOR PORQUE NO ES UN unique_ptr
    cout<<"EL PUNTERO d CAMBIA DE VALOR PORQUE NO ES UN unique_ptr"<<endl;
    cout<<*d<<endl;
    cout<<d<<endl;
    cout<<"AQUI VEMOS DOS FORMAS EN LAS QUE UN PUNTERO PUEDE LLAMAR A UN METODO DE LA CLASE Point"<<endl;
    (*pt).X(3.0);//AQUI VEMOS DOS FORMAS EN LAS QUE UN PUNTERO PUEDE LLAMAR A UN METODO DE LA CLASE Point
    (*pt).Y(3.0);
    pt->X(3.0);
    pt->Y(3.0);
    delete d;
    delete pt;
    return 0;
}
