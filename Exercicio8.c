#include<stdio.h>

main (){

    int habitantes = 0, filhos, contadorSalario = 0;
    float salario, mediaSalario, mediafilhos, porcentagem = 0, maiorSalario = 0;

    do {
    
        printf("\nDigite seu salario: ");
        scanf("%f", &salario);

        if (salario >= 0) {

        mediaSalario += salario;

        printf("\nDigite o numero de filhos: ");
        scanf("%d", &filhos);

        mediafilhos += (float)filhos;
        
        habitantes++;

            if (salario <= 100) {
            contadorSalario++;
            }

            if (salario > maiorSalario) {
                maiorSalario = salario;
            }
        }

    } while (salario >= 0);

    mediaSalario = mediaSalario / (float)habitantes;

    mediafilhos = mediafilhos / (float)habitantes;

    porcentagem = ((float)contadorSalario / (float)habitantes) * 100;

    printf("\nA media salarial e: %.2f", mediaSalario);
    printf("\nA media de filhos e: %.2f", mediafilhos);
    printf("\nPercentual de pessoas com salario ate 100: %.2f", porcentagem);

    printf("\nMaior salario: %.2f", maiorSalario);




}