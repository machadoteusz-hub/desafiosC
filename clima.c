#include <stdio.h>

int main(){
   float temperatura, umidadeRelativa;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);
    printf("Digite a umidade relativa do ar (em porcentagem): ");
    scanf("%f", &umidadeRelativa);
    if(temperatura > 30 && umidadeRelativa > 70){
        printf("O clima está quente e úmido.\n");
    }else if(temperatura > 30 && umidadeRelativa <= 70){
        printf("O clima está quente e seco.\n");
    }else if(temperatura <= 30 && umidadeRelativa > 70){
        printf("O clima está fresco e úmido.\n");
    }else{
        printf("O clima está fresco e seco.\n");
    }
    return 0;
}