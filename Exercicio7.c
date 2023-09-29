#include<stdio.h>
#include<math.h>

main (){

    float nota1, nota2, nota3, media = 0, mediaGeral = 0;
    int contador = 0;

    do{
        contador++;
        printf("\nDigite a primeira nota: ");
        scanf("%f", &nota1);

        printf("\nDigite a segunda nota: ");
        scanf("%f", &nota2);

        printf("\nDigite a terceira nota: ");
        scanf("%f", &nota3);

        media =((nota1*2) + (nota2*4) + (nota3*3)) / 10;

        printf("\nA media desse aluno e: %.3f", media);

        if (media >= 7) {
            printf("\nAprovado\n");
        } else {
            printf("\nReprovado\n");
        }

        mediaGeral += media;

    } while (contador < 30);

    mediaGeral = mediaGeral / contador;
    printf("A media geral da turma e: %.3f", mediaGeral);

       
}