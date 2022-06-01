#include "ClaseBase.h"

Forma::Forma(){
    nombre_forma = nullptr;
}

Forma::~Forma(){
}

int Forma::imprimir(char nombre){
    *nombre_forma = nombre;
}
