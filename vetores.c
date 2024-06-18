#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int N, i;

    printf("Quantos números voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for(i=0;i<N;i++){
        printf("Digite um número: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNúmeros digitados: \n");
    for(i=0;i<;i++){
        printf("Número %d é : %.1lf\n", i+1, vet[i]);

    }

    return 0;
}
