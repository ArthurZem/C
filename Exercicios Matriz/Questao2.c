/* 2) Faça um algoritmo para ler pelo teclado uma matriz 3 x 5 com valores reais e
imprimir quantos valores maiores do que 20 ela possui. Crie e utilize um procedimento
para a leitura da matriz e uma função para fazer o cálculo. A impressão da informação
(quantos valores maiores do que 20) deve ser na função main. FEITA */

#include <stdio.h>

#define linha 7
#define coluna 9

void ler(float mat[linha][coluna]){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("Digite o valor para ser posto no vetor:\n");
			scanf("%f", &mat[i][j]);
		}
	}
	
}

int calculo(float mat[linha][coluna]){
	int i,j,cont=0;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			if(mat[i][j]>20 && mat[i][j] <=50){
				cont++;
			}	
		}
	}
	return cont;
}

int main(){
	float mat[linha][coluna];
	int aux;
	
	ler(mat);
	aux = calculo(mat);
	printf("Existem %d numeros maiores que 20 dentro da matriz.", aux);
	
	return 0;
}
