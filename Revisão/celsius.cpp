#include <iostream>

using namespace std;

float fharenheit(float temp);

int main()
{
    float c, f;

    cout << "Temperatura em celsius: ";
    cin >> c;

    f = fharenheit(c);

    cout << "Temperatura covertida em fahrenheit: " << f << endl;

    return 0;
}

float fharenheit(float temp)
{
    return (1.8 * temp) + 32;
}