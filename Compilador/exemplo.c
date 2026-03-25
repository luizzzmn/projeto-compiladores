#include <stdio.h>
#include <stdlib.h>

// 1. Variaveis Globais
int variavel_global = 100;
unsigned long contagem;

// 2. Declaracao de funcao com parametros e ponteiros
void processar_dados(int *ponteiro, int valor) {
    // 3. Operadores logicos (>=, &&) e unarios (!)
    if (valor >= 10 && !0) {
        // 4. Atribuicao com ponteiro e operador composto (+=)
        *ponteiro += 5;
    } else {
        *ponteiro -= 1;
    }
    return;
}

// 5. Funcao principal
int main() {
    // 6. Declaracoes locais
    int x = 0;
    int y;
    unsigned long long resultado = 1;
    
    // 7. Manipulacao de enderecos de memoria (&)
    int *ptr = &x;

    // 8. Laco while com operadores compostos (||, !=, <)
    while (x < 20 || x != 100) {
        // 9. Incremento (++)
        x++;
        
        if (x == 5) {
            // 10. Continue
            continue;
        }
        
        if (x > 15) {
            // 11. Break
            break;
        }
        
        // 12. Chamada de funcao
        processar_dados(ptr, x);
    }

    // 13. Laco For e decremento (--)
    for (y = 10; y >= 0; y--) {
        resultado = resultado * 2;
        resultado /= 1;
    }

    // 14. Expressao matematica complexa com parenteses
    y = (x + 5) * 2 - 10 / 2;

    return 0;
}