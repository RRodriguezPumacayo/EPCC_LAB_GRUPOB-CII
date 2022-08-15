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
EJERCICIO 1:
1. Utilizando Functores, elabore una clase que calcule la ecuación de regresión lineal
    simple (y = a + bc) de un conjunto de pares de datos (x, y) almacenados en un
    vector, retorne como parte del resultado los valores de a y b. Apóyese en functores
    para calcular las diferentes sumatorias que pueden presentarse.
*/

#include<iostream>
#include<vector>
using namespace std;

class Bienvenida{
    public:
        void operator()(int matrix[][8], int x, int y){
            double b{0}, xi, yi, x2, a, c;
            for(int i{x};i<8;++i){
                for(int j{y};j<8;++j){
                    cout<<"["<<i<<"]["<<j<<"]";
                    xi += i;
                    yi += j;
                    x2 += i*i;
                    matrix[i][i] = i*j;
                    b += matrix[i][i];
                    cout<<endl;
                }
                c = i;
            }
            b = (8*b - xi*yi)/(8*xi*xi - (x2));
            cout<<"Valor de b = "<<b<<endl;
            a = yi/8 - b*xi/8;
            cout<<"Valor de a = "<<a<<endl;
            cout<<"Valor de 'y = a + bc' es = "<<a+b*c<<endl;
        }
};

int main()
{
    int matrix[8][8];
    Bienvenida obj;
    obj(matrix, 1, 2);
    return 0;
}
