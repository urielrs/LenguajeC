#include <stdio.h>

struct CD {
    char titulo[100];
    char artista[50];
    int canciones;
    int anio;
    int precio;
    
};

int main(void){
    struct CD cd1;

    printf("Ingresa el titulo\n");
    gets(cd1.titulo);
    printf("Ingresa numero de canciones\n");
    scanf("%d", &cd1.canciones);
    printf("Ingresa el año\n");
    scanf("%d", &cd1.anio);
    printf("Ingresa el precio\n");
    scanf("%d", &cd1.precio);


    printf("%s\n", &cd1.titulo);
    printf("%d\n", &cd1.canciones);
    printf("%d\n", cd1.anio);
    printf("%d\n", &cd1.precio);

    return 0;
    
}
