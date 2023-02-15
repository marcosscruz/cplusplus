// Segue o paradigma da divisão e conquista
// Sua complxidade na forma iterativa: O(log n)
#include <iostream>
#include <locale.h>
#define TMN 10

using namespace std;

int pesquisa_bin_rec(int vetor[], int chave, int inicio, int fim)
{
    int meio = inicio + (fim - inicio) / 2;

    if (vetor[meio] == chave)
    {
        return meio;
    }
    else if (vetor[meio] < chave)
    {
        return pesquisa_bin_rec(vetor, chave, meio + 1, fim);
    }
    else
    {
        return pesquisa_bin_rec(vetor, chave, inicio, meio - 1);
    }
    return -1;
}

int pesquisa_bin(int vetor[], int chave, int tamanho)
{
    int meio, fim, inicio;

    inicio = 0;
    fim = tamanho - 1;

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;

        if (vetor[meio] == chave)
        {
            return meio;
        }
        else if (vetor[meio] < chave)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }
    return -1;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[TMN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int chave;

    cout << "Numero a ser pesquisado: ";
    cin >> chave;

    // cout << "\nPosição da chave: " << pesquisa_bin_rec(vetor, chave, 0, TMN - 1) << endl;
    cout << "\nPosição da chave: " << pesquisa_bin(vetor, chave, TMN) << endl;

    return 0;
}