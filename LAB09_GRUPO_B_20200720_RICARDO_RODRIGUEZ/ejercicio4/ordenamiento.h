#ifndef ORDENAMIENTO_H_INCLUDED
#define ORDENAMIENTO_H_INCLUDED

#include<iostream>
#include<vector>

using namespace std;

template<class arr, class arr2>
class Ordenamiento{
    private:
        vector<arr> lista1;
        vector<arr2> lista2;
    public:
        Ordenamiento(vector<arr> lista1=0,vector<arr2> lista2=0);
        void mayor(){
            int aux1;
            float aux2;

            for(int i{0};i<lista1.size();i++){
                for(int j{0};j<lista1.size();j++){
                    if(lista1[j] > lista1[j+1]){
                        aux1 = lista1[j];
                        lista1[j] = lista1[j+1];
                        lista1[j+1] = aux1;
                    }
                }
            }
            aux1 = lista1[lista1.size()];
            cout<<"El mayor elemento del primer array es = "<<aux1<<endl;

            for(int i{0};i<lista2.size();i++){
                for(int j{0};j<lista2.size();j++){
                    if(lista2[j] > lista2[j+1]){
                        aux2 = lista2[j];
                        lista2[j] = lista2[j+1];
                        lista2[j+1] = aux2;
                    }
                }
            }
            aux2 = lista2[lista1.size()];
            cout<<"El mayor elemento del segundo array es = "<<aux2<<endl;
        }

        void menor(){
            int aux1;
            float aux2;

            for(int i{0};i<lista1.size();i++){
                for(int j{0};j<lista1.size();j++){
                    if(lista1[j] > lista1[j+1]){
                        aux1 = lista1[j];
                        lista1[j] = lista1[j+1];
                        lista1[j+1] = aux1;
                    }
                }
            }
            aux1 = lista1[1];
            cout<<"El menor elemento del primer array es = "<<aux1<<endl;

            for(int i{0};i<lista2.size();i++){
                for(int j{0};j<lista2.size();j++){
                    if(lista2[j] > lista2[j+1]){
                        aux2 = lista2[j];
                        lista2[j] = lista2[j+1];
                        lista2[j+1] = aux2;
                    }
                }
            }
            aux2 = lista2[1];
            cout<<"El menor elemento del segundo array es = "<<aux2<<endl;
        }
};

template<class arr, class arr2>
Ordenamiento<arr, arr2>::Ordenamiento(vector<arr> _lista1, vector<arr2> _lista2){
    this->lista1 = _lista1;
    this->lista2 = _lista2;
}

#endif // ORDENAMIENTO_H_INCLUDED


