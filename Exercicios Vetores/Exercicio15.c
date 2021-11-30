/* 15) Fa�a um algoritmo para ler uma palavra pelo teclado (com no m�ximo 15 caracteres) e vericar se ela �
Pal�ndrome ou n�o, sem utilizar qualquer estrutura de dados auxiliar. Crie e utilize um procedimento
para ler a palavra e uma fun��o para fazer a verica��o. A impress�o da mensagem (se a palavra � ou n�o
Pal�ndrome) deve ser na fun��o main.
Obs. 1: Uma palavra Pal�ndrome � aquela que lida de frente para tr�s e de tr�s para frente tem a mesma
sequ�ncia de caracteres. Exemplos: arara, ovo, asa, radar, matam, etc;
Obs. 2: Lembre-se que o usu�rio pode digitar letras mai�sculas e min�sculas. FEITO */

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
