#include <stdio.h>

int main(){
    int numero = 42; 
    int tentativa;
    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número entre 1 e 100: ");
    scanf("%d", &tentativa);

   while(numero != tentativa){
    // Verifica se a tentativa é menor ou maior que o número
        if(tentativa < numero){
            printf("Muito baixo! Tente novamente: ");
        }else{
            printf("Muito alto! Tente novamente: ");
        }
        scanf("%d", &tentativa);
    }
    printf("Parabéns! Você adivinhou o número!\n");
    return 0;
}