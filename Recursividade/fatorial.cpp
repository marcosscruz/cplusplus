// Lembrando que não é toda função recursiva que retorna algum valor.
// A função recursiva deve ter pelo menos um caso base, geralmente encerra a chamada recursiva.
// Deve executar o caso base pelo menos uma vez.
// A solução do caso recursivo não é obtido diretamente.
// Cada chamada realizada pela execução de uma função recursiva tem seu próprio
// conjunto de instruções, conjunto de parâmetros e variáveis locais.
#include <iostream>

using namespace std;

int fat_rec(int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n >= 1)
    {
        return n * fat_rec(n - 1);
    }
}

int main()
{
    int num, fat;

    cout << "Insira um valor posito: ";
    cin >> num;

    fat = fat_rec(num);

    cout << "Fatorial de " << num << ": " << fat << endl;

    return 0;
}