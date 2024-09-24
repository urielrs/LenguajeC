#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    clock_t inicio, fin;
    double tiempo;

    inicio = clock();

    int i,n;
    char *buffer;
    
    printf("Teclea la longitud de la cadena\n");
    scanf("%d", &i);

    buffer = (char*) malloc ((i+1)*sizeof(char));
    if (buffer == NULL) exit (1);

    for(n=0; n<i;n++){
        puts("Ingrese una letra\n");
        scanf("%s", &buffer[n]);

    }

    printf("la cadena es: %s\n", buffer);
    free(buffer);
    fin = clock(); 

    tiempo = ((double)(fin - inicio)) / CLOCKS_PER_SEC;

    printf("Tiempo final es: %f segundos\n", tiempo);

    return 0;
}
