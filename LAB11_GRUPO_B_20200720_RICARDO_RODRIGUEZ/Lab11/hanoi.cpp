#include"hanoi.h"

void Torres::Inicializa()//El vertice inicial es NULO
{
    h1 = NULL;
    h2 = NULL;
    h3 = NULL;
}

bool Torres::Vacio()
{
    if(h1==NULL)
    {
        return true;
    }
    else
        return false;
}

void Torres::insertarTorre1(int nro){
    Torres *nuevo = new Torres;
    nuevo->nro = nro;
    nuevo->sig = h1;
    h1 = nuevo;

}

void Torres::insertarTorre2(int nro){
    Torres *nuevo = new Torres;
    nuevo->nro = nro;
    nuevo->sig = h2;
    h2 = nuevo;

}

void Torres::insertarTorre3(int nro){
    Torres *nuevo = new Torres;
    nuevo->nro = nro;
    nuevo->sig = h3;
    h3 = nuevo;
}

void Torres::mostrarTorre1(){
    cout<<"Torre 1: \n";
    Torres *vertaux;
    int i{0};
    vertaux = h1;

    while(vertaux != NULL)
    {
        vertaux->pos = i;
        cout<<"\t::";
        for(int j=0;j<i;j++){
            cout<<"::";
        }
        cout<<vertaux->nro<<" pos"<<vertaux->pos;
        cout<<"::";
        for(int j=0;j<i;j++){
            cout<<"::";
        }
        cout<<endl;
        vertaux = vertaux->sig;
        i++;
    }
}

void Torres::mostrarTorre2(){
    cout<<"Torre 2: \n";
    Torres *vertaux;
    int i{0};
    vertaux = h2;
    while(vertaux != NULL)
    {
        vertaux->pos = i;
        cout<<"\t::";
        for(int j=0;j<i;j++){
            cout<<"::";
        }
        cout<<vertaux->nro<<" pos"<<vertaux->pos;
        cout<<"::";
        for(int j=0;j<i;j++){
            cout<<"::";
        }
        cout<<endl;
        //cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
        vertaux = vertaux->sig;
        i++;
    }
}

void Torres::mostrarTorre3(){
    cout<<"Torre 3: \n";
    Torres *vertaux;
    int i{0};
    vertaux = h3;
    while(vertaux != NULL)
    {
        vertaux->pos = i;
        cout<<"\t::";
        for(int j=0;j<i;j++){
            cout<<"::";
        }
        cout<<vertaux->nro<<" pos"<<vertaux->pos;
        cout<<"::";
        for(int j=0;j<i;j++){
            cout<<"::";
        }
        cout<<endl;
        //cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
        vertaux = vertaux->sig;
        i++;
    }
}

void Torres::eliminarTorre1(){
    Torres *vertaux;
    vertaux = h1;
    Torres *nuevo = new Torres;

    nuevo = vertaux->sig;//13=13
    vertaux->nro = nuevo->nro;
    vertaux->sig = nuevo->sig;

}

void Torres::eliminarTorre2(){
    Torres *vertaux;
    vertaux = h2;
    Torres *nuevo = new Torres;

    nuevo = vertaux->sig;//13=13
    vertaux->nro = nuevo->nro;
    vertaux->sig = nuevo->sig;
}

void Torres::eliminarTorre3(){
    Torres *vertaux;
    vertaux = h3;
    Torres *nuevo = new Torres;

    nuevo = vertaux->sig;//13=13
    vertaux->nro = nuevo->nro;
    vertaux->sig = nuevo->sig;
}

void Torres::buscarDisco(int pos){
    Torres *vertaux;
    vertaux = h1;
    while(vertaux != NULL)
    {
        if(vertaux->pos==pos){
            cout<<"Encontrado: "<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
            break;
        }
        vertaux = vertaux->sig;
    }
}

void Torres::asignarDiscos(int n){
    int nro = n*10;
    h1 = NULL;
    for(int i{0};i<n;i++){
        insertarTorre1(nro);
        nro -= 10;
    }
}

void Torres::ordenarDiscos(int nro){
    if(nro==3){
        mostrarTorre1();
        if(h3==NULL){
            insertarTorre3(h1->nro);
            mostrarTorre3();
            eliminarTorre1();
        }
        if(h2==NULL){
            insertarTorre2(h1->nro);
            mostrarTorre2();
            eliminarTorre1();
        }
        if(h2->nro>h3->nro){
            insertarTorre2(h3->nro);
            mostrarTorre2();
            h3 = NULL;
            if(h3==NULL){
                insertarTorre3(h1->nro);
                mostrarTorre3();
                h1=NULL;
            }
        }
        if(h1==NULL){
            insertarTorre1(h2->nro);
            mostrarTorre1();
            eliminarTorre2();
            mostrarTorre2();
            insertarTorre3(h2->nro);
            h2 = NULL;
            if(h2==NULL){
                insertarTorre3(h1->nro);
                mostrarTorre3();
            }
        }
    }
    if(nro>=4){
        mostrarTorre1();
        if(h2==NULL){
            insertarTorre2(h1->nro);
            mostrarTorre2();
            eliminarTorre1();
        }
        if(h3==NULL){
            insertarTorre3(h1->nro);
            mostrarTorre3();
            eliminarTorre1();
        }
        if(h3->nro>h2->nro){
            insertarTorre3(h2->nro);
            mostrarTorre1();
            mostrarTorre3();
            h2 = NULL;
        }
        if(h2==NULL){
            insertarTorre2(h1->nro);
            eliminarTorre1();
            mostrarTorre1();
            mostrarTorre2();
            mostrarTorre3();
        }
        if(h1->nro>h3->nro){
            insertarTorre1(h3->nro);
            eliminarTorre3();
            mostrarTorre1();
            mostrarTorre2();
            mostrarTorre3();
        }
        if(h2->nro>h3->nro){
            insertarTorre2(h3->nro);
            h3 = NULL;
            mostrarTorre1();
            mostrarTorre2();
        }
        if(h2->nro>h1->nro){
            insertarTorre2(h1->nro);
            eliminarTorre1();
            mostrarTorre1();
            mostrarTorre2();
        }
        if(h3==NULL){
            insertarTorre3(h1->nro);
            h1 = NULL;
            mostrarTorre2();
            mostrarTorre3();
        }
        if(h3->nro>h2->nro){
            insertarTorre3(h2->nro);
            eliminarTorre2();
            mostrarTorre2();
            mostrarTorre3();
        }
        if(h1==NULL){
            insertarTorre1(h2->nro);
            eliminarTorre2();
            mostrarTorre1();
            mostrarTorre2();
            mostrarTorre3();
        }
        if(h1->nro>h3->nro){
            insertarTorre1(h3->nro);
            eliminarTorre3();
            mostrarTorre1();
            mostrarTorre2();
            mostrarTorre3();
        }
        if(h3->nro>h2->nro){
            insertarTorre3(h2->nro);
            h2 = NULL;
            mostrarTorre1();
            mostrarTorre3();
        }
        if(h2==NULL){
            insertarTorre2(h1->nro);
            eliminarTorre1();
            mostrarTorre1();
            mostrarTorre2();
            mostrarTorre3();
        }
        if(h3->nro>h1->nro){
            insertarTorre3(h1->nro);
            h1 = NULL;
            mostrarTorre2();
            mostrarTorre3();
        }
        if(h3->nro>h2->nro){
            insertarTorre3(h2->nro);
            h2 = NULL;
            mostrarTorre3();
        }
    }
}
