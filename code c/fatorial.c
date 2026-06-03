#include <stdio.h>

int main(){
    double numero, fatorial = 1.0;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%lf", &numero);

    if(numero < 0){
        printf("Fatorial não é definido para números negativos.\n");
    }else if(numero == 0 || numero == 1){
        printf("O fatorial de %.0lf é 1.\n", numero);
    }else{
        for(int i = 2; i <= numero; i++){
            fatorial *= i;
        }
        printf("O fatorial de %.0lf é %.0lf.\n", numero, fatorial);
    }
}