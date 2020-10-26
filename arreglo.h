#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>

using namespace std;

template <class T>
class Arreglo{
    T *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 1000;

public:
    Arreglo();
    ~Arreglo();
    void insertarFinal(const T& v);
    void insertarInicio(const T& v);
    void insertar(const T& v, size_t p);

    void eliminarFinal();
    void eliminarInicio();
    void elminar(size_t p);

    size_t size();
    int operator[](size_t p)
    {
        return arreglo[p];
    }
    
private:
    void expandir();

};

template <class T>
Arreglo<T>::Arreglo()
{
    arreglo = new T[MAX];
    cont = 0;
    tam = MAX;
}

template <class T>
Arreglo<T>::~Arreglo(){
    delete[] arreglo;
}

template <class T>
void Arreglo<T>::insertarFinal(const T& v){
    if(cont == tam){
        //expandir arreglo
        expandir();
    }
    arreglo[cont] = v;
    cont++;
}

template <class T>
void Arreglo<T>::insertarInicio(const T& v){
    if(cont == tam){
        //expandir arreglo
        expandir();
    }
    arreglo[cont] = v;
    cont++;
}

template <class T>
void Arreglo<T>::insertar(const T& v, size_t p){
     if(p >= cont){
         cout << "Posicion no valida" << endl;
         return;
     }
     if(cont == tam){
        //expandir arreglo
        expandir();
    }
    for(size_t i = cont; i > p; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[p] = v;
    cont++;
}

template <class T>
void Arreglo<T>::eliminarFinal(){
    if(cont == 0){
        cout << "Arreglo esta vacion" << endl;
        return;
    }
    cont--;
}

template <class T>
void Arreglo<T>::eliminarInicio(){
    if(cont == 0){
        cout << "Arreglo esta vacion" << endl;
        return;
    }
    for(size_t i = 0; i < cont-1; i++){
        arreglo[i] = arreglo[i+1];
    }
    cont--;
}

template <class T>
void Arreglo<T>::elminar(size_t p){
    if(cont == 0){
        cout << "Arreglo esta vacion" << endl;
        return;
    }
    for(size_t i = p ; i < cont-1; i++){
        arreglo[i] = arreglo [i+1];
    }
    cont--;
}


template <class T>
size_t Arreglo<T>::size(){
    return cont;
}

template <class T>
void Arreglo<T>::expandir()
{
    T *nuevo = new T[tam+MAX];

    for(size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}

#endif 