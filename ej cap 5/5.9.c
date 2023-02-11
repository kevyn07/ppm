#include <stdio.h>

#define N 100

int searchSequential(int vec[], int n, int ele) {
    int i;
    for (i = 0; i < n; i++) {
        if (vec[i] == ele) {
            return i;
        }
    }
    return -1;
}

int main() {
    int vec[N], n, ele, pos;

    printf("Introduce la cantidad de elementos en el arreglo: ");
    scanf("%d", &n);

    printf("Introduce los elementos del arreglo separados por espacio: ");
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }

    printf("Introduce el elemento a buscar: ");
    scanf("%d", &ele);

    pos = searchSequential(vec, n, ele);
    if (pos == -1) {
        printf("El elemento no fue encontrado en el arreglo.\n");
    } else {
        printf("El elemento fue encontrado en la posición %d del arreglo.\n", pos + 1);
    }

    return 0;
}
