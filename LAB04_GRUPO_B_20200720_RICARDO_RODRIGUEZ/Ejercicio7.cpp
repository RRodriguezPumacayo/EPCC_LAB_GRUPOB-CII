/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
7. Escribe un programa, que trabajando mediante funciones, presente un menú al
usuario, mueva las columnas a la derecha o izquierda, asimismo mueva las filas para
arriba o para abajo.
*/
#include<iostream>
using namespace std;

int matriz(int m[5][5]){

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            m[i][j] = j+1;
        }
    }
}

int derecha(int m[5][5]){
    int aux;
    cout<<"DERECHA: "<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j==4){
                aux = m[i][0];
                m[i][0] = m[i][j];
                m[i][j] = aux;
            }
        }
    }
}

int izquierda(int m[5][5]){
    int aux;
    cout<<"IZQUIERDA: "<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j==0){
                aux = m[i][4];
                m[i][4] = m[i][j];
                m[i][j] = aux;
            }
        }
    }
}

int arriba(int m[5][5]){
    int aux;
    cout<<"ARRIBA: "<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==4){
                aux = m[4][j];
                m[4][j] = m[i][j];
                m[i][j] = aux;
            }
        }
    }
}

int abajo(int m[5][5]){
    int aux;
    cout<<"ABAJO: "<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0){
                aux = m[0][j];
                m[0][j] = m[i][j];
                m[i][j] = aux;
            }
        }
    }
}

int imprimir(int m[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int m[5][5],opc;
    matriz(m);
    imprimir(m);
    do{
        cout<<"|||  MENU    |||"<<endl;
        cout<<"1. Derecha"<<endl;
        cout<<"2. Izquierda"<<endl;
        cout<<"3. Arriba"<<endl;
        cout<<"4. Abajo"<<endl;
        cout<<"5. SALIR"<<endl;
        cin>>opc;
        if(opc==1){
            derecha(m);
            imprimir(m);
        }
        if(opc==2){
            izquierda(m);
            imprimir(m);
        }
        if(opc==3){
            arriba(m);
            imprimir(m);
        }
        if(opc==4){
            abajo(m);
            imprimir(m);
        }
    }while(opc!=5);

}

