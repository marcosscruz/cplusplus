#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int &ref = x;

    // ref = 20;
    cout << x << endl;

    x = 30;
    cout << ref << endl;
}