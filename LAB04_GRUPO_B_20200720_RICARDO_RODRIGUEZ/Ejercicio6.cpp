/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
6. Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.
*/

#include<iostream>
using namespace std;

int main(){
    int num, matriz[3][3],sum1=0,sum2=0,sum3=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>num;
            if(i==0)
                sum1 = sum1 + num;
            if(i==1)
                sum2 = sum2 + num;
            if(i==2)
                sum3 = sum3 + num;
        }
    }
    if(sum1>sum2 && sum1>sum3)
        cout<<"La fila con mayor suma es la fila 1: "<<sum1<<endl;
    if(sum2>sum1 && sum2>sum3)
        cout<<"La fila con mayor suma es la fila 2: "<<sum2<<endl;
    if(sum3>sum1 && sum3>sum2)
        cout<<"La fila con mayor suma es la fila 3: "<<sum3<<endl;
}
