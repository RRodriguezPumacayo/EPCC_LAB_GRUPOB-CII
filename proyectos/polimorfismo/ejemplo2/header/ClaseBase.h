// Clase ClaseBase.h
#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;

class ClaseBase
{
    public:
        ClaseBase();
        ~ClaseBase();
        void funcion(int x);
        void funcion(double x);
        void funcion(int x, int y);
};