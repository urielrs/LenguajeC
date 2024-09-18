
#include <stdio.h>
#include <string.h>

void mostrar ();
void mostrar (){

    char original[100];
    char tem;
    int i, mitad, len;


    puts("Ingresa una cadena de caracteres.");
    scanf("%s", &original);
    len = strlen(original);
    mitad = len / 2; 
    
    for (i = 0; i < mitad; i++)
    {
        tem = original[i];
        original[i] = original[len -i -1];
        original[len -i -1] = tem;
    }
    
    printf("La cadena es: %s\n", original);
}

int main (){
    mostrar();

    return 0;
}