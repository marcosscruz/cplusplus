#include <iostream>

using namespace std;

int mdc_rec(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    else if (x % y != 0)
    {
        return mdc_rec(y, x % y);
    }
}

int main()
{
    int x, y, mdc;

    cout << "Entre com um dois numeros inteiros positivos: ";
    cin >> x >> y;

    mdc = mdc_rec(x, y);

    cout << "MDC(" << x << ", " << y << "): " << mdc << endl;

    return 0;
}