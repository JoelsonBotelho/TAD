#include <stdio.h>

// Lista sequencial de números inteiros.
typedef struct{
  int valor[10];
  int n;
} lista;

//Inicialização da lista.
void InicializarLista (lista * l){
  l->n = 0;
}

//Mostrar a lista
void MostrarLista (lista * l){
  printf("Lista: \"");
  for (int i = 0; i < l->n; i++)
    printf("%d \" \n ", l->valor[i]);
}
//Inserir um elemento na lista
void InserirLista (lista * l, int x){
  if(l->n < 10){
    l->valor[l->n] = x;
  }
  l->n++;
}
int main() {
  
  return 0;
}