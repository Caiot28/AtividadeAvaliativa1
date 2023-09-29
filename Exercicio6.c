#include<stdio.h>
#include<math.h>

main (){

    int x, y;

    printf("Digite a coordenada do ponto\n");
    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    if (x == 0 && y == 0){
        printf("Origem");

    } else if (x == 0 && y != 0) {
        printf("Eixo X");

    } else if (y == 0 && x != 0) {
        printf("Eixo Y");

    } else if (x > 0 && y > 0) {
        printf("Quadrante 1");

    } else if (x < 0 && y > 0) {
        printf("Quadrante 2");

    } else if (x < 0 && y < 0) {
        printf("Quadrante 3");
    } else {
        printf("Quadrante 4");
    }

}