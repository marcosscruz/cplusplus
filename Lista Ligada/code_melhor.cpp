#include <iostream>
#include <locale>

using namespace std;

struct No
{
    string item;
    int quantidade;
    No *proximo;
};

struct ListaCompras
{
    No *primeiro;

    void inicializar_lista()
    {
        primeiro = NULL;
    }

    void adicionar(string novo_item, int nova_quantidade)
    {
        No *novo_no;
        novo_no = new No;

        novo_no->item = novo_item;
        novo_no->quantidade = nova_quantidade;
        novo_no->proximo = primeiro;
        primeiro = novo_no;
    }

    void imprimir_itens()
    {
        No *atual;

        atual = primeiro;

        if (atual == NULL)
        {
            cout << "\nLISTA VAZIA!" << endl;
            return;
        }

        cout << "\n====Lista de Compras====" << endl;
        while (atual != NULL)
        {
            cout << "ITEM: " << atual->item << "\t"
                 << "QUANTIDADE: " << atual->quantidade << endl;

            atual = atual->proximo;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int parada;
    string item;
    int quantidade;
    ListaCompras lista;

    lista.inicializar_lista();

    do
    {
        cout << "0 - SAIR" << endl;
        cout << "1 - ADICIONAR ITEM" << endl;
        cin >> parada;

        if (parada != 0 && parada != 1)
        {
            cout << "\nOPCAO INVALIDA\n"
                 << endl;
            break;
        }
        else if (parada == 0)
        {
            break;
        }

        cout << "ITEM: ";
        cin >> item;
        cout << "QUANTIDADE: ";
        cin >> quantidade;

        lista.adicionar(item, quantidade);
        cout << endl;
    } while (parada == 1);

    lista.imprimir_itens();

    return 0;
}
