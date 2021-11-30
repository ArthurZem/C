/* 5) Considere um arquivo chamado "Distancias.txt" que armazena (em cada linha) o
nome de uma cidade (sem espa�os) e a dist�ncia (em km) entre a mesma e Campos dos
Goytacazes. Imagine que um usu�rio deseja saber quantos litros de combust�vel e
quanto custaria abastecer tais litros para ele chegar a cada uma das cidades partindo de
Campos. Fa�a um algoritmo para ler (pelo teclado) o consumo do ve�culo do usu�rio
(em km/l), o valor do litro de combust�vel e depois gerar um arquivo chamado
"Gastos.txt" informando (em cada linha) o nome da cidade, quantos litros ser�o
necess�rios para a viagem e o valor para abastecer tais litros. */ 

#include <stdio.h>

int main()
{
    char cidade[50];
    float km,preco,consumo,litro=1.81,consumototal,gasto;

    FILE *arqentrada,*arqsaida;


    arqentrada = fopen("Distancias.txt", "r");
    arqsaida = fopen("Gastos.txt", "w");

    if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }

    printf("Digite o consumo do seu veiculo(km/l):\n ");
    scanf("%f",&consumo);

    while(!feof(arqentrada)){
    fscanf(arqentrada, "%s", &cidade);
    fscanf(arqentrada, "%f", &km);
    fprintf(arqsaida, "%s", cidade);
    consumototal = km/consumo;
    gasto = litro * consumototal;
    fprintf(arqsaida," %.2fL R$%.2f\n", consumototal, gasto);
    }

    fclose(arqentrada);
    fclose(arqsaida);
    return 0;

}
