#include <stdio.h>#include <stdio.h>

int multiplicar(int valor1, int valor2) {
    return valor1 * valor2;
}

int somar(int valor1 , int valor2) {
    return valor1 + valor2;
}

int dividir(int valor1, int valor2) {
    if (valor2 != 0) {
        return valor1 / valor2;
    } else {
        printf("Erro: divisão por zero!\n");
    }
        return 0;
}

int subtrair(int valor1, int valor2) {
    return valor1 - valor2;
}

int main() {
    int valor1, valor2, resultado;
    char operador;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor:\n");
    scanf("%d", &valor2);

    printf("Escolha dentre os operadores abaixo:\n");
    printf("1 - Adição (+)\n");
    printf("2 - Subtração (-)\n");
    printf("3 - Multiplicação (*)\n");
    printf("4 - Divisão (/)\n");
    scanf(" %c", &operador); // Espaço antes de %c para consumir o caractere de nova linha pendente

    switch (operador) {
        case '1':
            resultado = somar(valor1, valor2);
            printf("O resultado da adição é: %d\n", resultado);
            break;
        case '2':
            resultado = subtrair(valor1, valor2);
            printf("O resultado da subtração é: %d\n", resultado);
            break;
        case '3':
            resultado = multiplicar(valor1, valor2);
            printf("O resultado da multiplicação é: %d\n", resultado);
            break;
        case '4':
            if (valor2 != 0) {
                resultado = dividir(valor1, valor2);
                printf("O resultado da divisão é: %d\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}


