#include <iostream>
#include <locale>

using namespace std;

struct No
{
    string item;
    string quantidade;
    No *ptr_prx_item;
    No *ptr_prx_quantidade;
};

struct ListaCompras
{
    No *ptr_prim_item;
    No *ptr_prim_quantidade;

    void inicializar_lista()
    {
        ptr_prim_item = NULL;
        ptr_prim_quantidade = NULL;
    }

    void adicionar(string novo_item, string novo_quantia)
    {
        No *ptr_novo_item;
        ptr_novo_item = new No;

        No *ptr_novo_quantia;
        ptr_novo_quantia = new No;

        ptr_novo_item->item = novo_item;
        ptr_novo_item->ptr_prx_item = ptr_prim_item;
        ptr_prim_item = ptr_novo_item;

        ptr_novo_quantia->quantidade = novo_quantia;
        ptr_novo_quantia->ptr_prx_quantidade = ptr_prim_quantidade;
        ptr_prim_quantidade = ptr_novo_quantia;
    }

    void imprimir_itens()
    {
        No *ptr_item_atual;
        No *ptr_quantia_atual;

        ptr_item_atual = ptr_prim_item;
        ptr_quantia_atual = ptr_prim_quantidade;

        if (ptr_item_atual == NULL && ptr_quantia_atual == NULL)
        {
            cout << "\nLISTA VAZIA!" << endl;
        }

        while (ptr_item_atual != NULL || ptr_quantia_atual != NULL)
        {
            cout << "ITEM: " << ptr_item_atual->item << "\t"
                 << "QUANTIDADE: " << ptr_quantia_atual->quantidade << endl;

            ptr_item_atual = ptr_item_atual->ptr_prx_item;
            ptr_quantia_atual = ptr_quantia_atual->ptr_prx_quantidade;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int parada;
    string item, quantidade;
    ListaCompras lista;

    lista.inicializar_lista();
    lista.imprimir_itens();

    cout << endl;
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

    cout << "\n====Lista de Compras====" << endl;
    lista.imprimir_itens();

    return 0;
}