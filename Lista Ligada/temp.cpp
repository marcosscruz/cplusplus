#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "in swap " << a << b;
}

int main()
{
    int x = 10;
    int *ptr = &x;
    int y = *ptr;

    cout << *ptr << endl;
}