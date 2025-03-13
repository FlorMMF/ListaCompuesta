#ifndef LISTAORDENADA_H_INCLUDED
#define LISTAORDENADA_H_INCLUDED

#include "ListaSimple.hpp"
template <typename T>
class ListaOrdenada{
public:
    void Agregar(T valor);
    void Eliminar(T valor);
    bool Buscar(T valor) const;
    bool EstaVacia() const;
    void Vaciar();
    void Imprimir() const;
    void ImprimirReversa();
    int ObtenerNumElem() const;
    void MezclarListas(const ListaOrdenada<T> &v);

private:
    ListaDoble<T> lista;
    T ObtenerPrimerValor();
    void EliminarPrimero();
} ;

#include "ListaOrdenada.tpp"


#endif // LISTAORDENADA_H_INCLUDED
