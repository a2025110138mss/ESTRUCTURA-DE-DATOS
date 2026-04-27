#include <iostream>
#include "Pila.h"
using namespace std;

Pila::Pila()
{
    cima = -1;
}

bool Pila::Apilar(int& elemento)
{
    if (cima == MAX - 1)
    {
        cout << "Desbordamiento de Pila (Overflow)" << endl;
        return false;
    }
    else
    {
        cima++;
        pila[cima] = elemento;
        return true;
    }
}

bool Pila::Desapilar()
{
    if (cima == -1)
    {
        cerr << "Underflow: pila vacia" << endl;
        return false;
    }
    else
    {
        cima--;
        return true;
    }
}

bool Pila::CimaPila(int& elemento)
{
    if (PilaVacia())
    {
        cerr << "Pila vacia (underflow)" << endl;
        return false;
    }
    else
    {
        elemento = pila[cima]; 
        return true;
    }
}

void Pila::VerPila()
{
    for (int i = 0; i <= cima; i++)
        cout << pila[i] << endl;
}

bool Pila::PilaVacia()
{
    return cima == -1;
}

void Pila::LimpiarPila()
{
    cima = -1;
}

bool Pila::Iguales(Pila p)
{
    if (cima != p.cima)
        return false;
    for(int i=0; i<=cima; i++)
    {
        if(pila[i] != p.pila[i])
           return false;
    }
    return true;
}
