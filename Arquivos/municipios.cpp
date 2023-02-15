#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese-brazilian");
    ifstream f_entrada;
    f_entrada.open("lista_municipios.txt");

    string linha, palavra;
    char ch;

    while (f_entrada.eof() != true)
    {
        // f_entrada.get(ch);
        // cout << ch;

        f_entrada >> palavra;
        cout << palavra << " " << endl;

        // getline(f_entrada, linha);
        // cout << linha << endl;
    }
    f_entrada.close();

    return 0;
}