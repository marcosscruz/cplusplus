#include <iostream>

using namespace std;

int fibonacci_rec(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else if (n > 2)
    {
        return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
    }
}

int main()
{
    int num, fibo;

    cout << "Entre com um valor: ";
    cin >> num;

    fibo = fibonacci_rec(num);

    cout << "Fibonacci: " << fibo << endl;

    return 0;
}