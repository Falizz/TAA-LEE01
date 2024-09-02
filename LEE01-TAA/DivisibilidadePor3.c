#include <stdio.h>

int main (void){

    int n = 0;
    while (scanf("%i", &n) && n != -1){

        char numero[n + 1];
        scanf("%s", numero);

        int soma = 0;

        for (int i = 0; i < n; i++){
            soma += numero[i] - '0';
        }

        if (soma % 3 == 0){
            printf("%i sim\n", soma);
        } else {
            printf("%i nao\n", soma);
        }

    }

    return 0;
}