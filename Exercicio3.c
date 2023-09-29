#include<stdio.h>
#include<math.h>

main (){

    float A, B, C;

    printf("Digite o valor de A: ");
    scanf ("%f", &A);
    
    printf("\nDigite o valor de B: ");
    scanf ("%f", &B);

    printf("\nDigite o valor de C: ");
    scanf ("%f", &C);

    if (A > B - C && A < B + C && B > A - C && B < A + C && C > A - B && C < A + B) {
        if (A == B & A == C){

            printf("E um triangulo equilatero.");

        } else if (A != B && A !=C){

            printf("E um triangulo escaleno.");

        } else {
            
            printf("E um triangulo isosceles");
        }
        
    } else {
        printf("\nNao e um triangulo");
    }

}