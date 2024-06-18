#include <stdio.h>

/* sintaxe:

    <tipo> <nome_da_funcao>(<parametros>) {
        <bloco de comandos>
        return <informação>;
    }
*/

 float Maior(float  num1, float num2){
    if (num1 > num2)
        return num1;
    else
        return num2;
 }

int main(){
    float x, y, m;

    printf("Insira um valor para x e y: ");
    scanf("%f %f", &x,&y );

    m = Maior(x,y);

    printf("Maior: %.2f/n", m);
}
