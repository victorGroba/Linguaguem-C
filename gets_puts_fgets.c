#include <stdio.h>

int main(){
    char s[10];

// gets

    printf("Digite algo pelo gets:  ");
    gets(s);
    fflush(stdin);

    printf("Resultado: %s \n\n", s);

// puts

    printf("Digite algo pelo puts:  ");
    puts(s);
    puts("");
    fflush(stdin);

    printf("Resultado: %s \n\n", s);

 

    // fgets

    printf("Digite algo fgets:  ");
    fgets(s, 10, stdin);
    fflush(stdin);

    printf("Resultado: %s \n\n", s);

    return 0; 

}