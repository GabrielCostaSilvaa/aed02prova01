#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void entrada3(int *valorCompra, int *valorPago){
    printf("Digite o valor do pagamento: ");
    scanf("%d", valorPago);
    printf("Digite o valor da compra: ");
    scanf("%d", valorCompra);
}

void processamento3(int valorCompra, int valorPago){
    int troco;
    int notas_100;
    int notas_10;
    int notas_1;

    if(valorPago<valorCompra){
        printf("Pagamento Negado");
    }
    else{
        troco = valorPago-valorCompra;
        printf("O troco e de %d\n", troco);
        notas_100 = troco/100;
        troco = troco % 100;
        notas_10 = troco/10;
        troco = troco%10;
        notas_1 = troco/1;
        printf("%d notas de 100, %d notas de 10 e %d notas de 1", notas_100, notas_10, notas_1);
    }
}

void questao03(void){
    int valorPago;
    int valorCompra;

    entrada3(&valorCompra,&valorPago);
    processamento3(valorCompra,valorPago);
}
