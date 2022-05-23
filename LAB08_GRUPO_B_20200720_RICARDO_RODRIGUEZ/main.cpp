#include"classRectangulo.h"
#include"classElipse.h"
#include"classCuadrado.h"
#include"classCirculo.h"

int main()
{
    int opc;
    cout<<"|||  MENU    |||\n";
    cout<<" 1) Ejercicio 1: Rectangulo\n";
    cout<<" 2) Ejercicio 2: Elipse\n";
    cout<<" 3) Ejercicio 3: Cuadrado\n";
    cout<<" 4) Ejercicio 4: Circulo\n";
    cout<<" 5) EXIT\n";
    do
    {
        cout<<"\n|||    INGRESE UNA OPCION 1-5: \n";
        cin>>opc;
        if(opc==1){
            Forma *bptr;
            Rectangulo rec;
            bptr = &rec;
            bptr->setName();
            bptr->setColor();
            bptr->setLado();
            bptr->imprimir();
            rec.setArea();
            rec.setPerimetro();
            rec.changeSize();
            bptr->changeColor();
            bptr->imprimir();
            rec.setPerimetro();
        }
        if(opc==2){
            Forma *ptrlipse;
            Elipse lipse;
            ptrlipse = &lipse;
            ptrlipse->setName();
            ptrlipse->setLado();
            ptrlipse->imprimir();
            ptrlipse->setArea();
        }
        if(opc==3){
            Rectangulo *ptrquad;
            Cuadrado quad;
            ptrquad = &quad;
            ptrquad->setName();
            ptrquad->setLado();
            ptrquad->imprimir();
            ptrquad->setArea();
        }
        if(opc==4){
            Elipse *ptrcircle;
            Circulo circle;
            ptrcircle = &circle;
            ptrcircle->setName();
            ptrcircle->setLado();
            ptrcircle->imprimir();
            ptrcircle->setArea();
        }

    }
    while(opc!=5);


    return 0;
}
