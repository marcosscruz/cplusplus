#include <iostream>

using namespace std;

void desenha_padrao(int num_linhas)
{

    for (int i = 0; i < num_linhas; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
}

int main()
{
    desenha_padrao(7);

    return 0;
}