#include"matrices.h"

Matriz::Matriz(int _dato)
{
    dato = _dato;
    matrix = nullptr;//constructor del puntero **matrix
}

Matriz::~Matriz()
{
}

int Matriz::aleatorio()
{
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1,9);
    int dice_roll{};
    matrix = new int*[9];
    for(int i{0};i<9;i++){
        matrix[i] = new int[9];
    }
    for(int i{0};i<9;i++){
        for(int j{0};j<9;j++){
            int dice_roll = distribution(generator);
            *(*(matrix+i)+j) = dice_roll;
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int Matriz::busqueda()
{
    int opc;
    while(opc!=2)
    {
        cout<<"\n|| ESCOJA UNA OPCION   ||\n";
        cout<<"||   1. Buscar numero en la matriz\n";
        cout<<"||   2. SALIR\n";
        cout<<"||   ELIJA               ||";
        cin>>opc;
        if(opc==1){
            cout<<"Ingrese el numero a buscar: ";cin>>dato;
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    if(matrix[i][j]==dato)
                        cout<<"El numero "<<dato<<" esta en la posicion ["<<i<<"]["<<j<<"]\t"<<endl;
                }
            }
        }
    }
}
