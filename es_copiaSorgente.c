#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define SORGENTE sorgente.txt
#define COPIA copiaProgramma.txt

int main() {
    FILE *origine, *copia;
    char c;

    origine = fopen("SORGENTE", "r");
    if(origine == NULL) {
        printf("Il file e' inesistente.");
    } else {
        printf("File esistente!\n");
        copia = fopen("COPIA", "w");
        while ((c = fgetc(origine)) != EOF) {
            fputc(c, copia);
        }

        printf("Copia del sorgente creata con successo!\n");

        fclose(origine);
        fclose(copia);
    }


    return 0;
}

