#include <stdio.h>

int main(){
    float medias[5] = {7.5, 8.0, 6.5, 9.0, 7.0};
    int i, j, temp;
    printf("Médias dos alunos:\n");
    for(i = 0; i < 5; i++){
        // Ordenação das médias em ordem decrescente usando o método de bolha
        for(j = 0; j < 5 - 1 - i; j++){
        if(medias[j] < medias[j + 1]){
            // Troca as médias
            float temp = medias [j];
            //medias[j] recebe o valor da próxima média
            medias [j] = medias[j + 1];
            //medias[j + 1] recebe o valor da média temporária  
            medias[j + 1] = temp;
        }
    } 
}

printf("Médias em ordem decrescente:\n");
for(i = 0; i < 5; i++){
    printf("%.1f ", medias[i]);
}

printf("\n");
return 0;
}