#include <iostream>
#include "ListaOrdenada.h"
using namespace std;
/**

 * \file main.cpp

 * \author Flor Machado y Elias Peregrina

 * \date 13/02/2025

 */
int main()
{
    try{
        ListaOrdenada<int> lista1, lista2;
        for (int i = 5; i > -5 ; --i ){
            lista1.Agregar(i);
        }
        lista1.Imprimir();

        for (int i = 10; i > 0 ; --i ){
            lista2.Agregar(i);
        }
        lista2.Imprimir();

        lista1.MezclarListas(lista2);
        lista1.Imprimir();

    } catch (const char * mensaje){
        cerr<< mensaje << endl;
    }
    return 0;
}
