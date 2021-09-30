#ifndef CLISTA_H_INCLUDED
#define CLISTA_H_INCLUDED
#include "CNodo.h"

class CLista{

    private:
        CNodo Inicio;
        CNodo Final;

    public:
        void InsertarAlInicio(float nd);
        void InsertarAlFinal(float nd);
        float EliminarAlInicio();
        float EliminarAlFinal();
        void Imprimir();
        void Vaciar();
        int Size();
        bool IsEmpty();
        bool IsFull();
        CLista();
        ~CLista();
};

#endif // CLISTA_H_INCLUDED
