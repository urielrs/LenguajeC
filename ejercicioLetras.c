#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
int len, i, r;
char palabra[30];
int letras[26]= {0};

puts("Ingresa una palabra");
scanf("%s", &palabra);

len= strlen(palabra);

for(i=0; i<len; i++){
   if (palabra[i]) {
            r =(palabra[i]) - 'a';
            letras[r]++;
   }
}
    for (i = 0; i < 26; i++) {
        if (letras[i] > 0) {
            printf("%c: %d\n", 'a' + i, letras[i]);
        }

    }
    
    return 0;

}