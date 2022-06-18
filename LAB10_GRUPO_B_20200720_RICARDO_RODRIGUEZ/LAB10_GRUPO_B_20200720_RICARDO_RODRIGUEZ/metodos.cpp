#include "cabecera.h"

void Lista::Inicializa()//El vertice inicial es NULO
{
    h = NULL;
}

bool Lista::Vacio()
{
    if(h==NULL)
    {
        return true;
    }
    else
        return false;
}

void Lista::InsertaVertice(int nro)
{
    Vertice *nuevo = new Vertice;
    nuevo->nro = nro;
    nuevo->sig = NULL;

    if(Vacio())
    {
        h = nuevo;// Asi el h va a ser el primer vertice
    }
    else
    {
        Vertice *aux;
        aux = h;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void Lista::inputListaInicio(int nro)
{
    Vertice *aux;
    aux = h;
    Vertice *nuevo = new Vertice;
    aux->nro = nro;
    nuevo = aux;
    nuevo->sig = h->sig;

    while(nuevo->sig != NULL)
    {
        cout<<nuevo->nro<<"::"<<nuevo->sig<<endl;
        nuevo = nuevo->sig;
    }
}

void Lista::inputListaMedio(int pos, int nro)
{
    Vertice *vertaux;
    vertaux = h;
    Vertice *nuevo = new Vertice;
    Vertice *nuevo2 = new Vertice;
    int i{0};
    nuevo->nro = vertaux->nro;//10
    nuevo->sig = NULL;
    nuevo2->nro = nuevo->nro;//10
    while(vertaux->sig != NULL)
    {
        vertaux->pos = i++;
        if(pos==vertaux->pos){
            nuevo->nro = vertaux->nro;// 11
            vertaux->nro = nro;// 45
            cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
            vertaux = vertaux->sig;
            nuevo2->nro = vertaux->nro;//18
            vertaux->nro = nuevo->nro;//11
            vertaux->pos = i++;
        }
        if(nuevo2->nro==nuevo->nro){
            nuevo->sig = NULL;
            cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
            if(vertaux->sig==NULL){
                break;
            }
            nuevo->nro = vertaux->nro;//10 13 16
            nuevo2->nro = nuevo->nro;//10 13 16
            vertaux = vertaux->sig;
        }
        else{
            cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
            vertaux = vertaux->sig;
            nuevo->nro = nuevo2->nro;//11 = 18
            nuevo2->nro = vertaux->nro;//15
            vertaux->nro = nuevo->nro;//11 = 18
            if(vertaux->sig==NULL){
                vertaux->sig = nuevo;
            }
        }
    }
}

void Lista::eliminarListaUltimo(){
    Vertice *vertaux;
    vertaux = h;
    Vertice *nuevo = new Vertice;
    while(vertaux->sig != NULL)
    {
        nuevo = vertaux->sig;
        if(nuevo->sig==NULL && nuevo->nro==NULL){
            vertaux->nro=NULL;
            vertaux->sig=NULL;
            break;
        }
        cout<<vertaux->nro<<"::"<<vertaux->sig<<endl;
        vertaux = vertaux->sig;
        if(vertaux->sig==NULL){
            vertaux->nro=NULL;
            delete vertaux->sig;
        }
    }
}

void Lista::eliminarListaPrimero(){
    Vertice *vertaux;
    vertaux = h;
    Vertice *nuevo = new Vertice;

    nuevo = vertaux->sig;//13=13
    vertaux->nro = nuevo->nro;
    vertaux->sig = nuevo->sig;
    while(vertaux != NULL)
    {
        cout<<vertaux->nro<<"::"<<vertaux->sig<<endl;
        vertaux = vertaux->sig;
    }
}

void Lista::eliminarListaCualquiera(int pos){
    Vertice *vertaux;
    vertaux = h;
    Vertice *nuevo = new Vertice;
    int i{0};
    vertaux->pos = i;
    cout<<"USE MOSTRAR PARA VER EL ELEMENTO ELIMINADO\n";
    cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
    while(vertaux->sig != NULL)
    {
        if(vertaux->pos==pos){
            nuevo = vertaux->sig;
            vertaux->nro = nuevo->nro;
            vertaux->sig = nuevo->sig;
        }
        vertaux = vertaux->sig;
        vertaux->pos = ++i;
        cout<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
    }
}

void Lista::randomear(int nro){
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1,nro);
    Vertice *vertaux;
    vertaux = h;
    Vertice *nuevo = new Vertice;
    int i{0};
    while(i!=nro){
        int dice_roll = distribution(generator);
        vertaux->nro = dice_roll;
        cout<<vertaux->nro<<" :: ";
        vertaux = vertaux->sig;
        vertaux->sig = nuevo;
        i++;
    }
}

void Lista::mostrarLista(){
    Vertice *vertaux;
    vertaux = h;
    while(vertaux != NULL)
    {
        cout<<vertaux->nro<<"::"<<vertaux->sig<<endl;
        vertaux = vertaux->sig;
    }
}
