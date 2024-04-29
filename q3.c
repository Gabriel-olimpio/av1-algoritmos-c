#include <stdio.h>
#include <stdlib.h>
/*
Leia o salário de 20 funcionários (é obrigatória a utilização de um vetor e de uma estrutura
de repetição para seu preenchimento) e escreva:
a. quantos funcionários recebem mais de R$3.000,00;
b. quanto a empresa gastaria se fosse dar um aumento de 12% aos funcionários que recebem menos
que R$3.000,00.
*/

int main(){
    int i, mais_3000, menos_3000, cont_mais, cont_menos;
    float salario, menos[20], mais[20], gasto_empresa, soma_menos300;
    
    for(i = 0; i <= 19; i++){

        printf("Digite o salario: ");
        scanf("%f", &salario);

        if (salario < 3000){
            menos[i] = salario;
            soma_menos300 += menos[i];
            cont_menos += 1;
        } else {
            mais[i] = salario;
            cont_mais += 1;
        }

    }
    

    gasto_empresa = soma_menos300*0.12 + soma_menos300; // gasto da empresa para dar aumento de 12% aos que ganham menos

    printf("Funcionarios que recebem mais de 3000: %d \n", cont_mais);
    printf("A empresa gastaria R$ %.2f para dar aumento", gasto_empresa);

}