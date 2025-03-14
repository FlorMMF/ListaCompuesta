#ifndef LISTAORDENADA_H_INCLUDED
#define LISTAORDENADA_H_INCLUDED

#include "ListaSimple.hpp"

/**

 * \file ListaOrdenada.h

 * \author Flor Machado y Elias Peregrina

 * \date 13/02/2025

 */

template <typename T>
class ListaOrdenada{
public:
    /** \brief M&eacute;todo para agregar un elemento de forma ordenada
     *
     *  \param valor T, valor que se agreg&acute; dependiendo de su valor n&uacute;merico en la lista
     *
     *  \return void
     *
     */
    void Agregar(T valor);
    /** \brief M&eacute;todo para eliminar un elemento de la lista
     *
     *  \param valor T, valor que se elimin&acute; de la lista
     *
     *  \return void
     *
     */
    void Eliminar(T valor);
    /** \brief M&eacute;todo para buscar un elemento en la lista
     *
     *  \param valor T, valor que se quiere encontrar en la lista
     *
     *  \return bool, retorna si existe el valor en la lista
     *
     */ 
    bool Buscar(T valor) const;
    /** \brief M&eacute;todo para identificar si la lista est&acute; vacia
     *
     *  \return bool, retorno si la lista  est&acute; vacia
     *
     */ 
    bool EstaVacia() const;
    /** \brief M&eacute;todo que vac&iacute;a la lista
     * 
     *  \return void
     *
     */ 
    void Vaciar();
    /** \brief M&eacute;todo para imprimir una lista
     *
     * \return void
     *
     */
    void Imprimir() const;
    /** \brief M&eacute;todo para imprimir en reversa una lista
     *
     * \return void
     *
     */
    void ImprimirReversa();
    /** \brief M&eacute;todo para obtener el primer valor de la lista doble
     *
     * \return int
     *
     */
    int ObtenerNumElem() ;
    /** \brief M&eacute;todo que mezcla los valores de dos listas
     *
     * \param v ListaOrdenada<T>&, la lista cuyos valores se van a mezclar con otra
     * \return void
     *
     */
    void MezclarListas(ListaOrdenada<T> &v);


private:
    ListaDoble<T> lista;
    /** \brief M&eacute;todo para obtener el primer valor de la lista
     *
     * \return T
     *
     */
    T ObtenerPrimerValor() const ;
    /** \brief M&eacute;todo para eliminar el primer valor de la lista
     *
     * \return void
     *
     */
    void EliminarPrimero();
} ;

#include "ListaOrdenada.tpp"


#endif // LISTAORDENADA_H_INCLUDED
