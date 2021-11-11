/* 21) Faça um algoritmo que leia o nome completo (com no máximo 20 letras e
considerando espaços) de 50 pessoas. Após a leitura de todos os nomes, o algoritmo
deve imprimir os mesmos em ordem inversa de entrada. Crie e utilize dois
procedimentos: um para ler os nomes e outro para imprimir os mesmos em ordem
inversa de entrada. */

#include <stdio.h>
#include <string.h>

#define nome 21
#define tam 5

void ler(char mat[tam][nome]){
	int aux;
	
	for(aux=0; aux<tam; aux++){
		printf("Digite um nome:\n");
		gets(mat[tam]);
		}
	
}

void imprimir(char mat[tam][nome]){
	int aux;
	
	for(aux=tam;aux>0;aux--){
		printf("Nome numero %d: %s\n", aux, mat[aux]);
	}
	
}

int main(){
	char mat[nome][tam];
	
	ler(mat);
	imprimir(mat);
	
	return 0;
}
