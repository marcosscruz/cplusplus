// o seekg é usado para reposicionar o cursor em um fluxo entrada para um arquivo
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream f_saida;

    f_saida.open("texto.txt", ios::in);
    f_saida.seekp(0);
    f_saida.put('x');
    f_saida.close();

    cout << "Arquivo Salvo" << endl;

    return 0;
}