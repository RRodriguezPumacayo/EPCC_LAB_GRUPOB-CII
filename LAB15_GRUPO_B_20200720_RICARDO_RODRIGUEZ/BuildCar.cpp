/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

1. Ejercicios
Resolver los siguientes ejercicios planteados:
    1. El alumno deberá de implementar un conjunto de clases que permita seleccionar
    las piezas de un automóvil, es decir, se podrán tener componentes a disposición
    del cliente (puertas, llantas, timón, asientos, motor, espejos, vidrios, etc.). Del cual
    el cliente puede indicar que características de color puede tener cada pieza. Al
    final mostrar opciones al Cliente o permitirle que él pueda escoger las piezas e
    indicar el color. Utilizar el patrón Builder.
    *Pista, en lugar de trabajar el producto con una lista de componentes, se puede
    alojar una estructura o clase.

*/
#include<iostream>
using namespace std;

class Carro{
    string _carro;
    string _puertas;
    string _llantas;
    string _timon;
    string _asientos;
    string _motor;
    string _espejos;
    string _vidrios;
    public:
        Carro(string carType):_carro{carType}{}
        void setPuertas(string puertas){
            _puertas = puertas;
        }
        void setLlantas(string llantas){
            _llantas = llantas;
        }
        void setTimon(string timon){
            _timon = timon;
        }
        void setAsientos(string asientos){
            _asientos = asientos;
        }
        void setMotor(string motor){
            _motor = motor;
        }
        void setEspejos(string espejos){
            _espejos = espejos;
        }
        void setVidrios(string vidrios){
            _vidrios = vidrios;
        }
        string getPuertas(){
            return _puertas;
        }
        string getLlantas(){
            return _llantas;
        }
        string getTimon(){
            return _timon;
        }
        string getAsientos(){
            return _asientos;
        }
        string getMotor(){
            return _motor;
        }
        string getEspejos(){
            return _espejos;
        }
        string getVidrios(){
            return _vidrios;
        }
        void show(){
            cout<<"Tipo de Carro: "<<_carro<<endl;
            cout<<"Tipo de Puertas: "<<_puertas<<endl;
            cout<<"Tipo de Llantas: "<<_llantas<<endl;
            cout<<"Tipo de Timon: "<<_timon<<endl;
            cout<<"Tipo de Asientos: "<<_asientos<<endl;
            cout<<"Tipo de Motor: "<<_motor<<endl;
            cout<<"Tipo de Espejos: "<<_espejos<<endl;
            cout<<"Tipo de Vidrios: "<<_vidrios<<endl<<endl;
        }
};

//BUILDER, CLASE ABSTRACTA
//TODOS LOS CONSTRUCCTORES TIENEN POR LO MENOS ESTOS METODOS
class CarBuilder{
    protected:
        Carro *_carro;
    public:
        virtual void getPartsDone() = 0;
        virtual void buildPuertas() = 0;
        virtual void buildLlantas() = 0;
        virtual void buildTimon() = 0;
        virtual void buildAsientos() = 0;
        virtual void buildMotor() = 0;
        virtual void buildEspejos() = 0;
        virtual void buildVidrios() = 0;
        Carro* getCarro(){
            return _carro;
        }

};

//BUILDER CLASE CONCRETA
//SOLO NOS DICE COMO CONSTRUIR ESTA CLASE
class CamionetaBuilder : public CarBuilder{
    string color;
    public:
        void getPartsDone(){
            cout<<"\n|||  Creando Camioneta  |||\n"<<"Color la camioneta? ";cin>>color;
            _carro = new Carro("Camioneta "+color);
        }
        void buildPuertas(){
            cout<<"Color de las Puertas? ";cin>>color;
            _carro->setPuertas("Camioneta Puertas "+color);
        }
        void buildLlantas(){
            cout<<"Color de las Llantas? ";cin>>color;
            _carro->setLlantas("Camioneta Llantas "+color);
        }
        void buildTimon(){
            cout<<"Color del Timon? ";cin>>color;
            _carro->setTimon("Camioneta Timon "+color);
        }
        void buildAsientos(){
            cout<<"Color de los Asientos? ";cin>>color;
            _carro->setAsientos("Camioneta Asientos "+color);
        }
        void buildMotor(){
            cout<<"Color del Motor? ";cin>>color;
            _carro->setMotor("Camioneta con un Motor "+color);
        }
        void buildEspejos(){
            color = {"blanco"};
            _carro->setEspejos("Camioneta con Espejos de color "+color);
        }
        void buildVidrios(){
            cin.ignore();
            cout<<"Color de los Vidrios? ";cin>>color;
            _carro->setVidrios("Camioneta con Vidrios "+color);
        }
};

//BUILDER CLASE CONCRETA
//SOLO NOS DICE COMO CONSTRUIR ESTA CLASE
class DeportivoBuilder : public CarBuilder{
    string color;
    public:
        void getPartsDone(){
            cout<<"\n|||  Creando Deportivo  |||\n"<<"Color del Deportivo? ";cin>>color;
            _carro = new Carro("Carro Deportivo "+color);
        }
        void buildPuertas(){
            cout<<"Color de las Puertas? ";cin>>color;
            _carro->setPuertas("Deportivo Puertas "+color);
        }
        void buildLlantas(){
            cout<<"Color de las Llantas? ";cin>>color;
            _carro->setLlantas("Deportivo Llantas "+color);
        }
        void buildTimon(){
            cout<<"Color del Timon? ";cin>>color;
            _carro->setTimon("Deportivo Timon "+color);
        }
        void buildAsientos(){
            cout<<"Color de los Asientos? ";cin>>color;
            _carro->setAsientos("Deportivo Asientos "+color);
        }
        void buildMotor(){
            cout<<"Color del Motor? ";cin>>color;
            _carro->setMotor("Deportivo con un Motor "+color);
        }
        void buildEspejos(){
            color = {"blanco"};
            _carro->setEspejos("Deportivo con Espejos de color "+color);
        }
        void buildVidrios(){
            cout<<"Color de los Vidrios? ";cin>>color;
            _carro->setVidrios("Deportivo con Vidrios "+color);
        }
};

//DIRECTOR
//DEFINE LOS PASOS Y LE DICE AL CONSTRUCTOR QUE Y COMO VA A CONSTRUIR
class Director{
    CarBuilder *builder;
    public:
        Carro* createCarro(CarBuilder *builder){
            builder->getPartsDone();
            builder->buildPuertas();
            builder->buildLlantas();
            builder->buildTimon();
            builder->buildAsientos();
            builder->buildMotor();
            builder->buildEspejos();
            builder->buildVidrios();
            return builder->getCarro();
        }
};

int main()
{
    Director dir;
    CamionetaBuilder jb;
    DeportivoBuilder pb;

    Carro *jet = dir.createCarro(&jb);
    Carro *pro = dir.createCarro(&pb);
    cout<<"\n|||  Mostrando Carros   |||\n";
    jet->show();
    pro->show();
    //other->show();

    delete jet;
    delete pro;
    //delete other;

    return 0;
}
