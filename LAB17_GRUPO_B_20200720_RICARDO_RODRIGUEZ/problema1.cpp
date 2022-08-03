/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

EJERCICIO 1. Desarrolle un programa simple de calculadora (operciones basicas) que utilice
clases utilizando plantillas

*/

#include <iostream>
using namespace std;

template <typename T>
class Calculadora{
    private:
        T band;
        T num;
    public:
        Calculadora(T num);
        ~Calculadora();
        void sumar();
        void restar();
        void dividir();
        void multiplicar();
        void print();
};

template <typename T>
Calculadora<T>::Calculadora(T s)
{
    band = 0;
    num = s;
}

template <typename T>
Calculadora<T>::~Calculadora(){
}
//----------------------------------------------------
//SUMA
template<typename T>
void Calculadora<T>::sumar()
{
    cout<<"Ingrese numero: ";cin>>num;
    cout<<band<<" + "<<num<<" = ";
    band += num;
    cout<<band<<endl;
}
//----------------------------------------------------
//RESTA
template<typename T>
void Calculadora<T>::restar()
{
    cout<<"Ingrese numero: ";cin>>num;
    cout<<band<<" - "<<num<<" = ";
    band -= num;
    cout<<band<<endl;
}
//----------------------------------------------------
//DIVISION
template<typename T>
void Calculadora<T>::dividir()
{
    if(band==0)
        band = 1;
    cout<<"Ingrese numero: ";cin>>num;
    cout<<band<<" / "<<num<<" = ";
    band /= num;
    cout<<band<<endl;
}
//----------------------------------------------------
//MULTIPLICACION
template<typename T>
void Calculadora<T>::multiplicar()
{
    if(band==0)
        band = 1;
    cout<<"Ingrese numero: ";cin>>num;
    cout<<band<<" * "<<num<<" = ";
    band *= num;
    cout<<band<<endl;
}

int main()
{
    char opc, opc2;
    cout<<"|||  TIPO DE DATOS  |||\n";
    cout<<"a) Enteros\n";
    cout<<"b) Decimales\n";
    cin>>opc;
    switch(opc){
        case 'a':{
            Calculadora<int> a(0);
            do{
                cout<<"|||  CALCULADORA ENTEROS  |||\n";
                cout<<"a) Suma\n";
                cout<<"b) Resta\n";
                cout<<"c) Multiplicacion\n";
                cout<<"d) Division\n";
                cout<<"e) Terminar\n";
                cin>>opc2;
                if(opc2=='a'){
                    a.sumar();
                }
                if(opc2=='b'){
                    a.restar();
                }
                if(opc2=='c'){
                    a.multiplicar();
                }
                if(opc2=='d'){
                    a.dividir();
                }
            }while(opc2!='e');
        }break;
        case 'b': {
            Calculadora<double> b(0);
            do{
                cout<<"|||  CALCULADORA DECIMALES  |||\n";
                cout<<"a) Suma\n";
                cout<<"b) Resta\n";
                cout<<"c) Multiplicacion\n";
                cout<<"d) Division\n";
                cout<<"e) Terminar\n";
                cin>>opc2;
                if(opc2=='a'){
                    b.sumar();
                }
                if(opc2=='b'){
                    b.restar();
                }
                if(opc2=='c'){
                    b.multiplicar();
                }
                if(opc2=='d'){
                    b.dividir();
                }
            }while(opc2!='e');
        }break;

    }
    return 0;
}
