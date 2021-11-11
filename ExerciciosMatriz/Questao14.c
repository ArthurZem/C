/* 14) Faça um algoritmo para calcular a multiplicação dos elementos que estão abaixo
da diagonal principal de uma matriz quadrada 6 x 6 gerada aleatoriamente com números
de 1 até 10. Crie e utilize um procedimento para a geração da matriz e uma função
para realizar a multiplicação. O resultado da multiplicação tem que ser impresso na
função main. FEITA*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 6

void gerar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			mat[i][j] = rand() % 10+1;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
}

int multiplicar(int mat[tam][tam]){
	int i,j,k,r;
	
	for(i=0;i<tam;i++
	){
		for(j=0;j<tam;j++)
		{
			for(k=0;k<tam;k++)
			{
				if(i<j)
				{
					r += mat[i][k] * mat[k][j];
				}
			}
		}
	}
	return r;
}

int main(){
	int mat[tam][tam];
	
	srand(time(NULL));
	
	
	gerar(mat);
	printf("O resultado da multiplicacao e:\n%d", multiplicar(mat));
	
	return 0;
}
