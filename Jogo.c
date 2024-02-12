#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    time_t tempo;
    
    srand((unsigned)time(&tempo));
    int certo = rand() % 10;

    printf("ADIVINHA O NÚMERO,\n3 CHANCES DE ACERTAR O NÚMERO\n");

    for(int i = 0; i < 3; i++) {
        int resposta_usuario;
        printf("Chuta ai paizão:\n");
        scanf("%d", &resposta_usuario);
        
        if (resposta_usuario != certo) {
            printf("ERROU Feio errou rude.\n");
            if (resposta_usuario < certo) {
                printf("Chuta um número mais alto ae\n");
            } else {
                printf("Chuta um número mais alto baixoo ae\n");
            }
        } else {
            printf("ACERTOUU SORTUDO VIU \n");
            break; // Encerra o loop se o usuário acertar
        }
    }

    return 0;
}