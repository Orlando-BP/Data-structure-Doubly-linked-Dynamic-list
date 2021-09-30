#ifndef CNODO_H_INCLUDED
#define CNODO_H_INCLUDED


class CNodo{
    friend class CLista;
    private:
        CNodo* Psig;
        CNodo* Pant;
        float Dato;

        void InsertarAdelante(float nd);
        float EliminarSiguiente();
};

#endif // CNODO_H_INCLUDED
