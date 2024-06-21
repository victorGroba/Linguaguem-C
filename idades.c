#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_PT.UTF-8");
    int idade1, idade2;
    char nome1[50], nome2[50];
    double idade_media;

    printf("Dados primeira pessoa: \n");
   
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa: \n");
    printf("Digite o nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    idade_media = (idade1+idade2)/2.0;

    printf("A idade média de %s e %s é de : %.2lf", nome1, nome2, idade_media );

   


    
    return 0;
}