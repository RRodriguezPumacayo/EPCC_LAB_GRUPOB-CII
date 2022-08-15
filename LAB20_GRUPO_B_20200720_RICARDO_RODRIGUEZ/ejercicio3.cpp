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
EJERCICIO 3:
3. Implementar el código para las clases C1 y C2, cada una de las cuales contiene el
objeto compartido d anterior, por ejemplo:
    class C1
    {
        private:
            std::shared_ptr<double> d;
        public:
            C1(std::shared_ptr<double> value) : d(value) {}
            virtual ~C1() { cout << "\nC1 destructor\n"; }
            void print() const { cout << "Valor " << *d; }
    };
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

class C1
{
    private:
        std::shared_ptr<double> d;
        std::shared_ptr<double> d2;
        double num1;
        double num2;
    public:
        C1(double _num1, double _num2, std::shared_ptr<double> value) : num1(_num1), num2(_num2), d(value), d2(d) {}
        virtual ~C1() { cout << "\nC1 destructor\n"; }
        void print() const {
            cout << "Valor del puntero 'd'= " << *d<<endl;
            cout << "Valor del puntero compartido'd2'= " << *d2<<endl;
            cout<< "Veces que se usa el puntero 'd'= "<<d.use_count()<<endl;
        }
        void X(){
            cout<<num1<<endl;
        }
        void Y(){
            cout<<num2<<endl;
        }
};
class C2
{
    private:
        std::shared_ptr<string> d;
        std::shared_ptr<string> d2;
        double num1;
        double num2;
    public:
        C2(double _num1, double _num2, std::shared_ptr<string> value) : num1(_num1), num2(_num2), d(value), d2(d) {}
        virtual ~C2() { cout << "\nC2 destructor\n"; }
        void print() const {
            cout << "Valor del puntero 'd'= " << *d<<endl;
            cout << "Valor del puntero compartido'd2'= " << *d2<<endl;
            cout<< "Veces que se usa el puntero 'd'="<<d.use_count()<<endl;
        }
        void X(){
            cout<<num1<<endl;
        }
        void Y(){
            cout<<num2<<endl;
        }
};

int main(){
    //CLASE C1
    cout<<"|||  CLASE C1  |||"<<endl;
    double value{20.50};
    C1 class1{2.50, 3.30, make_shared<double>(value)};
    class1.print();
    class1.X();
    class1.Y();

    //CLASE C2
    cout<<"|||  CLASE C2  |||"<<endl;
    string name("RICARDO");
    C2 class2{20.50, 30.30, make_shared<string>(name)};
    class2.print();
    class2.X();
    class2.Y();

    //CLASE POINT
    cout<<"|||  CLASE POINT |||"<<endl;
    unique_ptr<double> d{new double(1.0)};//CREAMOS UN PUNTERO double, Y LE ASIGNAMOS UN ESPACIO DE MEMORIA CON new.
    cout<<*d<<endl;
    cout<<d.get()<<endl;
    unique_ptr<Point> pt{new Point(1.0, 2.0)};//CREAMOS UN PUNTERO DE LA CLASE Point Y LE ASIGNAMOS MEMORIA CON Point(1.0, 2.0)
    *d = 2.0;//EL PUNTERO d CAMBIA DE VALOR PORQUE NO ES UN unique_ptr
    cout<<*d<<endl;
    cout<<d.get()<<endl;
    (*pt).X(3.0);//AQUI VEMOS DOS FORMAS EN LAS QUE UN PUNTERO PUEDE LLAMAR A UN METODO DE LA CLASE Point
    (*pt).Y(3.0);
    pt->X(3.0);
    pt->Y(3.0);
    return 0;

    return 0;
}
