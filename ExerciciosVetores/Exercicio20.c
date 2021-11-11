/* 	20) Faça um algoritmo que leia pelo teclado os 20 números do vetor A e construa um vetor B com os mesmos
números de A, sendo que estes deverão estar invertidos. Ou seja, o primeiro número de A passa a ser o último
2
de B, o segundo de A passa a ser o penúltimo de B e assim por diante. Crie e utilize dois procedimentos:
um para ler o vetor A e outro para preencher o vetor B FEITO */

#include <stdio.h>
#include <stdlib.h>

#define tam 5

void ler(int vetA[tam])
{
	int i;
	
	for(i=0;i<tam;i++)
	{
		printf("Digite o valor para o vetor A:\n");
		scanf("%d", &vetA[i]);
	}
}

void preencher(int vetA[tam], int vetB[tam])
{
	int i,k;
	
	for(i=0,k=tam-1;i<tam;i++,k--)
	{
		vetB[k] = vetA[i];
	}
	for(i=0;i<tam;i++)
	{
		printf("Vetor B: %d\n", vetB[i]);
	}
}

int main(){
	int vetA[tam],vetB[tam];
	
	ler(vetA);
	preencher(vetA,vetB);
}
