/* 

cabeçalho ou Header

#include <stdio.h>  - Biblioteca necssária para utilizar " printf "

int- variavel simples , variaveis do tipo inteiro se encaixam nessa 
variavel( números interios).

mais de uma variavel pode ser feita na mesma linha se forem do mesmo tipo.

O programa abaixo é um programa onde identifica separa e informa 
o maior, menor e um contador para saber a difenrença entre os números.

pode ser utilizado em calculos e outros códigos.
*/

#include <stdio.h> 

int main(){

    int contador = 0;
    int maior, menor;
    int primeiro , segundo, seg_primeiro , seg_segundo;



    printf("Digite o primeiro número:\n");
    scanf("%d", &primeiro);

    printf("Digite o segundo número:\n");
    scanf("%d", &segundo);

    if( primeiro!=segundo){
        if(primeiro-segundo>0){
           
            maior=primeiro;
            menor=segundo;

            seg_primeiro=primeiro;
            seg_segundo=segundo;

            while(seg_segundo != seg_primeiro){
                seg_segundo += 1;
                contador += 1;
            }

            printf("O primeiro número (%d) é %d número(s) maior que o  segundo número (%d)\n",maior, contador , menor);


        }else{
            maior=segundo;
            menor=primeiro;

            seg_primeiro=primeiro;
            seg_segundo=segundo;

            while(seg_primeiro != seg_segundo){
               
                seg_primeiro += 1;
                contador += 1;
            }
            
            printf("O primeiro número (%d) é %d número(s) menor que o  segundo número (%d)\n", menor, contador , maior);

        }
    
    }else{

        printf("Os númmeros são iguais.\n ");
    };

    return 0;
    
}
