#include <stdio.h>
#include <math.h>

int main() {
    int i, j, k = 0, prime[100];
    for (i = 2; i < 1000; i++) {
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
            prime[k++] = i;
        if (k == 100)
            break;
    }
    printf("Los primeros 100 números primos son:\n");
    for (i = 0; i < 100; i++)
        printf("%d\n", prime[i]);
    return 0;
}

