#include <iostream>
#include "arreglo.h"
#include "Computadora.h"

using namespace std;

int main()
{
    Arreglo<Computadora> computadora;

    Computadora c01("Windows", "Dell", 16, 500);
    Computadora c02("Ios", "Apple", 12, 700);
    Computadora c03("Linux", "Huawei", 8, 1000);
    Computadora c04("Windows", "HP", 8, 320);
    Computadora c05("Windows", "Acer", 4, 250);

    computadora << c01 << c02 << c03 << c04 << c05;
    //Computadora c06("Linucs", "Huawei", 8, 1000);
    Computadora c07("Windous", "Dell", 16, 500);

    Arreglo<Computadora*> ptrs = computadora.buscarTodos(c07);

    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else{
        cout << "No existen coincidencias"<<endl;
    }
   
   
   /* Computadora *ptr = computadora.buscar(c06);

    if(ptr != nullptr){
        cout << *ptr << endl;
    }
    else{
        cout << "Computadora no existe"<<endl;
    }*/
    

    

    /*Computadora *ptr = computadora.buscar(c04);

    if(ptr != nullptr){
        cout << *ptr << endl;
    }
    else{
        cout << "Computadora no existe"<<endl;
    }*/
    



    /*Arreglo <string> arreglo;

    arreglo.insertarInicio("A");
    arreglo.insertarInicio("B");
    arreglo.insertarFinal("C");
    arreglo.insertarFinal("D");
    arreglo.insertar("H",2);
    //arreglo.eliminarInicio();
    //arreglo.eliminarFinal();
    arreglo.elminar(1);
    arreglo.mostrar();
    cout<<endl;
    string *v =arreglo.buscar("C");
    *v = "Z";
    cout<<v<<" "<<*v<<endl;
    arreglo.mostrar();*/
    
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