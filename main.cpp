#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo <string> arreglo;

    arreglo.insertarInicio("A");
    arreglo.insertarInicio("B");
    arreglo.insertarFinal("C");
    arreglo.insertarFinal("D");
    arreglo.mostrar();
    
    /*Arreglo <float> arreglo;

    for(size_t i = 0; i < 10; i++){
        arreglo.insertarFinal(i);
    }
    arreglo.insertar(100, 2);
    arreglo.eliminarInicio();
    arreglo.eliminarFinal();
    arreglo.elminar(4);
    for(size_t i = 0; i < arreglo.size(); i++){
        cout <<arreglo[i]<< " ";
    }

    cout << endl;*/
    return 0;
}