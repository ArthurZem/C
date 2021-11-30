#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
  char nome[50];
  struct no *proximo;

} tipo_no;

tipo_no *incluir_nome(tipo_no *inicio, char nome_main[50])
{
  tipo_no *novo;
  tipo_no *atual;
  tipo_no *aux;


  novo = (tipo_no*)malloc(sizeof(tipo_no));

  strcpy(novo->nome, nome_main);
  novo->proximo = NULL;

  if(inicio==NULL)
  {
    inicio = novo;
  }
  else
  {
    atual = inicio;
    while(atual->proximo!=NULL)
    {
      atual = atual->proximo;
    }
    atual->proximo = novo;
  }

  return inicio;

}

void lista_nome(tipo_no *inicio, char nome_main[50]){
  tipo_no *atual;

  atual = inicio;

  while(atual!=NULL)
  {
    printf("%s\n",atual->nome);
    atual = atual->proximo;
  }

}

int busca_nome(tipo_no *inicio, char buscaNome[50])
{
  tipo_no *atual;
  int cont=1;

  atual = inicio;

  while(atual!=NULL)
  {
    if((strcmp(buscaNome, atual->nome)!=0)) 
    {
     cont++;
     atual = atual->proximo;
    }
    if((strcmp(buscaNome, atual->nome)==0))
    {
      return cont;
    }
  }

  return cont;
}

tipo_no *excluir_nome(tipo_no *inicio, char buscaNome[50])
{
  tipo_no *atual;
  tipo_no *anterior;

  atual = inicio;
  anterior = inicio;

  while(atual!=NULL)
  {
    if((strcmp(buscaNome,atual->nome)==0))
    { 
      anterior->proximo = atual->proximo;
      free(atual);
    }
    else
    {
      atual = atual->proximo;
    }
  }

  return inicio;
}

int main(void) {
  char nome_main[50],buscaNome[50];
  int opcao, cont=0;
  tipo_no *inicio = NULL;

  while(opcao!=5)
  {
    printf("Digite qual opcao deseja:\n1 - Incluir nome\n2 - Excluir nome\n3 - Buscar nome\n4 - Listar lista\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
      case 1:
      printf("Digite o nome que deseja inserir:\n");
      scanf("%s",nome_main); 
      inicio = incluir_nome(inicio,nome_main);
      break;

      case 2:
      printf("Digite o nome que deseja excluir:\n");
      scanf("%s", buscaNome);
      inicio = excluir_nome(inicio,buscaNome);
      break;

      case 3:
      printf("Digite o nome que deseja buscar:\n");
      scanf("%s", buscaNome) ;
      cont = busca_nome(inicio,buscaNome);
      if(cont == 0)
      {
        printf("O nome nao foi encontrado\n");
      }
      else
      {
        printf("O nome esta na posicao %d\n", cont);
      }
      break;
      case 4:
      lista_nome(inicio,nome_main);
      break;
    }
  } 
  return 0;
}
