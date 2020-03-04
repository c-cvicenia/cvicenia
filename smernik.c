#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* prepocet(int cislo){

    char* c = calloc(4,sizeof(char));
    c[0] = 'A';
    c[1] = 'H';
    c[2] = 'J';
    c[3] = '\0';
    printf("\n");
    return c;
}
int main(){
    
    char* x;
    x = prepocet(4);
    printf("%s", x);
    
    return 0;
}
