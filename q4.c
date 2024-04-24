#include <stdio.h>

/*
    Faça um programa que leia e monte dois vetores de números inteiros com 20 números cada
    (é obrigatória a utilização de um vetor e de uma estrutura de repetição para seus preenchimentos). Depois
    de montados gere um terceiro vetor formado pela diferença dos dois vetores lidos, um quarto vetor
    formado pela soma dos dois vetores lidos e por último um quinto vetor formado pela multiplicação dos
    dois vetores lidos.
*/

int main(){
    int v1[5], v2[5], v3[5], v4[5], v5[5], i;

    for(i = 0; i < 5; i++){
        printf("Digite o valor %d do v1: ", i + 1);
        scanf("%d", &v1[i]);
        
        printf("Digite o valor %d do v2: ", i + 1);
        scanf("%d", &v2[i]);
        

        v3[i] = v1[i] - v2[i];
        v4[i] = v1[i] + v2[i];
        v5[i] = v1[i] * v2[i];

    } 

    printf("Vetor 3: (Diferenca): ");
    for(i = 0; i < 5; i++){
        printf("%d ", v3[i]);
    }
    printf("\n");

    printf("Vetor 4 (Soma): ");
    for(i = 0; i < 5; i++){
        printf("%d ", v4[i]);

    }
    printf("\n");

    printf("Vetor 5 (Produto): ");
    for(i = 0; i < 5; i++){
        printf("%d ", v5[i]);
    }

}