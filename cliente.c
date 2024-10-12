#include <stdio.h>

int main() {
    float cantidad;
    char respuesta;

   
    printf("Ingrese la cantidad en pesos: ");
    scanf("%f", &cantidad);

    
    printf("¿Es usted cliente? (s/n): ");
    scanf(" %c", &respuesta);

    
    float descuento = (respuesta == 's') ? 0.20 : 0.05;
    float Descuento = cantidad - (cantidad * descuento);

    
    if (respuesta == 's') {
        printf("Es cliente, tiene un descuento del 20%%.\n");
    } else {
        printf("No es cliente, tiene un descuento del 5%%.\n");
    }

   
    printf("El total a pagar es: %.2f pesos\n", Descuento);

    return 0;
}