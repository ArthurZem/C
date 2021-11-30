/* 14) Faça um algoritmo que leia duas frases (de no máximo 20 caracteres cada uma) e imprima se as frases
possuem o mesmo comprimento, bem como se são iguais ou diferentes no conteúdo. Exemplo:
Frase 1: Brasil Hexa 2010
Frase 2: Brasil! Hexa 2010!
Resultado: As duas frases são de tamanhos diferentes. As duas frases possuem conteúdo distintos.
Obs.: Considere que as frases não iniciam e nem terminam com espaço, bem como só existe um único espaço
entre as palavras das frases. FEITA */

#include <stdio.h>
#include <string.h>

#define tam 21

int main(){
	char frase1[tam];
	char frase2[tam];
	int aux1=0,aux2=0;
	
	printf("Digite a primeira frase:\n");
	scanf("%[^\n]s", frase1);
	
	setbuf(stdin, NULL);		
	
	printf("Digite a segunda frase:\n");
	scanf("%[^\n]s", frase2);
	
	aux1 = strlen(frase1);
	aux2 = strlen(frase2);
	
	if(aux1 == aux2)
		{
			printf("O tamanho das frases e igual.");
			{
				if(strcmp(frase1, frase2) == 0 )
				{
				printf("Seu conteudo tambem e igual.");
				}
				if(strcmp(frase1, frase2) != 0)
				{
				printf("Seu conteudo e diferente.");
				}
			}
		}
	if(aux1 != aux2)
	{
		printf("O tamanho das frases e seu conteudo sao diferentes.");
	}
	
	return 0;
}
