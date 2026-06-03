#include <stdio.h>

int main(){
   char palavra[] = "Mateus";
   int contadorVogais = 0;

   for(int i = 0; palavra[i] != '\0'; i++){
    char letra = palavra[i];
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
       letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        contadorVogais++;
    }
   }
    printf("A palavra '%s' tem %d vogais.\n", palavra, contadorVogais);

}