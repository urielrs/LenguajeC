#include <stdio.h>
#include <stdlib.h>

int main(void){
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
    
    return 0;
}