#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

void menu(){
    bool salir = false;

    while(salir == false) {
        int opcion =0;

        cout<<"Menu Principal"<< endl;
        cout<<"****************"<< endl;
        cout<<" 1- startShip";
        cout<<" 2- snake";
        cout<<" 3- salir";
        cout<<"ingrese un numero del menu para seleccionar un juego";
        cin>> opcion;

        switch(opcion)
        {
        case 1:
            starShip();
            break;
        
        case 2:
            snake();
            break;
        case 3:
            salir=true;
        
        defaul:
           break;

        }

    }
}