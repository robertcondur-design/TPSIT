#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define DIM 5

int main(){
    int vett[5] = {3, 5, 2, 7, 1};

    int *p = vett;
    int *q = vett+1;

    for (int *p = vett; p<vett+DIM; p++){
        printf("Indirizzo: %d\n", p);
        printf("valore: %d\n", *p);
        printf("Differenza tra puntatori: %d\n", p-vett);

    }
return 0;
}
