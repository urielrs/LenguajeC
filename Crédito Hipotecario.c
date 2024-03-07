#include <stdio.h>

int main(){
int sueldo;
int anio;

puts("Ingresa los años trabajandos");
scanf("%d", &anio);
puts("Ingresa el sueldo");
scanf("%d",sueldo);
printf("Aprobaste el primer requisito");
float res = sueldo * 0.1;
if(anio >=5){
  if(res > 1000){
    printf("Aprobado");
  }

}

}