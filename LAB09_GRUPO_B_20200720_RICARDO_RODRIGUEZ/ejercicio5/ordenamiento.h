#ifndef ORDENAMIENTO_H_INCLUDED
#define ORDENAMIENTO_H_INCLUDED
#include <iostream>
#include<vector>
using namespace std;

template<class arr, class arr2>
class Ordenamiento{
    private:
        arr *lista1;
        arr2 *lista2;
    public:
        Ordenamiento(arr *lista1=0,arr2 *lista2=0);

        void llenar(){
            cout<<"Llenando\n";
            for(int i{0};i<9;i++){
                cout<<"Lista1 ["<<i<<"] = ";cin>>lista1[i];
            }
            for(int i{0};i<5;i++){
                cout<<"Lista2 ["<<i<<"] = ";cin>>lista2[i];
            }
        }

        void ascendente(){
            int aux1;
            float aux2;
            for(int i{0};i<9;i++){
                for(int j{0};j<9;j++){
                    if(lista1[j] > lista1[j+1]){
                        aux1 = lista1[j];
                        lista1[j] = lista1[j+1];
                        lista1[j+1] = aux1;
                    }
                }
            }
            cout<<"Orden Ascendente de la Primera lista\n";
            for(int i=1;i<=9;i++){
                cout<<lista1[i]<<"\t";
            }
            cout<<endl;

            for(int i{0};i<5;i++){
                for(int j{0};j<5;j++){
                    if(lista2[j] > lista2[j+1]){
                        aux2 = lista2[j];
                        lista2[j] = lista2[j+1];
                        lista2[j+1] = aux2;
                    }
                }
            }
            cout<<"Orden Ascendente de la Segunda lista\n";
            for(int i=1;i<=5;i++){
                cout<<lista2[i]<<"\t";
            }
            cout<<endl;
        }

        void descendente(){
            int aux1;
            float aux2;

            for(int i{0};i<9;i++){
                for(int j{0};j<9;j++){
                    if(lista1[j] > lista1[j+1]){
                        aux1 = lista1[j];
                        lista1[j] = lista1[j+1];
                        lista1[j+1] = aux1;
                    }
                }
            }
            cout<<"Orden Descendente de la Primera lista\n";
            for(int i=9;i>0;i--){
                cout<<lista1[i]<<"\t";
            }
            cout<<endl;

            for(int i{0};i<5;i++){
                for(int j{0};j<5;j++){
                    if(lista2[j] > lista2[j+1]){
                        aux2 = lista2[j];
                        lista2[j] = lista2[j+1];
                        lista2[j+1] = aux2;
                    }
                }
            }
            cout<<"Orden Descendente de la Segunda lista\n";
            for(int i=5;i>0;i--){
                cout<<lista2[i]<<"\t";
            }
            cout<<endl;
        }

};

template<class arr, class arr2>
Ordenamiento<arr, arr2>::Ordenamiento(arr *_lista1, arr2 *_lista2){
    this->lista1 = _lista1;
    this->lista2 = _lista2;
}

#endif // ORDENAMIENTO_H_INCLUDED

