/* 14) Fa�a um algoritmo que leia duas frases (de no m�ximo 20 caracteres cada uma) e imprima se as frases
possuem o mesmo comprimento, bem como se s�o iguais ou diferentes no conte�do. Exemplo:
Frase 1: Brasil Hexa 2010
Frase 2: Brasil! Hexa 2010!
Resultado: As duas frases s�o de tamanhos diferentes. As duas frases possuem conte�do distintos.
Obs.: Considere que as frases n�o iniciam e nem terminam com espa�o, bem como s� existe um �nico espa�o
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
