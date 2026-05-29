#include <stdio.h>

int main(){
    int idade;

    printf("Digite a idade: ");
    //usuário digita a idade e o valor é armazenado na variável idade
    scanf("%d", &idade);

    printf("A idade digitada foi: %d\n", idade);

    return 0;
}