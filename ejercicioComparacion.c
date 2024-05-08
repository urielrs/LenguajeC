#include <stdio.h>
#include <string.h>

    int main(){
    int len;
    char pal1[20];
    char pal2[20]; 
    puts("Ingresa una palabra");
    scanf("%s", &pal1);
    puts("Ingresa otra palabra");
    scanf("%s", &pal2);
    
    len= strcmp(pal1, pal2);
    
    if(len==0){
       printf("La palabra %s y la palabra %s son iguales ", pal1, pal2);
       
    }else if(len>0){
    printf("La palabra %s es mayor ", pal2);
    printf("La palabra %s es menor ", pal1);
    
    }else{
    printf("La palabra %s es mayor ", pal1);
    printf("La palabra %s es menor ", pal2);
    }
    
    return 0;
    
    }