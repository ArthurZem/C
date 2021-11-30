/*
4) Fa�a um algoritmo para ler (pelo teclado) os 25 elementos de um vetor do tipo inteiro e verificar se o mesmo
est� em ordem n�o-decrescente. Crie e utilize um procedimento para preencher o vetor e uma fun��o para a
verica��o. A impress�o da informa��o (se o vetor est� ou n�o em ordem n�o-decrescente) deve ser na fun��o
main. FEITA */

#include <stdio.h>

void preencher(int vetor[25]){
	int i;
	
	printf("Digite os valores do vetor:\n");
	for(i=0;i<25;i++){
		scanf("%d", &vetor[i]);
	}
	
}

int verificar(int vetor[25]){
	int i,cont=0;
	
	for(i=0;i<24;i++){
		if(vetor[i] > vetor[i+1]){
			cont++;
		}
	}
	return cont;
}

int main(){
	int vetor[25], aux=0;
	
	preencher(vetor);
	aux = verificar(vetor);
	if(aux ==0){
		printf("\nO vetor esta em ordem crescente.");
	}
	else{
		printf("\nO vetor esta em ordem nao-crescente.");
	}
	
	return 0;
}
