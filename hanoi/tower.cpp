#include"tower.h"

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
        cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
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
        cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
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
        cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
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
    while(vertaux != NULL)
    {
        vertaux = vertaux->sig;
    }
}

void Torres::eliminarTorre2(){
    Torres *vertaux;
    vertaux = h2;
    Torres *nuevo = new Torres;

    nuevo = vertaux->sig;//13=13
    vertaux->nro = nuevo->nro;
    vertaux->sig = nuevo->sig;
    while(vertaux != NULL)
    {
        vertaux = vertaux->sig;
    }
}

void Torres::eliminarTorre3(){
    Torres *vertaux;
    vertaux = h3;
    Torres *nuevo = new Torres;

    nuevo = vertaux->sig;//13=13
    vertaux->nro = nuevo->nro;
    vertaux->sig = nuevo->sig;
    while(vertaux != NULL)
    {
        vertaux = vertaux->sig;
    }
}

void Torres::buscarDisco(int pos){
    Torres *vertaux;
    vertaux = h1;
    while(vertaux != NULL)
    {
        if(vertaux->pos==pos){
            cout<<"Founded: "<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
            break;
        }
        vertaux = vertaux->sig;
    }
}

void Torres::asignarDiscos(int n){
    int nro = n*10;
    for(int i{0};i<n;i++){
        insertarTorre1(nro);
        nro -= 10;
    }
}

void Torres::ordenarDiscos(){
    Torres *nuevo = new Torres;
    nuevo->nro = h1->nro;
    nuevo->sig = h1->sig;
    h2 = nuevo;
    cout<<"Torre 2:\n";
    cout<<h2->nro<<"::"<<h2->sig<<endl<<endl;
    eliminarTorre1();
    mostrarTorre1();
    Torres *nuevo2 = new Torres;
    nuevo2->nro = h1->nro;
    nuevo2->sig = h1->sig;
    h3 = nuevo2;
    cout<<"Torre 3:\n";
    cout<<h3->nro<<"::"<<h3->sig<<endl<<endl;
    eliminarTorre1();
}
