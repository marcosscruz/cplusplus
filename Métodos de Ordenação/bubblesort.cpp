// Complexidade: melhor caso = pior caso = caso médio = O(n^2)
#include <iostream>
#define TMN 10

using namespace std;

void bubblesort(int vet[], int tamanho);

int main()
{
    int vet[TMN] = {9, 3, 6, 1, 8, 0, 5, 2, 7, 4};

    cout << "Vetor desordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }
    bubblesort(vet, TMN);
    cout << "\nVetor ordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }
}

void bubblesort(int vet[], int tamanho)
{
    int aux, troca;
    for (int i = 0; i < tamanho - 1; i++)
    {
        troca = 0;
        for (int j = 1; j < tamanho - i; j++)
        {
            if (vet[j] < vet[j - 1])
            {
                aux = vet[j];
                vet[j] = vet[j - 1];
                vet[j - 1] = aux;
                troca = 1;
            }
        }
        if (troca == 0)
        {
            break;
        }
    }
}