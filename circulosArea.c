#include <stdio.h>

int main(){
    float pi =3.1416;
    float rad;
    float area;
    int i=1;

    while(i<=3){
        printf("Introduce el radio del circulo");
        scanf("%f", &rad);

        area= pi * rad * rad;

        printf("El area %d es %f\n", i,area);

        i++;
    }
    
}