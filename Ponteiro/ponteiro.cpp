#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void swap(int &p1, int &p2)
{
    int aux = p1;
    p1 = p2;
    p2 = aux;
}

void incremento(int &v)
{
    v++;
}

void preencher_vet(int vet[])
{
    for (int i = 0; i < 10; i++)
    {
        vet[i] = rand() % 100;
    }
}

int main()
{
    // Crie um programa com uma vari ́avel (numero) do tipo int.
    int a = 10;

    int *ptr; // o *(asterisco) é chamado de operador de indireção
    ptr = &a; // o &('e' comercial) informa o endereço da variavel

    cout << "ptr: " << &a << endl;

    cout << endl;
    int x = 15;
    cout << "ptr de x: " << &x << endl; // endereço de x

    int &refe = x; // refe é uma referencia para x

    refe = 20; // valor de x é alterado para 20
    cout << "x= " << x << endl;

    x = 30;
    cout << "refe: " << refe << endl;

    cout << "\nTroca de valores: ";
    int p1 = 1, p2 = 2;
    cout << p1 << " " << p2 << endl;
    swap(p1, p2); // Troca de valores usando os seus endereços
    cout << p1 << " " << p2 << endl;

    /*int val = 0;
    for(int i=0; i<1000; i++){
        incremento(val);
        cout << val << " ";
    }*/

    cout << endl;
    int numero = 90;
    int *ponterio;

    ponterio = &numero;

    cout << "Numero: " << numero << endl;
    cout << "Ponteiro: " << ponterio << endl;
    cout << "&numero: " << &numero << endl;
    cout << "&ponteiro: " << &ponterio << endl;

    cout << endl; // ponterio apontando para outro ponterio
    int n = 100;
    int *ptr1 = &n;
    int **ptr2 = &ptr1;

    cout << "n= " << n << " ou n= " << *ptr1 << " ou n= " << **ptr2 << endl;
    cout << "\n&n= " << &n << "\nou &n= " << ptr1 << "\nou &n= " << *ptr2 << endl;

    cout << endl;
    int vet[10];
    preencher_vet(vet);
    for (int i = 0; i < 10; i++)
    {
        cout << vet[i] << " ";
    }

    return 0;
}