/* 12) Considere um arquivo chamado "Pessoas.txt" que armazena em cada linha o nome
de uma pessoa e o seu ano de nascimento. Faca um algoritmo para ler esse arquivo e
criar dois outros arquivos: um chamado "Maiores.txt", que contem em cada linha o
nome e a idade das pessoas maiores de idade (idade . 18 anos) e outro chamado
"Menores.txt", que contem em cada linha o nome e a idade das pessoas menores de
idade (idade < 18 anos). */


#include <stdio.h>
#include <string.h>
int main()
{
    char nome[20];
    int nascimento,idade;

    FILE *arqentrada,*arqsaida1,*arqsaida2;


    arqentrada = fopen("Pessoas.txt", "r");
    arqsaida1 = fopen("Maiores.txt", "w");
    arqsaida2 = fopen("Menores.txt", "w");

     if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }
    while(!feof(arqentrada)){
      fscanf(arqentrada, "%s", &nome);
      fscanf(arqentrada, "%d", &nascimento);
      idade = 2019 - nascimento;
      if(idade>=18){
      fprintf(arqsaida1,"%s %d anos\n", nome, idade);
    }
    else{
    fprintf(arqsaida2, "%s %d anos\n", nome, idade);
    }
    }
    fclose(arqentrada);
    return 0;
}
