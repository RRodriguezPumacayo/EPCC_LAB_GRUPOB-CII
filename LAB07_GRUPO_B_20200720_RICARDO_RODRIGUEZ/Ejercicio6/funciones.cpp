#include"classAve.h"
#include"classGallina.h"
#include"classGanso.h"
#include"classPato.h"

Ave::Ave(){
}

Ave::~Ave(){
}

Gallina::Gallina(string _gallina){
    nombre = _gallina;
}

Gallina::~Gallina(){
}

Ganso::Ganso(string _ganso){
    nombre = _ganso;
}

Ganso::~Ganso(){
}

Pato::Pato(string _ganso){
    nombre = _ganso;
}

Pato::~Pato(){
}

void Ave::setVolar(string nombre){
    if(nombre=="Gallina"){
        cout<<"\nEl ave "<<nombre<<" NO puede volar\n";
    }
    else
        cout<<"\nEl ave "<<nombre<<" SI puede volar\n";
}

void Ave::setPico(string nombre){
    string answer;
    cout<<"Forma del pico, alargado o en punta ";cin>>answer;
    if(answer == "alargado" || answer=="punta")
        cout<<"El ave "<<nombre<<" tiene un pico "<<answer<<endl;
}

void Ave::setcomestible(string nombre){
    string answer;
    cout<<"Es comestible? (y/n) ";cin>>answer;
    if(answer=="y")
        cout<<"El ave "<<nombre<<" SI es comestible "<<endl;
    else
        cout<<"El ave "<<nombre<<" NO es comestible"<<endl;
}
