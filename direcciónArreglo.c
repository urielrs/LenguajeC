#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,n;
    char *buffer;
    
    printf("Teclea la longitud del arreglo\n");
    scanf("%d", &i);

   buffer = (char*) malloc ((i+1)*sizeof(char));
    if (buffer == NULL) exit (1);

    for(n=0; n<i;n++){
        puts("Ingrese un elemento\n");
        scanf("%s", &buffer[n]);

    }

    printf("los elementos son: %s\n", buffer);
    free(buffer);
    
    return 0;
}