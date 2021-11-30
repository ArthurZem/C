/* 19) Considere uma matriz quadrada de ordem 6 gerada aleatoriamente com n�meros de
1 at� 30. Fa�a um algoritmo que calcule e imprima a soma dos elementos dessa matriz
que n�o perten�am � diagonal principal nem � diagonal secund�ria. Crie e utilize um
procedimento para a gera��o da matriz e uma fun��o para retornar a soma. A
impress�o da soma tem que ser na fun��o main. FEITO */

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
			if(i!=j && i+j!=tam-1) // i+j, por come�arem em 0, ter�o seus valores m�ximos sendo um menor do que o tamanho proposto.
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
