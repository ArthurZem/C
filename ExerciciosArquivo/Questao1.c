/* 1) Fa�a um algoritmo que leia de um arquivo chamado "Turma.txt" o nome dos alunos
de uma turma e as suas tr�s notas. Seu algoritmo deve ter como sa�da um arquivo
chamado "MediasAlunos.txt" que cont�m os nomes dos alunos e suas respectivas
m�dias (com duas casas decimais).
- Exemplo de arquivos:
 Turma.txt MediasAlunos.txt
- Obs.:
Para declarar uma vari�vel que receba uma palavra:
char palavra[50];
Para ler uma palavra de um arquivo:
fscanf(arqLeitura, �%s�, &palavra);
Para escrever uma palavra em um arquivo:
fprintf(arqEscrita, �%s�, palavra);
- Utilize as dicas desta observa��o para a leitura e escrita do nome do aluno. */

#include <stdio.h>

int main()
{
    char nome[20];
    float nota1,nota2,nota3,media=0;
    int cont;

    FILE *arqentrada,*arqsaida;


    arqentrada = fopen("Turma.txt", "r");
    arqsaida = fopen("MediasAlunos.txt", "w");

    if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }

    while(!feof(arqentrada))
	{
    	fscanf(arqentrada,"%s", &nome);
	    fprintf(arqsaida, "%s ", nome);
	    fscanf(arqentrada,"%f %f %f", &nota1,&nota2,&nota3);
    	media= (nota1+nota2+nota3)/3;
    	fprintf(arqsaida, "%.2f \n", media);

    }


    fclose(arqentrada);
    fclose(arqsaida);
    return 0;

}
