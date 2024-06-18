#include <stdio.h>

int main(){
    char s[10];

// scanf convencional

    printf("Digite algo scanf convencional ");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s \n\n", s);

// scanf aprimorado

    printf("Digite algo scanf aprimorado ");
    scanf("%10[^\n]s", s);
    fflush(stdin);

    printf("Resultado: %s \n\n", s);

    return 0; 

}