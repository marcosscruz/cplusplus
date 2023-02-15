#include <iostream>

using namespace std;

struct No
{
    string dados;
    No *ptr_proximo;
};

struct Lista_Ligada
{
    // Dados
    No *ptr_primeiro_no;
    // Operações
    // Inicializar uma lista ligada
    void inicializar_lista()
    {
        ptr_primeiro_no = NULL;
    }

    // Inserir um novo Item
    void inserir_novo_item(string novo_dado)
    {
        // Alocar memória no novo item
        No *ptr_novo_no;
        ptr_novo_no = new No;
        // Guardar o valor recebido no novo item
        ptr_novo_no->dados = novo_dado;
        // Ligar o novo item com o restante da lista
        ptr_novo_no->ptr_proximo = ptr_primeiro_no;
        // Definir o novo nó como o primeiro da lista
        ptr_primeiro_no = ptr_novo_no;
    }

    // Percorrer a lista, imprimindo os valores de cada item
    void imprimir_itens()
    {
        No *ptr_no_atual;
        ptr_no_atual = ptr_primeiro_no;
        while (ptr_no_atual != NULL)
        {
            cout << ptr_no_atual->dados << endl;
            ptr_no_atual = ptr_no_atual->ptr_proximo;
        }
    }

    // Excluir o No do inicio da lista
    void excluir_item_inicio()
    {
        No *ptr_novo_primeiro_no;
        // Verifica se a lista está vazia
        if (ptr_primeiro_no != NULL)
        {
            ptr_novo_primeiro_no = ptr_primeiro_no->ptr_proximo;
            // Liberar o espaço de memória do primeiro nó
            delete ptr_primeiro_no;
            ptr_primeiro_no = ptr_novo_primeiro_no;
        }
    }
};

int main()
{
    return 0;
}