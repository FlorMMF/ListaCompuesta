template <typename T>
void ListaOrdenada<T>::Agregar(T valor){
    if(EstaVacia()){
        lista.AgregarAlInicio(valor);
        return;
    }

    int NumElem=lista.ConocerNumElem();

    for(int i=0; i<NumElem; ++i){
        if(lista[i]>valor){
            lista.AgregrarEnPosicion(valor,i);
            return;
        }
    }

    lista.AgregarAlFinal(valor);
}

template <typename T>
void ListaOrdenada<T>::Eliminar(T valor){
    lista.EliminarValor(valor);
}

template <typename T>
bool ListaOrdenada<T>::Buscar(T valor) const{
    return lista.Buscar(valor);
}

template <typename T>
bool ListaOrdenada<T>::EstaVacia() const{
    return lista.EstaVacia();
}

template <typename T>
void ListaOrdenada<T>::Vaciar(){
    lista.Vaciar();
}

template <typename T>
void ListaOrdenada<T>::Imprimir() const{
    lista.Imprimir();
}

template <typename T>
void ListaOrdenada<T>::ImprimirReversa(){
    lista.ImprimirReversa();
}

template <typename T>
int ListaOrdenada<T>::ObtenerNumElem() const{
    return lista.ConocerNumElem();
}

template <typename T>
void ListaOrdenada<T>::MezclarListas(const ListaOrdenada<T> &v){
    for(int i = 0, t = v.ObtenerNumElem(); i < t; ++i){
        lista.Agregar(v.ObtenerPrimerValor());
        v.EliminarPrimero();
    }
}


template <typename T>
T ListaOrdenada<T>::ObtenerPrimerValor(){
    return lista.ObtenerPrimero();
}

template <typename T>
void ListaOrdenada<T>::EliminarPrimero(){
    lista.EliminarAlInicio();
}
