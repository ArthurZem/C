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
	int menor,posicao, i,aux;
	
	
	menor = vet[0];
	posicao = 0;
	for(i=1;i<tam;i++)
	{
		if(menor>vet[i])
		{
			menor=vet[i];
			posicao=i;
		}
		
	}
	
	printf("O menor valor e: %d e esta na posicao %d", menor,posicao+1);
}

int main(){
	int vet[tam];
	
	preenche(vet);
	imprime(vet);
	
	return 0;
}
