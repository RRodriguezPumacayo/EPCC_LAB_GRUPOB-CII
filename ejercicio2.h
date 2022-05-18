#include<iostream>

class Color{
    protected:
        std::string pintura; 
    public:
        Color();
        ~Color();
        void primerColor();
        void segundoColor();
        void tercerColor();
};

class Material{
    protected:
        std::string material;
    public:
        Material();
        ~Material();
        void craft();
};

class Objeto:public Color, public Material{
    private:
        std::string objeto;
    public:
        Objeto(std::string objeto);
        ~Objeto();
        void primerColor();
        void segundoColor();
        void tercerColor();
        void printObjeto();
};