#include <string.h>
#include <stdio.h>

int main(){
    char usuario[] = "admin";
    char password[] = "1234";

    char inputAdmin[20];
    char inputPassword[20];

    printf("Digite o nome de usuário: ");
    scanf("%s", inputAdmin);
    printf("Digite a senha: ");
    scanf("%s", inputPassword);

    if(strcmp(usuario, inputAdmin) == 0 && strcmp(password, inputPassword) == 0){
        printf("Login bem-sucedido!\n");
    } else {
        printf("Login falhou. Nome de usuário ou senha incorretos.\n");
    }
    return 0;
}