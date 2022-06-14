#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int a, b, c, x1, x2, delta;

printf("Digite o valor de a: ");
scanf("%d", &a);
printf("Digite o valor de b: ");
scanf("%d", &b);
printf("Digite o valor de c: ");
scanf("%d", &c);

    delta = b*b - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    if (delta < 0){
        printf("Nao tem raiz existente.");
    } else{
        printf("O valor das raizes e x\'=%d e x\"=%d", x1, x2);
    }
    
    return 0;
}