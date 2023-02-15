#include <iostream>

using namespace std;

int a = 7;
int b = 3;

int soma()
{
    int soma;
    soma = a + b;
    return soma;
}

int main()
{
    int resultado, a, b;

    a = 5;
    b = 10;

    resultado = soma();

    cout << "Resultado da soma: " << resultado << endl;

    return 0;
}