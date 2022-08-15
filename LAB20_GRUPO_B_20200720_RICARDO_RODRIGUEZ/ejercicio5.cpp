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
EJERCICIO 5:
    5. Al anterior código implemente un puntero débil a un puntero el cual no puede
    estar vacío.
*/
#include<iostream>
#include<memory>
using namespace std;

class Point{
    public:
        Point(double _num1, double _num2, std::shared_ptr<double> value){
            num1 = _num1;
            num2 = _num2;
            d = value;
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
        std::shared_ptr<double> d;
};

int main(){
    shared_ptr<double> p = make_shared<double>(500);
    //PUNTERO DEBIL
    weak_ptr<double> ptr_debil = p;
    //No podemos accderer ni modificar a ptr_debil, por ser debil cout<<p3<<endl;
    //Para poder "acceder" a ptr_debil debemos crear un shared_ptr y bloquear a prt_debil con .lock
    shared_ptr<double> bloqued = ptr_debil.lock();
    cout<<"Bloqued: "<<*bloqued<<" Puntero original: "<<*p<<endl;
    cout<<"Bloqued: "<<bloqued<<" Puntero original: "<<p<<endl;
    Point pt(1.0, 2.0, make_shared<double> (3.50));
    pt.X(30.40);
    pt.Y(30.50);

    return 0;
}

