/* Fa�a um algoritmo com um vetor de 3 posi��es e que mostre qual � o maior valor deste vetor e sua posi��o */

#include <stdio.h>
#include <stdlib.h>

#define tam 3

void preenche(int vet[tam])
{
	int i;

	for(i=0;i<tam;i++)
	{
		printf("Digite o valor a ser posto no vetor:\n");
		scanf("%d", &vet[i]);
	}
	
}

void imprime(int vet[tam])
{
	int maior,posicao, i,aux;
	
	
	maior = vet[0];
	posicao = 0;
	for(i=1;i<tam;i++)
	{
		if(vet[i]>maior)
		{
			maior=vet[i];
			posicao=i;
		}
		
	}
	
	printf("O maior valor e: %d e esta na posicao %d", maior,posicao+1);
}

int main(){
	int vet[tam];
	
	preenche(vet);
	imprime(vet);
	
	return 0;
}
