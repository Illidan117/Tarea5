#include "Evaluador.h"



void evaluar()
{
    float nota = 0;

    Lista<int> l0;

    Lista<char> l1;
    l1.agregarAlFinal('a');
    l1.agregarAlFinal('b');
    l1.agregarAlFinal('c');

    Lista<int> l2;
    l2.agregarAlFinal(1);
    l2.agregarAlFinal(2);
    l2.agregarAlFinal(3);
    l2.agregarAlFinal(4);
    l2.agregarAlFinal(5);

    Lista<string> l3;
    l3.agregarAlFinal("test");

    cout<<"estaVacia:\t\t";
    if(l0.estaVacia() && !l1.estaVacia() && !l2.estaVacia() && !l3.estaVacia())
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"obtenerPrimerValor:\t";
    if(l1.obtenerPrimerValor()== 'a'
        && l2.obtenerPrimerValor()== 1
        && l3.obtenerPrimerValor()== "test"
        )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"obtenerUltimoValor:\t";
    if(l1.obtenerUltimoValor()== 'c'
        && l2.obtenerUltimoValor()== 5
        && l3.obtenerUltimoValor()== "test"
        )
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"obtenerMayor:\t\t";
    if(l1.obtenerMayor()== 'c'
        && l2.obtenerMayor()== 5
        )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/7"<<endl;
}
