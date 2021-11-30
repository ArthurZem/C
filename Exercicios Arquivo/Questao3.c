/* 3) Fa�a um algoritmo que leia de um arquivo chamado "Medias.txt" o nome dos alunos
e as suas respectivas m�dias. Seu algoritmo deve ter como sa�da um arquivo chamado
"Aprovados.txt", que cont�m os nomes dos alunos com m�dia igual ou superior a 7.0, e
outro arquivo chamado "Reprovados.txt", que cont�m os nomes dos alunos com m�dia
inferior a 7.0. */

#include <stdio.h>

int main()
{
    char nome[20];
    float media=0;

    FILE *arqentrada,*arqsaida1,*arqsaida2;


    arqentrada = fopen("Medias.txt", "r");
    arqsaida1 = fopen("Aprovados.txt", "w");
    arqsaida2 = fopen("Reprovados.txt", "w");

    if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }

    while(!feof(arqentrada)){
    fscanf(arqentrada,"%s", &nome);
    fscanf(arqentrada,"%f", &media);
    if(media >=7){
    fprintf(arqsaida1, "%s %.2f ", nome,media);
    }
    else{
    fprintf(arqsaida2, "%s %.2f ", nome,media);
    }

    }


    fclose(arqentrada);
    fclose(arqsaida1);
    fclose(arqsaida2);
    return 0;

}
