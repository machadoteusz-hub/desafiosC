#include <stdio.h>

int main(){
    int idade;
    printf("Digite a i: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Você é menor de idade.\n");
    }else if(idade >= 18 && idade <= 60){
        printf("Você é adulto.\n");
    }else{
        printf("Você é idoso.\n");
    }
    return 0;
}