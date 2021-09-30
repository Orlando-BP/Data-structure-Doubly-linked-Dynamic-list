#include <iostream>
#include "CLista.h"
using namespace std;

int main()
{
    CLista Lista;
    cout<<"Insertar del 1 al 3:"<<endl;
    Lista.InsertarAlInicio(1);
    Lista.InsertarAlFinal(2);
    Lista.InsertarAlFinal(3);
    Lista.InsertarAlFinal(4);
    Lista.InsertarAlFinal(5);
    Lista.InsertarAlFinal(6);
    Lista.Imprimir();
    cout<<endl;
    cout<<"Eliminar 6 o final"<<endl;
    Lista.EliminarAlFinal();
    Lista.Imprimir();
    cout<<endl<<"Esta vacia:1 esta llena:0 respuesta del metodo IsEmpty: "<<Lista.IsEmpty()<<endl;
    cout<<"Eliminar 1 o inicio"<<endl;
    Lista.EliminarAlInicio();
    Lista.Imprimir();
    cout<<endl<<"Tamaño de lista: "<<Lista.Size()<<endl;
    cout<<"Vaciando lista"<<endl;
    Lista.Vaciar();
    cout<<endl<<"Esta vacia:1 esta llena:0 respuesta del metodo IsEmpty: "<<Lista.IsEmpty()<<endl;
    return 0;
}
