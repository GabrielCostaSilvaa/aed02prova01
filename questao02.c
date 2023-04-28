#include <stdio.h>
#include <stdlib.h>

#include "questao02.h"

void entrada(float *salario){

    printf("Digite o salario: ");
    scanf("%f", salario);

}

void processamento(float salario, float *salarioLiquido){
    *salarioLiquido = (salario<2000.0) ? salario - (salario*0.1) : salario - (salario *0.2);
}

void questao02(void){
    float salario;
    float salarioLiquido;

    entrada(&salario);
    processamento(salario, &salarioLiquido);
    printf("Salario: %f", salarioLiquido);
}

