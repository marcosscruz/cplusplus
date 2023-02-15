#include <iostream>

using namespace std;

int potencia_rec(int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else if (exp > 0)
    {
        return 2 * potencia_rec(exp - 1);
    }
}

int main()
{
    int exp, pot = 0;

    cout << "Entre com um expoente: ";
    cin >> exp;

    pot = potencia_rec(exp);

    cout << "Resultado de 2^" << exp << ": " << pot << endl;

    return 0;
}