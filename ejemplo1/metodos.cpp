#include"cabecera.h"

void Torres::Inicializa()//El vertice inicial es NULO
{
    h1 = NULL;
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

void Torres::insertar(int nro){
    Torres *nuevo = new Torres;
    nuevo->nro = nro;
    nuevo->sig = NULL;

    if(Vacio())
    {
        h1 = nuevo;// Asi el h va a ser el primer vertice
    }
    else
    {
        Torres *aux;
        aux = h1;
        while(aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void Torres::insertarInicio(int nro){
    Torres *nuevo = new Torres;
    nuevo->nro = nro;
    nuevo->sig = NULL;
    Torres *ant = new Torres;
    Torres *ant2 = new Torres;

    if(Vacio())
    {
        h1 = nuevo;// Asi el h va a ser el primer vertice
    }
    else
    {
        Torres *aux;
        aux = h1;

        //20 30 40
        //50 20 30 40
        ant->nro = aux->nro;//20 = 20
        aux->nro = nro;//|20| = 50
        aux = aux->sig;//50 |20| 30 40

        while(aux->sig != NULL){
            ant2->nro = aux->nro;//0 = 30   30 = 40
            ant2->sig = aux->sig;//&0 = 30  &30 = &40

            aux->nro = ant->nro;//30 = 20   40 = 30
            aux->sig = ant->sig;//&30 = &20     &40 = &30

            ant->nro = ant2->nro;//20 = 30      30 = 40
            ant->sig = ant2->sig;//&20 = &30    30 = &40

            aux = aux->sig;

        }
        ant2->sig = NULL;
        aux->sig = ant2->sig;
    }
}

void Torres::mostrarTorres(){
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

void Torres::buscarDisco(int pos){
    Torres *vertaux;
    vertaux = h1;
    while(vertaux != NULL)
    {
        if(vertaux->pos = pos){
            cout<<"Founded: "<<vertaux->nro<<"::"<<vertaux->pos<<"::"<<vertaux->sig<<endl;
            break;
        }
        else{
            cout<<"El elemento que ha buscado no existe\n";
            break;
        }
        vertaux = vertaux->sig;
    }
}

void Torres::eliminarDisco(){
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

