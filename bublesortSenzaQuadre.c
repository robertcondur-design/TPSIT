#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define DIM 5

void scambio(int *a, int *b) {
    int z;
    z = *a;
    *a = *b;
    *b = z;
}

void bublesort(int vett[], int n){
int *p = vett;
int *q = vett + 1;

    for (p = vett; p<vett+n; p++) {
        for (q = p+1; q < vett+n ; q++) {
            if (*p>*q){
                int temp = *p;
                *p = *q;
                *q = temp;
        }
    }
  }
}

void stampaInt(int vett[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d ", vett[i]);
    }
}

int main(){
    int vett[5] = {3, 5, 2, 7, 1};

    stampaInt(vett, DIM);
    printf("\n");
    bublesort(vett, DIM);
     
    stampaInt(vett, DIM);

return 0;
}
