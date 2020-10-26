#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo <float> arreglo;

    for(size_t i = 0; i < 1000000; i++){
        arreglo.insertarFinal(i);
    }
    for(size_t i = 0; i < 1000000; i++){
        cout <<arreglo[i]<< " ";
    }
     cout << endl;
    return 0;
}