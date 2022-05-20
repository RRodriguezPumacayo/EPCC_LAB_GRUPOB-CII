// Clase Complex.h
#pragma once
class Complex
{
    public:
        Complex(int,int);
        ~Complex();
        Complex operator+(Complex const & obj);
        void print();
    private:
        int real, imag;
};