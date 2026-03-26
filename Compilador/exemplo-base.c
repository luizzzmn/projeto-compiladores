#include <stdio.h>

// 1. Declaração de função
int processar(int a, float b) {
    // Expressão com operadores aritméticos (+, *) e relacionais (>)
    if ((a + b) > 10.0) { 
        return 1;
    }
    return 0;
}

int main() {
    // 2. Tipos básicos e Atribuições
    char *texto = "Resultado:"; // String
    int i = 0;                   // Inteiro
    float n = 5.5;               // Real

    // 3. Comando de entrada e saída
    printf("Digite um inteiro: ");
    scanf("%d", &i);

    // 4. Chamada de função e Operadores booleanos (&&)
    // Estrutura condicional composta
    if (processar(i, n) == 1 && i < 100) {
        check = true;
        printf("%s Verdadeiro\n", texto);
    } else {
        check = false;
        printf("%s Falso\n", texto);
    }

    // 5. Estrutura condicional simples
    if (check) {
        printf("Sucesso!\n");
    }

    // 6. Um tipo de laço
    for (int j = 0; j < 3; j++) {
        printf("Passo %d\n", j);
    }

    // 7. do while
    do {
        printf("Sucesso!\n");
    } while (1 > 3);

    return 0;
}