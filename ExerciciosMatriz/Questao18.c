/* 18) Faca um algoritmo que leia uma matriz 3 x 3 de numeros inteiros. Depois, calcule e
armazene na posicao i de um vetor de tamanho 3 a soma dos valores da coluna i da
matriz (0 . i . 2), imprimindo em seguida o vetor. Crie e utilize dois procedimentos:
um para ler a matriz e outro para preencher e imprimir o vetor. O vetor tambem deve ser
declarado na funcao main. FEITA */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define tam 3


int NC(int mat[tam][tam]){
	int i,j,maior=0,soma=0;
	
	for(j=0;j<tam;j++){
		soma=0;
		for(i=0;i<tam;i++){
			soma += abs(mat[i][j]);
			if(soma>maior){
				maior=soma;
			} 
		}
	}
		
	return maior;
}

int NL(int mat[tam][tam]){
	int i,j,maior=0,soma=0;
	
	for(i=0;i<tam;i++){
		soma=0;
		for(j=0;j<tam;j++){
			soma += abs(mat[i][j]);
			if(soma>maior){
				maior=soma;
			} 
		}
	}
		
	return maior;
}

float NE(int mat[tam][tam]){
	int i,j,quadrado=0;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			quadrado += pow(mat[i][j],2);
		}
	}
	
	
	return sqrt(quadrado);
}


int main(){
	int mat[tam][tam] = {3,2,5,1,1,2,4,3,-2};
	
	printf("A Norma Coluna e: %d\n",NC(mat));
	printf("A Norma Linha e: %d\n", NL(mat));
	printf("A Norma Euclideana e: %.2f", NE(mat));
	
	return 0;
}
