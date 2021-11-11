/* 7) Faça um algoritmo para verificar se uma matriz quadrada 6 x 6 gerada aleatoriamente
com números de 1 até 50 é simétrica. Crie e utilize um procedimento para a geração
da matriz e uma função para a verificação. De acordo com o retorno da função deve-se
imprimir na função main: MATRIZ SIMETRICA ou MATRIZ NAO SIMETRICA. FEITA*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 6

void gerar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			mat[i][j] = rand() % 50 +1;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
}

int verificar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(mat[i][j]!=mat[j][i]){
				return 0;
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
		printf("MATRIZ SIMETRICA");
	}
	else{
		printf("MATRIZ NAO SIMETRICA");
	}
	
	return 0;
}
