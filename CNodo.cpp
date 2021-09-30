#include <iostream>
#include "CNodo.h"

void CNodo::InsertarAdelante(float nd){
    CNodo* PNuevo = nullptr;
    PNuevo = new CNodo;
    PNuevo->Psig=this->Psig;
    PNuevo->Pant=this;
    this->Psig->Pant=PNuevo;
    this->Psig=PNuevo;
    PNuevo->Dato=nd;
}

float CNodo::EliminarSiguiente(){
    CNodo* PEliminar = nullptr;
    PEliminar = this->Psig;
    float dato = this->Psig->Dato;
    PEliminar->Psig->Pant=this;
    this->Psig=PEliminar->Psig;
    delete PEliminar;
    return dato;
}

using namespace std;

