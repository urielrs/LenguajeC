#include <stdio.h>

struct ATLETAS {
    char nombre [50];
    char deporte [50];
    char pais [50];
    int medallas;

};

int main(void){

    struct ATLETAS at[10];
    int i;
    for(i=0; i<10; i++){
        printf("Ingresa tu nombre\n");
        scanf("%s", at[i].nombre);
        printf("Ingresa el Deporte\n");
        scanf("%s", at[i].deporte);
        printf("Ingresa tu pais\n");
        scanf("%s", at[i].pais);
        printf("Ingresa total de medallas\n");
        scanf("%d", &at[i].medallas);
    }
    i++;

    int index = 0;

    for(i=1; i<10; i++){
        if(at[i].medallas > at[index].medallas){
            index = i;
        }
    }

    printf("Atleta con mayor medallas:\n");
    printf("%s\n", at[index].nombre);
    printf("%s\n", at[index].deporte);
    printf("%s\n", at[index].pais);
    printf("%d\n", at[index].medallas);

    return 0;

    
}
