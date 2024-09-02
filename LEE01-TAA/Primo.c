#include <stdio.h>
#include <math.h>

int primo (unsigned long long int teste){

    int a = 1;
    int raiz = ceil(sqrt(teste));

    if (teste == 1){
        return 0;
    }
    if (teste == 2){
        return 1;
    }
    if (teste % 2 == 0){
        return 0;
    }

    for (int i = 3; i <= raiz; i += 2){
        if(teste % i == 0){
            a = 0;
            break;
        }
    }

    return a;
}

int main (void){

    int n;
    scanf("%i", &n);

    unsigned long long int testePrimo[n];

    for (int i = 0; i < n; i++){
        scanf("%llu", &testePrimo[i]);
    }

    for (int i = 0; i < n; i++){
        int resultado = primo(testePrimo[i]);
        if ( resultado == 1 ){
            printf("o numero %llu eh primo\n", testePrimo[i]);
        } else {
            printf("o numero %llu nao eh primo\n", testePrimo[i]);
        }
    }

    return 0;
}