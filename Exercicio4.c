#include<stdio.h>
#include<math.h>

main (){

    float A, B, C, quadradoA, quadradoB, quadradoC;

    printf("Digite o valor de A: ");
    scanf ("%f", &A);
    
    printf("\nDigite o valor de B: ");
    scanf ("%f", &B);

    printf("\nDigite o valor de C: ");
    scanf ("%f", &C);

    if (A > B - C && A < B + C && B > A - C && B < A + C && C > A - B && C < A + B) {

         quadradoA = A * A;
         quadradoB = B * B;
         quadradoC = C * C;

         if(quadradoA == quadradoB + quadradoC || quadradoB == quadradoA + quadradoC || quadradoC == quadradoA + quadradoB) {
            printf("E um triangulo retangulo.");
        
         } else if (quadradoA < quadradoB + quadradoC || quadradoB < quadradoA + quadradoC || quadradoC < quadradoA + quadradoB) {
            printf("E um triangulo acutangulo.");
            
         } else { 
            printf("E um triangulo obtusangulo.");
         }

    } else {
    printf("\nNao e um triangulo");
    }

}