/* 11) Faça um algoritmo que verifique se uma dada matriz quadrada 8 x 8 gerada
aleatoriamente com números de 0 até 14 é uma matriz triangular inferior. Em uma
matriz triangular inferior, todos os elementos acima da diagonal principal são iguais a 0.
Os elementos da diagonal principal ou abaixo dela podem assumir valores quaisquer.
Crie e utilize um procedimento para a geração da matriz e uma função para a
verificação. De acordo com o retorno da função deve-se imprimir na função main:
MATRIZ TRIANGULAR INFERIOR ou MATRIZ NAO TRIANGULAR INFERIOR. FEITA */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 8

void gerar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			mat[i][j] = rand() % 15;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

int verificar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(i<j){
				if(mat[i][j]!=0){
					return 0;
				}
			}
		}
	}
	return 1;
}

int main(){
	int mat[tam][tam];
	
	srand(time(NULL));
	
	gerar(mat);
	if(verificar(mat)){
		printf("MATRIZ TRIANGULAR INFERIOR");
	}
	else{
		printf("MATRIZ NAO TRIANGULAR INFERIOR");
	}
	return 0;
}
