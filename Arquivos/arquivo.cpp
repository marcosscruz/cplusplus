#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    string text;
    ofstream f_saida;

    cout << "Nome completo: ";
    getline(cin, text);

    f_saida.open("texto.txt", ios::app | ios::in); // app usado quando desejamos anexar algum conteúdo no final do arquivo
    f_saida << text;
    f_saida.close();

    cout << "Arquivo Salvo" << endl;

    ifstream f_entrada;

    f_entrada.open("texto.txt");
    getline(f_entrada, text);
    f_entrada.close();

    cout << "Conteudo do arquivo: " << text << " " << endl;

    return 0;
}