#include <locale.h>
#include <iostream>
#include <math.h>
#define TMN 5

using namespace std;

float variancia(float valores[TMN], float media)
{
    float aux = 0;
    for (int i = 0; i < TMN; i++)
    {
        aux = aux + pow(valores[i] - media, 2);
    }
    return aux;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float val[TMN], me = 0, var = 0, ds = 0;

    cout << "Entre com os valores: " << endl;
    for (int i = 0; i < TMN; i++)
    {
        cin >> val[i];
        me += val[i];
    }

    me = me / TMN;
    var = variancia(val, me);
    ds = sqrt(var);

    cout << "Media: " << me << endl;
    cout << "Desvio Padrão: " << ds << endl;
    cout << "Variancia: " << var << endl;

    return 0;
}