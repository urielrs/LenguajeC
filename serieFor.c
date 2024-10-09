#include <stdio.h>

int main(){
   
   int num;
   puts("Ingresa un número");
   scanf("%d", &num);
   int i;
   for( i=0; i<=num; i++){
   int sum = num + i;
   printf("%d", sum);
   }
   
}