#include <stdio.h>

int main() {
    int n = 3;
    int matriz[3][3];

    // Preenchendo a matriz identidade
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if(i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }

        }
    }

    // Exibindo a matriz
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}