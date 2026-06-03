#include <stdio.h>

int main(){
    int vetor [5] = {10, 20, 30, 40, 50};
    int posicao;
    printf("Digite a posição do elemento que deseja acessar (0-4): ");
    scanf("%d", &posicao);

    if(posicao >= 0 && posicao < 5){
        printf("O elemento na posição %d é: %d\n", posicao, vetor[posicao]);
    } else {
        printf("Posição inválida!\n");
    }
    return 0;
}