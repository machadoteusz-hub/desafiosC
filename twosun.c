//Dado um array de inteiros nums e um inteiro target, retorne os índices dos dois números de forma que a soma deles seja igual atarget .

//Você pode assumir que cada entrada terá exatamente uma solução e que não poderá usar o mesmo elemento duas vezes.

//Você pode retornar a resposta em qualquer ordem

#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(nums[i] + nums[j] == target && i != j){
                printf("Índices: [%d, %d]\n", i, j);
                return 0;
            }
        }
    }
    return 0;
}