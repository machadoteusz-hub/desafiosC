#include <stdio.h>

int main(){
    float num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    double media = (num1 + num2) / 2;
    printf("A média dos números é: %.2f\n", media);
    return 0;
}