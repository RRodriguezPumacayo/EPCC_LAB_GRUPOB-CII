#include<iostream>
using namespace std;

class ProductoBancario{
    protected:
        string cliente;
        double saldo;
        int numproductos;
    public:
        ProductoBancario();
        void imprimirProducto();
        ~ProductoBancario();
};

class Cuenta: public ProductoBancario{
    public:
        Cuenta();
        void imprimirCuenta();
        ~Cuenta();
};

class CuentaJoven: public Cuenta{
    public:
        CuentaJoven();
        void imprimirJoven();
        ~CuentaJoven();
};

class Prestamo: public ProductoBancario{
    public:
        Prestamo();
        void imprimirPrestamo();
        ~Prestamo();
};

class Hipoteca: public Prestamo{
    public:
        Hipoteca();
        void imprimirHipoteca();
        ~Hipoteca();
};
