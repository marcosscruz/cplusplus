// Algoritmo de ordneçao interna usa a memória principal durante a ordenação.
// Segue o paradigma da divisão e conquista.
// Comlpxidade: Melhor caso = Caso médio: O(n log n)    Pior caso: O(n^2)
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define TMN 10

using namespace std;

void quicksort(int vet[], int inicio, int fim);

int main()
{
    int vet[TMN];

    for (int i = 0; i < TMN; i++)
    {
        vet[i] = rand() % 100;
    }

    cout << "Vetor desordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }

    quicksort(vet, 0, TMN - 1);

    cout << "\nVetor ordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }

    return 0;
}

void quicksort(int vet[], int inicio, int fim)
{
    int aux, i = inicio, j = fim;
    int pivo = (inicio + fim) / 2;

    while (i <= j)
    {
        while (vet[i] < vet[pivo])
        {
            i++;
        }
        while (vet[j] > vet[pivo])
        {
            j--;
        }

        if (i <= j)
        {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++;
            j--;
        }

        if (inicio < j)
        {
            quicksort(vet, inicio, j);
        }
        if (i < fim)
        {
            quicksort(vet, i, fim);
        }
    }
}