/*
||||||||||||||||||||||||||||||||||||||||||||||||||||
|||                                              |||
|||     NOMBRES: RICARDO ALEXANDER               |||
|||     APELLIDOS: RODRIGUEZ PUMACAYO            |||
|||     CURSO: CIENCIAS DE LA COMPUTACION II     |||
|||     GRUPO: B                                 |||
|||                                              |||
||||||||||||||||||||||||||||||||||||||||||||||||||||
*/
/*
EJERCICIO 3:
3. Utilizando Functores y el método std::sort, elabore una clase Elementos con dos
    atributos de números enteros a y b. Genere una lista de 20 elementos de esta clase
    Elementos con valores aleatorios tanto para a y b. Mediante el método std::sort
    ordénelos de la forma en que un Objeto al ser comparado con un segundo se tenga
    la desigualdad : obj1.a < obj2.b . El método std::sort debe de trabajar con un
    objeto Functores. De ser necesario, investigue como realizar este procedimiento
    que dependa de un objeto del tipo Functores.
*/
#include<iostream>
#include <algorithm>
#include<vector>
#include<time.h>
using namespace std;

class Elementos{
    private:
        vector<int> a;
        vector<int> b;

    public:
        void operator()(){//operator()(){
            srand(time(NULL));
            for(int i{0};i<20;++i){
                a.push_back(1+rand()%100);
                b.push_back(1+rand()%100);
            }
            for(int i{0};i<20;++i){
                std::sort(a.begin(), a.end());
                cout<<"a["<<i<<"]= "<<a[i]<<endl;
            }
            for(int i{0};i<20;++i){
                std::sort(b.begin(), b.end());
                cout<<"b["<<i<<"]= "<<b[i]<<endl;
            }
            for(int i{0};i<20;++i){
                if(a[i]<b[i])
                    cout<<"a."<<a[i]<<" < "<<"b"<<b[i]<<endl;
                else
                    cout<<"a."<<a[i]<<" > "<<"b"<<b[i]<<endl;
            }
        }
};

int main(){
    Elementos lista;
    lista();
}
