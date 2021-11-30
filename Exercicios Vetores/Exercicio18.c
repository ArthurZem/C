/* 18) Fa�a um algoritmo que leia uma palavra (com no m�ximo 15 caracteres) e depois embaralhe os caracteres
da mesma, fazendo a sua impress�o ao nal. Por exemplo: recebendo a palavra python, pode ser retornado
npthyo, ophtyn ou qualquer outra combina��o poss�vel, de forma aleat�ria. Crie e utilize dois procedimentos:
um para ler a palavra e outro para embaralhar e imprimir a mesma ao nal.
Obs. 1: N�o � permitido utilizar qualquer estrutura de dados auxiliar.
Obs. 2: Considere que o usu�rio digitar� somente letras min�sculas. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 15

void ler(char vet[tam])
{
	printf("Digite a palavra:\n");
	scanf("%s", vet);
}

void embaralhar(char vet[tam])
{
	int len,i,aleatorio;
	
	char aux;
	
	len = strlen(vet);
	
	for(i=0;i<tam;i++){
		aux = vet[i];
		aleatorio = vet[rand () % len];
		vet[i] = vet[aleatorio];
		vet[aleatorio] = aux;
	}
	for(i=0;i<tam;i++)
	{
		printf("%c", vet[i]);
	}
}

int main(){
	char vet[tam];
	
	srand(time(NULL));
	ler(vet);
	embaralhar(vet);
	
	return 0;
}
