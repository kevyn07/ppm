#include <stdio.h>

const int MAX = 100;

/* Prototipos de funciones. */
void Lectura(int[], int);
void Ordena(int[], int);
void Imprime(int[], int);

int main(void)
{
    int TAM, VEC[MAX];

    /* Se verifica que el tamaño del arreglo sea correcto. */
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);
    Ordena(VEC, TAM);
    Imprime(VEC, TAM);

    return 0;
}

/* La función Lectura se utiliza para leer un arreglo unidimensional de T
elementos de tipo entero. */
void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

/* Esta función se utiliza para escribir un arreglo unidimensional
ordenado de T elementos de tipo entero. */
void Imprime(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nA[%d]: %d", I, A[I]);
    }
    printf("\n");
}

/* La función Ordena utiliza el método de inserción directa para ordenar
los elementos del arreglo unidimensional A. */
void Ordena(int A[], int T)
{
    int AUX, L, I;
    for (I = 1; I < T; I++)
    {
        AUX = A[I];
        L = I - 1;
        while ((L >= 0) && (AUX < A[L]))
        {
            A[L + 1] = A[L];
            L--;
        }
        A[L + 1] = AUX;
    }
}
