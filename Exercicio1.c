#include<stdio.h>
#include<math.h>

main (){

    double x, resultado;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = ((5*x) + 3) / sqrt(pow(x, 2) - 16);

    printf("O resultado e: %lf", resultado);

}