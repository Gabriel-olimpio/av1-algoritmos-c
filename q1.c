#include <stdio.h>

/*
Pergunte a João qual seu salário. Pergunte a ele também qual o valor da conta de energia
elétrica que ele precisa pagar. Como a conta está atrasada, João terá de pagar multa de 15%. Faça um
algoritmo que calcule e mostre quanto restará do salário do João.
*/

int main(){
    float salario, conta_energia, multa= 0.15, restante;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da conta de energia ");
    scanf("%f", &conta_energia);

    

    restante = salario - (conta_energia*multa + conta_energia);

    printf("Apos pagar a conta de energia, sobrou: R$ %.2f ", restante);
}