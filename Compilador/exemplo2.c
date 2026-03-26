#include <stdio.h>
#include <stdlib.h>
#define MAX_VAL 100
#define MACRO_FUNCAO(x) ((x) * (x))

#ifdef MAX_VAL
    #undef MAX_VAL
    #define MAX_VAL 200
#endif

// Definição de tipos customizados
typedef unsigned long int ulong;
typedef void (FuncaoPtr)(int, char);

// Enumerações
enum DiasDaSemana { 
    SEG = 1, TER, QUA, QUI, SEX, SAB, DOM 
};

// Unions
union DadoGenerico {
    int inteiro;
    float flutuante;
    char caractere;
};

// Estruturas (Structs) com bit-fields e ponteiros
struct NodoLista {
    volatile int valor;
    unsigned int flag_ativo : 1; // Bit-field
    unsigned int permissao : 3;
    struct NodoListaproximo;
    union DadoGenerico payload;
};

// Variáveis globais e qualificadores de tipo
extern int variavel_externa;
static const double constante_pi = 3.141592653589793;
volatile char registrador_hardware = 'A';

// Protótipos de funções
void funcao_vazia(void);
inline int soma_inline(int a, int b);
int funcao_com_args_variaveis(const char formato, ...);

/ Função Principal /
int main(int argc, charargv[]) {
    // Classes de armazenamento e tipos de dados
    auto short contador_curto = 0;
    register int i, j;
    long double numero_cientifico = 1.5e-4L;
    signed char caractere_sinalizado = -120;

    // Literais numéricos e strings
    unsigned int hexa = 0xDEADBEEF;
    int octal = 0755;
    float float_simples = 3.14f;
    char string_literal = "Teste de string com "escape" e \n quebra de linha \t tabulação.";
    char caractere_escape = '\'';

    // Inicialização de Struct
    struct NodoLista meu_nodo = { 
        .valor = 42, 
        .flag_ativo = 1, 
        .proximo = NULL 
    };

    // Operadores Aritméticos, Atribuição Composta e sizeof
    contador_curto += (hexa % 10) soma_inline(2, 3) / sizeof(struct NodoLista);
    contador_curto -= ++octal;
caractere_sinalizado = caractere_sinalizado--;

    // Operadores Lógicos, Relacionais e Bitwise
    if ((contador_curto > 0 && contador_curto <= 100) || !registrador_hardware) {
        hexa = (hexa << 2) | (octal >> 1);
        hexa ^= 0xFF;
        hexa &= ~0x01;
    } else if (constante_pi != 3.0) {
        // Operador Ternário
        contador_curto = (hexa == 0) ? 1 : -1;
    } else {
        goto tratamento_erro;
    }

    // Estrutura de Seleção (Switch/Case)
    switch (meu_nodo.valor) {
        case 10:
            meu_nodo.valor = 2;
            break;
        case 42:
        case 43:
            meu_nodo.payload.inteiro = 99;
            / Fallthrough proposital /
        default:
            meu_nodo.payload.flutuante = 1.0f;
            break;
    }

    // Estruturas de Repetição (For, While, Do-While)
    for (i = 0, j = 10; i < j; i++, j--) {
        if (i == 5) {
            continue;
        }
        if (j == 2) {
            break;
        }
    }

    while (contador_curto < 50) {
        contador_curto++;
    }

    do {
        contador_curto--;
    } while (contador_curto > 0);

    // Ponteiros, Referência e Desreferência
    intptr_inteiro = &contador_curto;
    int ptr_ptr = &ptr_inteiro;
    ptr_ptr = 100;

    // Acesso a membros de struct por ponteiro
    struct NodoLista *ptr_nodo = &meu_nodo;
    ptr_nodo->valor = 50;

    return 0;

tratamento_erro:
    return -1;
}

// Definição de função inline
inline int soma_inline(int a, int b) {
    return a + b;
}