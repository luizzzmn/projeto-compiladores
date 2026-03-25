#include <stdio.h>

int main() {
    int n, i;
    int a = 0;
    unsigned long long f = 1;
    int *b = &a;

    printf("Digite um numero: ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 0) {
        printf("Erro: Numero negativo.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            f *= i;
        }
        printf("Fatorial de %d = %llu\n", n, f);
    }

    return 0;
}