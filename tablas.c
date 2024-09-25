#include <stdio.h>

void tablaMultiplicar(int numero, int multiplicador) {
    if (multiplicador <= 10) {
        printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
        tablaMultiplicar(numero, multiplicador + 1);
    }
}

void tablasHasta100(int numero) {
    if (numero <= 100) {
        printf("Tabla de multiplicar del %d:\n", numero);
        tablaMultiplicar(numero, 1);
        printf("\n");
        tablasHasta100(numero + 1);
    }
}

int main() {
    tablasHasta100(1);
    return 0;
}
