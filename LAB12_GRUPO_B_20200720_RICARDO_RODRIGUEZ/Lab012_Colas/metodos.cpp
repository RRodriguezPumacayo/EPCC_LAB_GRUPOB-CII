#include"cabecera.h"

void Colas::Inicializa(){
    h = NULL;
    h2 = NULL;
}

bool Colas::Vacio(){
    if(h==NULL)
    {
        return true;
    }
    else
        return false;
}

void Colas::agregarCola(int nro){
    Colas *nuevo = new Colas;
    nuevo->nro = nro;
    nuevo->sig = NULL;
    if(Vacio()){
        h = nuevo;
    }
    else{
        Colas *aux;
        aux = h;
        while(aux->sig!=NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void Colas::agregarCola2(int nro){
    Colas *nuevo = new Colas;
    nuevo->nro = nro;
    nuevo->sig = NULL;
    if(h2==NULL){
        h2 = nuevo;
    }
    else{
        Colas *aux;
        aux = h2;
        while(aux->sig!=NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void Colas::mostrarCola(){
    int i{1};
    Colas *aux;
    aux = h;
    cout<<"\nEstos son los datos de los elementos de la Cola\n";
    while(aux!=NULL){
        aux->pos = i;
        cout<<aux->nro<<"::"<<aux->pos<<"::"<<aux->sig<<endl;
        i++;
        aux = aux->sig;
    }
}

void Colas::mostrarCola2(){
    int i{1};
    Colas *aux;
    aux = h2;
    cout<<"\nEstos son los datos de los elementos de la Cola\n";
    while(aux!=NULL){
        aux->pos = i;
        cout<<aux->nro<<"::"<<aux->pos<<"::"<<aux->sig<<endl;
        i++;
        aux = aux->sig;
    }
}

void Colas::eliminarCola(){
    Colas *vertaux;
    vertaux = h;
    Colas *nuevo = new Colas;

    nuevo = vertaux->sig;//13=13
    vertaux->nro = nuevo->nro;
    vertaux->sig = nuevo->sig;
    if(vertaux->nro==NULL && vertaux->sig==NULL)
        h = NULL;
}

void Colas::eliminarCola2(){
    Colas *vertaux;
    vertaux = h2;
    Colas *nuevo = new Colas;

    nuevo = vertaux->sig;//13=13
    vertaux->nro = nuevo->nro;
    vertaux->sig = nuevo->sig;
    if(vertaux->nro==NULL && vertaux->sig==NULL)
        h2 = NULL;
}

void Colas::buscarCola1(){
    int nro{0}, element{0};
    mostrarCola();
    cout<<"\nElemento a buscar: ";cin>>element;
    Colas *aux;
    aux = h;
    while(aux != NULL){
        if(aux->pos==element){
            cout<<"Elemento encontrado: "<<aux->nro<<"::"<<aux->pos<<"::"<<aux->sig<<endl;
            break;
        }
        aux = aux->sig;
    }
}

void Colas::buscarCola2(){
    int nro{0}, element{0};
    mostrarCola2();
    cout<<"\nElemento a buscar: ";cin>>element;
    Colas *aux;
    aux = h2;
    while(aux != NULL){
        if(aux->pos==element){
            cout<<"Elemento encontrado: "<<aux->nro<<"::"<<aux->pos<<"::"<<aux->sig<<endl;
            break;
        }
        aux = aux->sig;
    }
}

void Colas::compararCola(){
    int i{0};
    Colas *vertaux;
    vertaux = h2;
    while(h != NULL){
        if(h->nro > vertaux->nro){
            i++;
            h->iteraciones = i;
            cout<<"Cola1: "<<h->nro<<" > Cola2: "<<vertaux->nro<<endl;
            vertaux = vertaux->sig;
            if(vertaux==NULL){
                cout<<"Cola 1: "<<h->nro<<", nro iteraciones "<<h->iteraciones<<endl;
                eliminarCola();
                i = 1;
                vertaux = h2;
            }
        }
        else if(h->sig==NULL){
            h->iteraciones = i;
            cout<<"Cola 1: "<<h->nro<<", nro iteraciones "<<h->iteraciones<<endl;
            break;
        }
        else{
            h->iteraciones = i;
            cout<<"Cola 1: "<<h->nro<<", nro iteraciones "<<h->iteraciones<<endl;
            eliminarCola();
            i = 0;
            vertaux = h2;
        }
    }
}
