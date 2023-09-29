#include<stdio.h>
#include<math.h>

main (){

    float xA, xB, yA, yB, distancia;

    printf("Digite os valores do ponto A\n");
    printf("x: ");
    scanf("%f", &xA);

    printf("y: ");
    scanf("%f", &yA);

    printf("Digite os valores do ponto B\n");
    printf("x: ");
    scanf("%f", &xB);

    printf("y: ");
    scanf("%f", &yB);

    distancia = sqrt((pow(xB - xA, 2)) + (pow(yB - yA, 2)));

    printf("Distancia: %.4f", distancia);

}