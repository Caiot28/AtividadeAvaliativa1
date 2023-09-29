#include<stdio.h>
#include<string.h>

main (){

    int codCidade = 0, veiculos, acidentes, acidenteVitimas, n = 1;
    char estado [3];
    float indiceAcidente = 0, indiceVitimas = 0, maiorIndice = 0, menorIndice = 0;

    do {
    
        printf("Digite o codigo da cidade: ");
        scanf("%d", &codCidade);

        if (codCidade == 1) {
            
            printf("\nDigite o numero de veiculos de passeio em 1992: ");
            scanf("%d", &veiculos);

            printf("\nDigite o numero de acidentes em 1992: ");
            scanf("%d", &acidentes);

            printf("\nDigite o numero de acidentes com vitimas: ");
            scanf("%d", &acidenteVitimas);

            indiceAcidente == (float)acidentes / (float)veiculos;
            

        } else if (codCidade == 2) {
            
            printf("\nDigite o numero de veiculos de passeio em 1992: ");
            scanf("%d", &veiculos);

            printf("\nDigite o numero de acidentes em 1992: ");
            scanf("%d", &acidentes);

            printf("\nDigite o numero de acidentes com vitimas: ");
            scanf("%d", &acidenteVitimas);

            indiceAcidente == (float)acidentes / (float)veiculos;

        } else if (codCidade == 3) {
           
            printf("\nDigite o numero de veiculos de passeio em 1992: ");
            scanf("%d", &veiculos);

            printf("\nDigite o numero de acidentes em 1992: ");
            scanf("%d", &acidentes);

            printf("\nDigite o numero de acidentes com vitimas: ");
            scanf("%d", &acidenteVitimas);

            indiceAcidente == (float)acidentes / (float)veiculos;

        } else if (codCidade == 4) {
            
            printf("\nDigite o numero de veiculos de passeio em 1992: ");
            scanf("%d", &veiculos);

            printf("\nDigite o numero de acidentes em 1992: ");
            scanf("%d", &acidentes);

            printf("\nDigite o numero de acidentes com vitimas: ");
            scanf("%d", &acidenteVitimas);

            indiceAcidente == (float)acidentes / (float)veiculos;

        } else if (codCidade == 5) {
            
            printf("\nDigite o numero de veiculos de passeio em 1992: ");
            scanf("%d", &veiculos);

            printf("\nDigite o numero de acidentes em 1992: ");
            scanf("%d", &acidentes);

            printf("\nDigite o numero de acidentes com vitimas: ");
            scanf("%d", &acidenteVitimas);

            indiceAcidente == (float)acidentes / (float)veiculos;
        }
        


        printf("Deseja finalizar? 0 - sim / 1 - nao ");
        scanf("%d", &n);

    } while (n != 0);

    printf("Maior indice: %f", maiorIndice);




}