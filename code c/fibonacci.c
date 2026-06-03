#include <stdio.h>

int main(){
   int n, i;
   int a = 0, b = 1, proximo;
    printf("Quantos termos desejar mostrar?");
    scanf("%d", &n);
    printf("Sequência de Fibonacci: ");

    for(i = 0; i < n; i++){
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }
        
     printf("%d ", proximo); 
     return 0;
    }
        
      