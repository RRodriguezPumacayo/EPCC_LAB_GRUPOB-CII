/*
|||| NOMBRE: RICARDO ALEXANDER          ||||
|||| APELLIDOS: RODRIGUEZ PUMACAYO      ||||
|||| CUI: 20200720                      ||||
|||| GRUPO: B                           ||||
*/
/*
2. Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá
de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los punteros.
Repita este proceso de asignación y retiro de memoria dentro de un for de 1 000 000 veces.
*/

#include<iostream>

int funcionvector(float *vector, long tamanio){
    for(long i=0;i<tamanio;i++){
        vector[i] = rand()%tamanio+1;
        std::cout<<vector[i]<<" ";
    }
}

int borrar(float *vector){
    delete[]vector;
}

int producto(float *vector1, float *vector2, long tamanio){
    long suma=NULL;
    for(long i=0;i<tamanio;i++){
        suma = suma + (vector1[i] * vector2[i]);
    }
    return suma;
}

int main()
{
    int tamanio=10;

    float* vector1 = NULL;
    vector1 = new float[tamanio];
    float* vector2 = NULL;
    vector2 = new float[tamanio];
    for(long long i=1;i<=1000000;i++){
        std::cout<<"\nRonda "<<i<<" : \n";
        std::cout<<"Vector 1: ";
        funcionvector(vector1, tamanio);
        std::cout<<"\nVector 2: ";
        funcionvector(vector2, tamanio);
        std::cout<<"\nProducto punto = "<<producto(vector1,vector2,tamanio);
        borrar(vector1);
        borrar(vector2);
        vector1 = new float[tamanio];
        vector2 = new float[tamanio];
    }
    return 0;
}
