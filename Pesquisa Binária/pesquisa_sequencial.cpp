// Pior caso: quando a chave esta na ultima posição
// Complexidade: O(n)
#include <iostream>

using namespace std;

int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int chave, posi;

    cout << "Chave a ser procurada: ";
    cin >> chave;

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == chave)
        {
            posi = i;
        }
    }
    cout << "Posicao da chave pesquisada: " << posi << endl;

    return 0;
}