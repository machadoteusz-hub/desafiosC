#include <stdio.h>

int main(){
    int num1, i;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    

    for(i = num1; i >= 1; i--){
        printf("%d\n", i);
    }
}