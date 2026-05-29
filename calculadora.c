#include <stdio.h>

int main(){
    float num1, num2, resultado;
    char operador;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        resultado = num1 / num2;
        break;
    
    default:
        break;
    }
    printf("O resultado é %.2f\n", resultado);

}