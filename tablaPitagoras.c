#include <stdio.h>

int main() {
    int i;
    int j;
    printf("   |");
    for (i = 1; i <= 10; ++i) {
        printf("%4d", i);
        for (i = 1; i <= 10; ++i){
        }
    }
    printf("\n");
    
    for (i = 1; i <= 10; ++i) {
        printf("%2d |", i);
        for (j = 1; j <= 10; ++j) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    
    return 0;
}
