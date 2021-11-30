/* 15) Faça um algoritmo para ler uma palavra pelo teclado (com no máximo 15 caracteres) e vericar se ela é
Palíndrome ou não, sem utilizar qualquer estrutura de dados auxiliar. Crie e utilize um procedimento
para ler a palavra e uma função para fazer a vericação. A impressão da mensagem (se a palavra é ou não
Palíndrome) deve ser na função main.
Obs. 1: Uma palavra Palíndrome é aquela que lida de frente para trás e de trás para frente tem a mesma
sequência de caracteres. Exemplos: arara, ovo, asa, radar, matam, etc;
Obs. 2: Lembre-se que o usuário pode digitar letras maiúsculas e minúsculas. FEITO */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 16

void ler(char vet[tam])
{
	printf("Introduza uma string: \n");
    scanf("%[^\n]", vet);
}

int verificar(char vet[tam])
{
	int i,k,len;
	len = strlen(vet);

 	for( i = 0, k = len - 1 ; i <= len; i++, k--)
    {
        if(vet[k] != vet[i])
        {
        	return 0;
		}
    }
	return 1;
}


int main(){

    char vet[16];

	ler(vet);
	if(verificar(vet))
	{
		printf("E palindromo");
	}
	else{
		printf("Nao e palindromo");
	}

}
