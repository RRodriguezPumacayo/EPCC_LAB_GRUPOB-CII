#include<iostream>
using namespace std;

class RGB{
    protected:
        string* color;
    public:
        RGB();
        ~RGB();
        int inputColor();
};

class Material:public RGB{
    protected:
        string cosa;
    public:
        Material();
        ~Material();
        int inputMaterial();
};

class Objetos:public Material{
    private:
        string object;
    public:
        Objetos(string);
        ~Objetos();
        int describeObject(string object);
};