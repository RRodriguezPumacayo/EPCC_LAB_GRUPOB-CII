#include"claseDisco.h"

Multimedia::Multimedia(){
}

Multimedia::~Multimedia(){
}

Disco::Disco(){
}

Disco::~Disco(){
}

int Multimedia::medio(){
    string answer;
    int j{0};
    medios = new string[3];
    medios[0] = {"fotografia"};
    medios[1] = {"video"};
    medios[2] = {"musica"};
    for(int i{0};i<3;i++){
        cout<<"Es valido el siguiente medio? "<<medios[i];
        cout<<" (y/n)";getline(cin,answer);
        if(answer=="y"){
            cout<<"El medio "<<medios[i]<<" SI es valido\n";
            j++;
        }
        else
            cout<<"El medio "<<medios[i]<<" NO es valido\n";
    }
    if(j==3)
        return true;
}
