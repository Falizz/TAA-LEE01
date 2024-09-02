#include <stdio.h>

int main(void){

    int n;
    scanf("%i", &n);

    unsigned long long int soma = 0;

    unsigned long long int numerador = (unsigned long long int)n * (n + 1);
    unsigned long long int soma_total = numerador / 2;

    int valor;    
    for (int i = 0; i < n - 1; i++){
        scanf("%i", &valor);
        soma = soma + valor;
    }

    unsigned long long int faltante = soma_total - soma;

    printf("%llu\n", faltante);

    return 0;
}