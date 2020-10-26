#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo <float> arreglo;

    for(size_t i = 0; i < 10; i++){
        arreglo.insertarFinal(i);
    }
    arreglo.insertar(100, 2);
    for(size_t i = 0; i < 10; i++){
        cout <<arreglo[i]<< " ";
    }
    
    cout << endl;
    return 0;
}