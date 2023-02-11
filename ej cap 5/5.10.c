#include <stdio.h>

/* Prototipos de funcione  */
void Lectura(int[], int);
int Busca(int[], int, int);

int main(void) {
  const int MAX = 100;
  int RES, ELE, TAM, VEC[MAX];

  do {
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &TAM);
  } while (TAM > MAX || TAM < 1);

  /* Se verifica que el tamaño del arreglo sea correcto. */
  Lectura(VEC, TAM);

  printf("\nIngrese el elemento a buscar: ");
  scanf("%d", &ELE);

  RES = Busca(VEC, TAM, ELE);
  
  if (RES) {
    printf("\nEl elemento se encuentra en la posición: %d", RES);
  } else {
    printf("\nEl elemento no se encuentra en el arreglo");
  }

  return 0;
}

void Lectura(int A[], int T) {
  /* Lee una mattriz de enteros unidimensionales de elementos T */
  for (int I = 0; I < T; I++) {
    printf("Ingrese el elemento %d: ", I+1);
    scanf("%d", &A[I]);
  }
}

int Busca(int A[], int T, int E) {
  /* Esta función localiza el elemento E en la matriz unidimensional A.
  Si se encuentra, la función devuelve la posición correspondiente. En caso contrario, devuelve 0. */

  int RES = 0;
  for (int I = 0; I < T; I++) {
    if (A[I] == E) {
      RES = I + 1; // Asigna I+1 ya que las posiciones en el array empiezan desde cero.
      break;
    }
  }
  return RES;
}
