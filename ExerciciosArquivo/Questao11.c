/* 11) Considere um arquivo chamado "Cidades.txt" que armazena em cada linha o nome
de uma cidade e o seu número de habitantes. Faça um algoritmo para ler esse arquivo e
criar um arquivo chamado "Populacao.txt" contendo o nome da cidade mais populosa
seguida pelo seu número de habitantes.
- Obs.: A função strcpy(str1,str2) da biblioteca string.h copia uma string para outra.
Ela copia a string str2 para a string str1. */

#include <stdio.h>
#include <string.h>

int main()
{
    char cidade[50],cidade2[50];
    int habitantes,maior=0;

    FILE *arqentrada,*arqsaida;


    arqentrada = fopen("Cidades.txt", "r");
    arqsaida = fopen("Populacao.txt", "w");

    if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }


    while(!feof(arqentrada)){
    strcpy(cidade2,cidade);
    fgets(cidade, 50, arqentrada);
    fscanf(arqentrada, "%d", &habitantes);
    if(habitantes>maior){
    fscanf(arqentrada, "%d", &maior);
    }
    }
    fprintf(arqsaida, "%s", cidade2);
    fprintf(arqsaida, "%d ",maior);

    fclose(arqentrada);
    fclose(arqsaida);
    return 0;

}
