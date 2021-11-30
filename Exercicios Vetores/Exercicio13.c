
/*13) Faça um algoritmo para ler duas palavras (com no máximo 10 caracteres cada uma) e imprimir a menor
delas ou se elas têm o mesmo tamanho. Crie e utilize dois procedimentos: um para ler as palavras e outro
para imprimir o que se pede.
Obs.: Considere que o usuário digitará somente letras minúsculas. FEITA */


#include <stdio.h>
#include <string.h>

void ler(char palavra1[11], char palavra2[11]){
	
	printf("Digite as duas palavras:\n");
	scanf("%s %s", palavra1,palavra2);
	
}

void imprimir(char palavra1[11], char palavra2[11]){
	int aux1, aux2;
	
	aux1 = strlen(palavra1);
	aux2 = strlen(palavra2);
	
	if(aux1 > aux2){
		printf("%s e a maior string", palavra1);
	}
	if(aux2 > aux1){
		printf("%s e a maior string", palavra2);
	}
	if(aux1 == aux2){
		printf("O tamanho das duas palavras e igual");
	}
}
int main(){
	char palavra1[11], palavra2[11];
	
	ler(palavra1, palavra2);
	imprimir(palavra1, palavra2);
	
	return 0;
}
	
	
