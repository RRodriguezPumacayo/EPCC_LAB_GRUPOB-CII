#include "ejercicio2.h"

Objeto::Objeto(std::string _objeto){
    objeto = _objeto;
}

Objeto::~Objeto(){
}

void Objeto::primerColor(){
    std::cout<<"Input first color: ";getline(std::cin,pintura);
}