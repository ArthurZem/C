/* 9) Considere um vetor com 20 números inteiros positivos gerados aleatoriamente de 0 a 49. Faça um algoritmo
que imprima na tela a quantidade de números pares e de números ímpares presentes no vetor. Crie e utilize
dois procedimentos: um para preencher o vetor e outro para imprimir as informações. */

#include <stdio.h>
#include <stdlib.h>

#define tam 20



void preencher(int vet[tam])
{
	int i;
	
	for(i=0;i<tam;i++)
	{
		vet[i] = rand () % 50;
		printf("%d\n", vet[i]);
	}
}

void imprime(int vet[tam])
{
	int i,impar=0,par=0;
	
	for(i=0;i<tam;i++)
	{
		if(vet[i]%2 == 0)
		{
			par++;
		}
		else{
			impar++;
		}
	}
	printf("Existem %d numeros par e %d numeros impar", par,impar);
}

int main(){
	int vet[tam];
	
	srand(time(NULL));
	
	preencher(vet);
	imprime(vet);
	
	return 0;
}
