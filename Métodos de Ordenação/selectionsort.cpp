// Pior caso = Melhor caso = Pior caso: O(n^2)
#include <iostream>
#define TMN 10

using namespace std;

void selectionsort(int vet[], int tamanho);

int main()
{
    int vet[TMN] = {9, 3, 6, 1, 8, 0, 5, 2, 7, 4};

    cout << "Vetor desordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }
    selectionsort(vet, TMN);
    cout << "\nVetor ordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }
}

void selectionsort(int vet[], int tamanho)
{
    int j, min, aux;
    for (int i = 0; i < tamanho - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < tamanho; j++)
        {
            if (vet[j] < vet[min])
            {
                min = j;
            }
        }
        aux = vet[i];
        vet[i] = vet[min];
        vet[min] = aux;
    }
}