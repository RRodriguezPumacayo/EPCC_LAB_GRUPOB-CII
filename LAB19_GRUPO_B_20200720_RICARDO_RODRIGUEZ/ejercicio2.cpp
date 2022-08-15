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
EJERCICIO 2:
2. Utilizando Functores, elabore una clase que simule el proceso de la función
    estándar FIND. Se debe trabajar enviando como parámetros el índice de inicio, el
    índice final de la búsqueda y el dato a buscar. Retorne todas las ocurrencias
    iguales dentro del rango indicado (debe devolver un vector con los índices de
    todas las ocurrencias)
*/

#include<iostream>
#include<vector>
using namespace std;

class FIND{
    public:
        int operator()(int inicio, int final, string date, vector<string> busqueda){
            int j{0};
            vector<string> indice;
            // date.insert(0, to_string(inicio));//inserto al inicio de la cadena el indice y comvierto el indice a string con to_string()
            //date.insert(1, ". ");
            //indice.push_back(date);
            //cout<<indice[0]<<endl;
            for(int i{0};i<busqueda.size();++i){
                if(busqueda[i].find(date)!=string::npos){
                    indice.push_back(busqueda[i]);
                    cout<<indice[j]<<endl;
                    ++j;
                }
            }
            cout<<"Se encontraron "<<j<<" coincidencias"<<endl;
        }
};

int main(){
    FIND libro;
    vector<string> busqueda = {"1. Hola soy Ricardo",
                    "2. Hola soy Pepe",
                    "3. Hola soy Ricardo",
                    "4. Hola soy Pepe",
                    "5. Hola soy Maria",
                    "6. Hola soy Jorge",
                    "7. Hola soy Samantha",
                    "8. Hola soy Ursula",
                    "9. Hola soy Ricardo",
                    "10. Hola soy Martha",
                    "11. Hola soy Jose",
                    "12. Hola soy Josefina",
                    "13. Hola soy Enrique",
                    "14. Hola soy Juan",
                    "15. Hola soy Felipe",
                    };
    libro(2,10,"Ricardo", busqueda);
    return 0;
}
