#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    double larg, compri, valor_m2, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &larg );
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &compri ); 
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor_m2 );

    area = larg * compri;
    preco = area * valor_m2;

    printf("Área do terreno = %2.lf\n", area);
    printf("Preço do Terreno = %2.lf\n", preco);


    
    return 0;
}