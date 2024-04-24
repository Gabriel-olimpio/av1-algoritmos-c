#include <stdio.h>

/*
Uma loja utiliza o Código V para compras à vista e o código P para compras a prazo. Faça um
algoritmo que receba o código e o valor de 20 transações. É obrigatório o uso de uma estrutura de
repetição. Calcule e mostre:
• O valor total das compras à vista
• O valor total das compras a prazo
• O valor total das compras efetuadas
*/

int main(){
    int codigo, i;
    float valor_compra_v, valor_compra_p, total_avista, total_aprazo, total;


    for (i = 1; i <= 20; i++){

        printf("Codigo V (digite 1) Codigo P (digite 2): ");
        scanf("%d", &codigo);

        

        if (codigo == 1){

            printf("Digite o valor da compra: ");
            scanf("%f", &valor_compra_v);
            total_avista = valor_compra_v + total_avista;

        } else if (codigo == 2){

            printf("Digite o valor da compra: ");
            scanf("%f", &valor_compra_p);
            total_aprazo = valor_compra_p + total_aprazo;

        }

    }
    total = total_avista + total_aprazo;
    printf("Total a vista: R$ %.2f \nTotal a prazo: R$ %.2f \nTotal de compras: R$ %.2f ", total_avista, total_aprazo, total);

}