#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int main(){
    int *pdim;
    int *v;

    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", pdim);

    v = (int*)malloc(*pdim * sizeof(int));
    for (int *p = v; p < v+5; p++){
        printf("Inserisci un numero intero: ");
        scanf("%d", p);
    }
    free(v);

    for (int *p = v; p < v+*pdim; p++){
        printf("");
        
    }
return 0;
}
