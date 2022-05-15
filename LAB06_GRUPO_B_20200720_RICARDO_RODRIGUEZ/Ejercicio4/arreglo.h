/*
4. Implemente una aplicaci�n con clases donde una clase contiene un arreglo en el que
se pueden almacenar como m�ximo 5 datos. Debe tener un nuevo dato para
almacenarlo, debe existir un m�todo que verifique que el arreglo tenga espacio
disponible para guardar el dato. En caso contrario se debe mostrar un mensaje
indicando que el arreglo est� lleno. Asimismo, debe tener un m�todo para retirar un
dato del arreglo, este m�todo debe verificar que, si haya algo para sacar del arreglo,
es decir que el arreglo no vaya a estar vac�o, en cuyo caso debe desplegar un mensaje
diciendo que no hay nada para sacar de arreglo.
*/
#include<iostream>
#include<vector>
using namespace std;

class arreglo
{
    private:
        string *lista;
        bool dato;
    public:
        arreglo(int);
        ~arreglo();
        void inputDates();
        void mostrarArray();
        void verify();
        void retire();
};
