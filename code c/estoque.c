#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {

    Produto estoque[MAX_PRODUTOS];
    int totalProdutos = 0;
    int opcao;

    do {

        printf("\n========= SISTEMA DE ESTOQUE =========\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Listar Produtos\n");
        printf("3. Salvar Dados\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {

            case 1:

                if(totalProdutos >= MAX_PRODUTOS) {
                    printf("Limite de produtos atingido!\n");
                    break;
                }

                printf("Digite o nome do produto: ");
                fgets(estoque[totalProdutos].nome, 50, stdin);

                estoque[totalProdutos].nome[
                    strcspn(estoque[totalProdutos].nome, "\n")
                ] = '\0';

                printf("Digite o preco do produto: ");
                scanf("%f", &estoque[totalProdutos].preco);

                printf("Digite a quantidade do produto: ");
                scanf("%d", &estoque[totalProdutos].quantidade);

                getchar();

                totalProdutos++;

                printf("Produto cadastrado com sucesso!\n");

                break;

            case 2:

                if(totalProdutos == 0) {
                    printf("Nenhum produto cadastrado!\n");
                }
                else {

                    float valorEstoque = 0;

                    printf("\n========= PRODUTOS CADASTRADOS =========\n");

                    for(int i = 0; i < totalProdutos; i++) {

                        float valorProduto =
                            estoque[i].preco *
                            estoque[i].quantidade;

                        printf("\nProduto %d\n", i + 1);
                        printf("Nome: %s\n", estoque[i].nome);
                        printf("Preco Unitario: R$ %.2f\n",
                               estoque[i].preco);
                        printf("Quantidade: %d\n",
                               estoque[i].quantidade);
                        printf("Valor Total: R$ %.2f\n",
                               valorProduto);

                        printf("-----------------------------------\n");

                        valorEstoque += valorProduto;
                    }

                    printf("\nValor Total em Estoque: R$ %.2f\n",
                           valorEstoque);
                }

                break;

            case 3: {

                FILE *arquivo = fopen("estoque.txt", "w");

                if(arquivo == NULL) {
                    printf("Erro ao abrir o arquivo!\n");
                    break;
                }

                for(int i = 0; i < totalProdutos; i++) {

                    fprintf(
                        arquivo,
                        "%s;%d;%.2f\n",
                        estoque[i].nome,
                        estoque[i].quantidade,
                        estoque[i].preco
                    );
                }

                fclose(arquivo);

                printf("Dados salvos em estoque.txt\n");

                break;
            }

            case 4:
                printf("Saindo do sistema...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 4);

    return 0;
}