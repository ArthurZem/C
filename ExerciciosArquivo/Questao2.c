/* 2) Suponha que cada aluno fa�a tr�s provas, como mostra cada linha do arquivo
"Notas.txt". Fa�a um algoritmo para gerar o arquivo "Situacao.txt", onde cada linha
contenha a m�dia final do aluno e sua situa��o: �A� � Aprovado (m�dia igual ou
superior a 5.0) ou �R� � Reprovado (m�dia inferior a 5.0). */

#include <stdio.h>

int main()
{

    float nota1,nota2,nota3,media=0;
    FILE *arqentrada,*arqsaida;


    arqentrada = fopen("Notas.txt", "r");
    arqsaida = fopen("Situacao.txt", "w");

    if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }

    while(!feof(arqentrada)){
    fscanf(arqentrada,"%f %f %f", &nota1,&nota2,&nota3);
    media = (nota1+nota2+nota3)/3;

    if(media >=5){
        fprintf(arqsaida, "%.2f A\n", media);
    }
    else{
        fprintf(arqsaida, "%.2f R\n", media);
    }

    }


    fclose(arqentrada);
    fclose(arqsaida);
    return 0;

}
