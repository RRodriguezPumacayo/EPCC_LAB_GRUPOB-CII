#include"clases.h"

ProductoBancario::ProductoBancario(){
}

ProductoBancario::~ProductoBancario(){
}

Cuenta::Cuenta(){
}

Cuenta::~Cuenta(){
}

CuentaJoven::CuentaJoven(){
}

CuentaJoven::~CuentaJoven(){
}

Prestamo::Prestamo(){
}

Prestamo::~Prestamo(){
}

Hipoteca::Hipoteca(){
}

Hipoteca::~Hipoteca(){
}

void ProductoBancario::imprimirProducto(){
    cout<<"||| PRODUCTO BANCARIO |||\n";
    cout<<"Nombre del cliente : ";getline(cin,cliente);
    cout<<"Saldo = ";cin>>saldo;
    cout<<"NroProductos = ";cin>>numproductos;
    if(numproductos<0)
        numproductos = 0;
}

void Cuenta::imprimirCuenta(){
    cout<<"|||  CUENTA  |||\n";
    cout<<"Nombre: "<<cliente<<endl;
    cout<<"Saldo de la cuenta: "<<saldo<<endl;
    cout<<"Productos en la cuenta: "<<numproductos<<endl;
}

void CuentaJoven::imprimirJoven(){
    cout<<"||| CUENTA JOVEN |||\n";
    cout<<"Nombre: "<<cliente<<endl;
    cout<<"Saldo minimo: "<<saldo<<endl;
    cout<<"Productos en la cuenta: "<<numproductos<<endl;
}

void Prestamo::imprimirPrestamo(){
    cout<<"||| PRESTAMO |||\n";
    cout<<"Nombre: "<<cliente<<endl;
    cout<<"Prestamo: "<<(saldo + (saldo/2))/4<<endl;
}

void Hipoteca::imprimirHipoteca(){
    cout<<"||| HIPOTECA |||\n";
    cout<<"Nombre: "<<cliente<<endl;
    cout<<"Hipoteca de: "<<saldo*0.2/12;
}
