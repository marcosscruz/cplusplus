// Segue o paradigma da divisão e conquista
// Complexidade: Melhor caso = Caso médio = Pior caso: O(n log n)
#include <iostream>
#define TMN 10

using namespace std;

void intercala(int vet[], int inicio, int meio, int fim);
void mergesort(int vet[], int incio, int fim);

int main()
{
    int vet[TMN] = {9, 4, 7, 2, 5, 1, 0, 8, 3, 6};

    cout << "Vetor desordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }

    mergesort(vet, 0, TMN - 1);

    cout << "\nVetor ordenado: ";
    for (int i = 0; i < TMN; i++)
    {
        cout << vet[i] << " ";
    }

    return 0;
}

void intercala(int vet[], int inicio, int meio, int fim)
{
    int *vetaux = new int[fim + 1];
    int i = inicio;
    int a = inicio;
    int b = meio + 1;

    while (a <= meio && b <= fim)
    {
        if (vet[a] < vet[b])
        {
            vetaux[i] = vet[a];
            a++;
        }
        else
        {
            vetaux[i] = vet[b];
            b++;
        }
        i++;
    }
    while (a <= meio)
    {
        vetaux[i] = vet[a];
        i++;
        a++;
    }
    while (b <= fim)
    {
        vetaux[i] = vet[b];
        i++;
        b++;
    }
    for (i = inicio; i <= fim; i++)
    {
        vet[i] = vetaux[i];
    }
    delete[] vetaux;
}

void mergesort(int vet[], int inicio, int fim)
{
    int meio;
    if (inicio < fim)
    {
        meio = (inicio + fim) / 2;
        mergesort(vet, inicio, meio);
        mergesort(vet, meio + 1, fim);
        intercala(vet, inicio, meio, fim);
    }
}