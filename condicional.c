#include <stdio.h>

int main(){
    int numero; 
    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("O número é par .\n");
    }else{
        printf("O número é ímpar.\n");
    }

    printf("O número digitado foi: %d\n", numero);
    return 0;
}