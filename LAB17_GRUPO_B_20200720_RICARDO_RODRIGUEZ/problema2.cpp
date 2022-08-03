/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

|||||||     NOMBRES: RICARDO ALEXANDER                      |||||||
|||||||     APELLIDOS: RODRIGUEZ PUMACAYO                   |||||||
|||||||     CUI: 20200720                                   |||||||
|||||||     GRUPO: B                                        |||||||

|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

EJERCICIO 2.
Definir una clase utilizando plantillas que permita almacenar datos en un árbol binario.
Por el momento solo se insertarán elementos en la estructura.
Simule el proceso de almacenar 100 datos y verifique que la estructura no tenga problemas.

*/

#include <iostream>
using namespace std;

template <typename T>
class Lista
{
    private:
        T name;
        Lista *nodos;
        Lista *sig;
    public:
        bool Vacio();
        void inicializar();
        void insertar(int name);
        void mostrar();

};

template <typename T>
void Lista<T>::inicializar()
{
    nodos = NULL;
}

template <typename T>
void Lista<T>::insertar(int n)
{
    T nro{0};
    for(int i{0};i<n;++i){
        nro = 1+rand()%(1000-1);
        Lista *nuevo = new Lista;
        nuevo->name = nro;
        nuevo->sig = NULL;
        if(nodos==NULL)
        {
            nodos = nuevo;
        }
        else
        {
            Lista *aux;
            aux = nodos;
            while(aux->sig!=NULL){
                aux = aux->sig;
            }
            aux->sig = nuevo;
        }
    }
}

template <typename T>
void Lista<T>::mostrar()
{
    Lista *aux;
    aux = nodos;
    while(aux!=NULL)
    {
        cout<<aux->name<<"::"<<aux->sig<<"\n";
        aux = aux->sig;
    }
}

int main()
{
    cout<<"|------------------------|"<<endl;
    cout<<"|     Lista Enlazada     |"<<endl;
    cout<<"|------------------------|"<<endl;

    cout<<"|||  GENERANDO PRIMER LISTA |||"<<endl;
    Lista<int> mercado;
    mercado.inicializar();
    mercado.insertar(100);
    mercado.mostrar();

    cout<<"|||  GENERANDO SEGUNDA LISTA |||"<<endl;
    Lista<double> lista;
    lista.inicializar();
    lista.insertar(100);
    lista.mostrar();

    return 0;
}
