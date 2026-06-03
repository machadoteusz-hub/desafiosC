#include <stdio.h>

char tabuleiro[3][3];

void inicializarTabuleiro(){
    for(int i = 0; i < 3; i++){
        for(int j  = 0; j < 3; j++){
            tabuleiro[i][j] = ' ';
        }
    }
}

void Exibir(){
    printf(" %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
}

int verificarVitoria(char jogador){

    // Verifica linhas
    for(int i = 0; i < 3; i++){
        if(tabuleiro[i][0] == jogador &&
           tabuleiro[i][1] == jogador &&
           tabuleiro[i][2] == jogador){
            return 1;
        }
    }

    // Verifica colunas
    for(int i = 0; i < 3; i++){
        if(tabuleiro[0][i] == jogador &&
           tabuleiro[1][i] == jogador &&
           tabuleiro[2][i] == jogador){
            return 1;
        }
    }

    // Diagonal principal
    if(tabuleiro[0][0] == jogador &&
       tabuleiro[1][1] == jogador &&
       tabuleiro[2][2] == jogador){
        return 1;
    }

    // Diagonal secundária
    if(tabuleiro[0][2] == jogador &&
       tabuleiro[1][1] == jogador &&
       tabuleiro[2][0] == jogador){
        return 1;
    }

    return 0;
}
int main(){
    char jogadorAtual = 'X';
    int linha, coluna;
    inicializarTabuleiro();

    for(int i = 0; i < 9; i++){
        Exibir();
        printf("Jogador %c,, digite a linha (0-2) e a coluna (0-2) para jogar: ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);
        if(tabuleiro[linha][coluna] == ' '){
            tabuleiro[linha][coluna] = jogadorAtual;
        } else {
            printf("Posição inválida! Tente novamente.\n");
            i--; // Decrementa i para repetir a jogada
            continue;
        }
        if(verificarVitoria(jogadorAtual)){
            Exibir();
            printf("Jogador %c venceu!\n", jogadorAtual);
            return 0;
        }
        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }
    Exibir();
    printf("O jogo terminou em empate!\n");
    return 0;
}