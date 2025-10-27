#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    char nome[500];
    int i, cpf[11];

    setlocale(LC_ALL, "");
    srand(time(NULL));

    printf("Digite um nome fictício:\n");
    fgets(nome, sizeof(nome), stdin);

    for(i = 0; i < 11; i++) {
        cpf[i] = rand() % 10;
    }

    printf("Nome: %s", nome);
    printf("CPF: ");
    for(i = 0; i < 11; i++) {
        printf("%d", cpf[i]);
        if (i == 2 || i == 5){
            printf(".");
        }
        if (i == 8){
         printf("-");
        }
    }

    return 0;
}
