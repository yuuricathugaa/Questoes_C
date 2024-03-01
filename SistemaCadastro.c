#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTES 2

typedef struct {
    char nome[50];
    char cpf[20];
} Cliente;

void adicionarCliente(Cliente clientes[], int *quantidadeClientes) {
    if (*quantidadeClientes < MAX_CLIENTES) {
        Cliente novoCliente;
        printf("Nome: ");
        scanf("%s", novoCliente.nome);
        printf("CPF: ");
        scanf("%s", novoCliente.cpf);
        
        for (int i = 0; i < *quantidadeClientes; i++) {
            if (strcmp(clientes[i].cpf, novoCliente.cpf) == 0) {
                printf("CPF já cadastrado, refaça o cadastro do cliente com o CPF correto!\n");
                return;
            }
        }
        
        clientes[*quantidadeClientes] = novoCliente;
        (*quantidadeClientes)++;
        printf("Cliente adicionado com sucesso!\n");
    } else {
        printf("Limite de clientes atingido!\n");
    }
}

void listarClientes(Cliente clientes[], int quantidadeClientes) {
    printf("\nListagem de clientes:\n");
    for (int i = 0; i < quantidadeClientes; i++) {
        printf("Cliente %d:\n\n", i+1);
        printf("Nome: %s\n", clientes[i].nome);
        printf("CPF: %s\n", clientes[i].cpf);
        printf("\n");
    }
}

void buscarCliente(Cliente clientes[], int quantidadeClientes, char *cpf) {
    printf("Resultados da busca por \"%s\":\n", cpf);
    int encontrados = 0;
    for (int i = 0; i < quantidadeClientes; i++) {
        if (strcmp(clientes[i].cpf, cpf) == 0) {
            printf("Cliente %d:\n", encontrados+1);
            printf("Nome: %s\n", clientes[i].nome);
            printf("CPF: %s\n", clientes[i].cpf);
            printf("\n");
            encontrados++;
        }
    }
    if (encontrados == 0) {
        printf("Nenhum cliente encontrado com o CPF \"%s\".\n", cpf);
    }
}

int main() {
    Cliente clientes[MAX_CLIENTES];
    int quantidadeClientes = 0;
    int opcao;
    char cpf[20];

    do {
        printf("Menu:\n");
        printf("1. Adicionar Cliente\n");
        printf("2. Listar Clientes\n");
        printf("3. Buscar Cliente\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                adicionarCliente(clientes, &quantidadeClientes);
                break;
            case 2:
                listarClientes(clientes, quantidadeClientes);
                break;
            case 3:
                printf("Digite o CPF do cliente: ");
                scanf("%s", cpf);
                buscarCliente(clientes, quantidadeClientes, cpf);
                break;
            case 4:
                printf("Sistema encerrado!!\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);

    return 0;
}
