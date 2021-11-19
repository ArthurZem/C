/* 8) Considere um arquivo de entrada chamado "Cidades.txt" que armazena (em cada
linha) o nome de uma cidade (sem espaços) e o seu número de habitantes. Faça um
algoritmo que leia o arquivo de entrada e gere um arquivo chamado "Saida.txt"
contendo o nome da cidade mais populosa seguida do seu número de habitantes. */

#include <stdio.h>

int main()
{
    char cidade[50],cidade2[50];
    int habitantes,maior=0;

    FILE *arqentrada,*arqsaida;


    arqentrada = fopen("Cidades.txt", "r");
    arqsaida = fopen("Saida.txt", "w");

    if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }


    while(!feof(arqentrada)){
    fscanf(arqentrada, "%s %d", cidade2, &habitantes);
    if(habitantes>maior){
    maior = habitantes;
    fscanf(arqentrada, "%s %d", cidade, &maior);
    }
    }
    fprintf(arqsaida, "%s %d", cidade, maior);

    fclose(arqentrada);
    fclose(arqsaida);
    return 0;

}
