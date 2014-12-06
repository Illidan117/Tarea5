#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"
using namespace std;


template <typename Tipo>
class Lista
{
public:
    Nodo<Tipo>* inicio;

    Lista()
    {
        inicio = NULL;
    }

    void imprimir()
    {
        for(Nodo<Tipo>* temp = inicio;
            temp!=NULL;
            temp = temp->sig)
        {
            cout<<temp->num<<endl;
        }
    }

    void agregarAlInicio(Tipo valor_nuevo)
    {
        Nodo<Tipo> *nuevo = new Nodo<Tipo>(valor_nuevo);

        if(inicio == NULL)
        {
            inicio = nuevo;
        }else
        {
            nuevo->sig = inicio;
            inicio = nuevo;
        }
    }

    void agregarAlFinal(Tipo valor_nuevo)
    {
        Nodo<Tipo> *nuevo = new Nodo<Tipo>(valor_nuevo);

        if(inicio == NULL)
        {
            inicio = nuevo;
        }else
        {
            Nodo<Tipo>*temp = inicio;
            while(temp->sig !=NULL)
            {
                temp=temp->sig;
            }
            temp->sig = nuevo;
        }
    }

    void borrar(Tipo valor_a_borrar)
    {
        if(inicio->num == valor_a_borrar)
        {
            Nodo<Tipo>* borrar = inicio;
            inicio = inicio->sig;
            delete borrar;
        }else
        {
            Nodo<Tipo>* temp = inicio;
            while(temp->sig->num!=valor_a_borrar)
            {
                temp=temp->sig;
                if(temp->sig==NULL)
                    return;
            }
            Nodo<Tipo>* borrar = temp->sig;
            temp->sig = temp->sig->sig;
            delete temp->sig;
        }
    }

    //Devuelve true si la lista esta vacia, de lo contrario devuelve false
    bool estaVacia()
    {
        if(inicio==NULL){ //si inicio es NULL
            return true; //devuelve true
        }
        else {
            return false; //de otra manera, devuelve false
        }

    }

    //Devuelve el valor almacenado en el primer nodo de la lista
    Tipo obtenerPrimerValor()
    {
        return inicio->valor; //simplemente se regresa el primer valor en inicio
    }

    //Devuelve el valor almacenado en el ultimo nodo de la lista
    Tipo obtenerUltimoValor()
    {
        Nodo<Tipo>*temp = inicio; //usando el mismo codigo de agregar al final para recorrer la lista hasta el final
        while(temp->sig!=NULL)    //el ciclo recorre la lista
            {
                temp=temp->sig;
            }
            return temp->valor; //una vez que nos ubicamos al final de la lista, devolvemos el ultimo valor.
    }

    //Devuelve el valor mayor almacenado en la lista
    Tipo obtenerMayor()
    {
        //Para este ejercicio use de base la tarea 3, ya lo unico que hize fue acomodar las distintas variables
        //el procedimiento se conserva.
        Nodo<Tipo>*acumulador = inicio;  //se declara una variable donde se guardara el valor obtenido para compararlo con la variable mayor
        int big = -9999;          //se declara la variable big con un valor bajo para su comparasion y consecuente reemplazo por un valor mayor
        while(acumulador!=NULL){ //el ciclo while se detiene mientras el acumulador sea distinto de NULL
            if(big<acumulador->valor){ //si la variable big es menor que el acumulador cuyo valor es definido por valor
                big = acumulador->valor; //big absorbe el valor del acumulador para luego compararlo con el siguiente valor
            }
            acumulador=acumulador->sig; //el acumulador pasa al siguiente valor
        }
        return big; //retorna la variable big una vez se ha determinado el mayor
    }
};
#endif // LISTA_H
