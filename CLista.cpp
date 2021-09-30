#include <iostream>
#include "CLista.h"
using namespace std;

void CLista::InsertarAlInicio(float nd)
{
    Inicio.InsertarAdelante(nd);
}

void CLista::InsertarAlFinal(float nd)
{
    Final.Pant->InsertarAdelante(nd);
}

float CLista::EliminarAlInicio()
{
    return Inicio.EliminarSiguiente();
}

float CLista::EliminarAlFinal()
{
    return Final.Pant->Pant->EliminarSiguiente();
}

void CLista::Imprimir()
{
    CNodo* AUX = Inicio.Psig;
    while(AUX!=&Final){
        cout<<AUX->Dato<<",";
        AUX=AUX->Psig;
    }
}

void CLista::Vaciar()
{

    while(Inicio.Psig != &Final){
        Inicio.EliminarSiguiente();
    }
}

int CLista::Size()
{
    CNodo* AUX = Inicio.Psig;
    int N=0;
    while(AUX!=&Final){
        N++;
        AUX=AUX->Psig;
    }
    return N;
}

bool CLista::IsEmpty()
{
    return (Inicio.Psig==&Final);
}

bool CLista::IsFull()
{
    return false;
}

CLista::CLista()
{
    Inicio.Psig=&Final;
    Final.Pant=&Inicio;
}

CLista::~CLista()
{
    Vaciar();
}
