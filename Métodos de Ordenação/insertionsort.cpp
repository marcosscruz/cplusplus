// Complxidade: Caso médio = Pior caso: O(n^2)  Melhor caso: O(n)
#include <iostream>
#define TMN 10

using namespace std;

void insertionsort(int vet[], int tamanho);

int main()
{
    int vet[TMN] = {9, 3, 6, 1, 8, 0, 5, 2, 7, 4};

    cout << "Vetor desordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }
    insertionsort(vet, TMN);
    cout << "\nVetor ordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }
}

void insertionsort(int vet[], int tamanho)
{
    int aux, j;
    for (int i = 1; i < tamanho; i++)
    {
        aux = vet[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (vet[j] > aux)
            {
                vet[j + 1] = vet[j];
            }
            else
            {
                break;
            }
        }
        vet[j + 1] = aux;
    }
}