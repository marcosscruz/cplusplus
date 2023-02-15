#include <iostream>

using namespace std;

int main()
{
    int num1 = 89, num2 = 144, aux;
    cout << "Sequencia a partir de 89: " << endl;
    for (int i = 0; i < 10; i++)
    {
        aux = num1 + num2;
        cout << aux << ", ";

        num1 = num2;
        num2 = aux;
        aux = 0;
    }

    return 0;
}