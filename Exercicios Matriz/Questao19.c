/* 19) Considere uma matriz quadrada de ordem 6 gerada aleatoriamente com números de
1 até 30. Faça um algoritmo que calcule e imprima a soma dos elementos dessa matriz
que não pertençam à diagonal principal nem à diagonal secundária. Crie e utilize um
procedimento para a geração da matriz e uma função para retornar a soma. A
impressão da soma tem que ser na função main. FEITO */

#include <stdio.h>

#define tam 6

void gerar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			mat[i][j] = rand() % 30 + 1;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	
}

int soma(int mat[tam][tam]){
	int i,j,soma=0;
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			if(i!=j && i+j!=tam-1) // i+j, por começarem em 0, terão seus valores máximos sendo um menor do que o tamanho proposto.
			{
				soma+= mat[i][j];
			}
		}
	}
	return soma;
}

int main(){
	int mat[tam][tam];
	
	srand(time(NULL));
	
	gerar(mat);
	printf("\n\nA soma dos elementos que nao pertencem a diagonal principal nem a secundaria e: %d", soma(mat));
	
	return 0;
}
