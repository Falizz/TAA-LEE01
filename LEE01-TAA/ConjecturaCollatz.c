#include <stdio.h>

int main(void){

    unsigned long long int n;
    scanf("%llu", &n);
    printf("%llu", n);

    while (n != 1){
        if (n % 2 == 0){
            n = n / 2;
        } else {
            n = (n * 3) + 1;
        }
        printf(" %llu", n);
    }

    return 0;
}