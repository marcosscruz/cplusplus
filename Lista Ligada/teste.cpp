#include <iostream>

using namespace std;

int i = 0;
int S = 0;
int V[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int main()
{
    for (i = 0; i < 10; i++)
        S += V[i];
    printf("%i", S);
    return 0;
}