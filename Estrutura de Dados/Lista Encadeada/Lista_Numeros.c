#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
  int dado;
  struct no *proximo;
} tipo_no;

tipo_no *inclui_dado_inicio(tipo_no *inicio, int dado){

tipo_no *novo;

novo = (tipo_no*)malloc(sizeof(tipo_no));
novo->dado = dado;
novo->proximo = inicio;
inicio=novo;

return inicio;

}

tipo_no *inclui_dado_fim(tipo_no *inicio, int dado){

tipo_no *novo;
tipo_no *atual;

novo = (tipo_no*)malloc(sizeof(tipo_no));

novo->dado = dado;
novo->proximo = NULL;

if(inicio==NULL)
{
  inicio = novo;
}
else 
{
  atual = inicio;
  while(atual->proximo != NULL)
  {
    atual = atual->proximo;
  }
  atual->proximo = novo;
}

return inicio;

}

tipo_no* exclui_dado_inicio(tipo_no *inicio){
  tipo_no *auxiliar;

  auxiliar = inicio;
  inicio = inicio->proximo;
  free(auxiliar);

  return inicio;
}

tipo_no* exclui_dado_fim(tipo_no *inicio){
tipo_no *auxiliar;
tipo_no *atual;

atual = inicio;

while(atual->proximo!=NULL)
{
  auxiliar = atual;
  atual = atual->proximo;
}
  free(atual);
  auxiliar -> proximo = NULL;

return inicio;
}

void imprime_lista(tipo_no *inicio){
tipo_no *atual;

atual = inicio;

while(atual != NULL)
{
  printf("%d ", atual->dado);
  atual = atual->proximo;
}

}

tipo_no* limpar_lista(tipo_no *inicio){

tipo_no* atual = inicio;
tipo_no* auxiliar;

while(atual->proximo!=NULL)
{
  auxiliar = atual;
  atual = atual->proximo;
}
  free(atual);
  atual = auxiliar;
  if(inicio->proximo ==NULL)
  {
    free(inicio);
    inicio = NULL;  
  }

return inicio;
}


int main() {
  int opcao, dado;
  tipo_no *inicio = NULL;

  while(opcao!=7)
  {
    printf("\nDigite qual opcao voce deseja:\n1 - Inclusao de elemento no inicio da lista\n2 - Inclusao de elemento no final da lista\n3 - Exclusao de elemento no inicio da lista\n4 - Exclusao de elemento no fim da lista\n5 - Imprimir lista\n6 - Limpar lista\n7 - Finalizar programa\n");
    scanf("%d",&opcao);
    switch(opcao)
    {
      case 1:
      printf("Digite o valor a ser incluso no inicio da lista:\n");
      scanf("%d", &dado);
      inicio = inclui_dado_inicio(inicio, dado);
      break;

      case 2:
      printf("Digite o valor a ser incluso no fim da lista:\n");
      scanf("%d", &dado);
      inicio = inclui_dado_fim(inicio, dado);
      break;

      case 3:
      if(inicio == NULL)
      {
        printf("Opcao invalida. Nao existe nada a ser excluido.");
      }
      else
      {
        inicio = exclui_dado_inicio(inicio);
      } 
      break;

      case 4:
      if(inicio == NULL)
      {
        printf("Opcao invalida. Nao existe nada a ser excluido.");
      }
      else
      {
        inicio = exclui_dado_fim(inicio);
      }
      break;

      case 5:
      imprime_lista(inicio);
      break;

      case 6:
      while(inicio!=NULL)
      {
        inicio = limpar_lista(inicio);
      }
      inicio = limpar_lista(inicio);
      free(inicio);
      break;
    }
  }
  return 0;
}
