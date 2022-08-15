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
EJERCICIO 4:
    4. Transfiera el código anterior reemplazando los punteros sin formato por
    std::shared_ptr<Point> p;
*/
#include<iostream>
#include<memory>
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
    shared_ptr<Point> p;
    cout<<"Puntero reemplazado por std::shared_ptr = ";p->X(2.50);
    unique_ptr<Point> pt{new Point(1.0, 2.0)};
    shared_ptr<Point> p2 = p;
    cout<<"Puntero reemplazado por std::shared_ptr = ";p2->X(4.50);;
    (*pt).X(3.0);
    (*pt).Y(3.0);
    pt->X(3.0);
    pt->Y(3.0);

    return 0;
}
