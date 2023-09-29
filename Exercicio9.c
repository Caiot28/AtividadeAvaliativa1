#include<stdio.h>

main (){

    int voto, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, branco = 0, nulo = 0;

    do {
        printf("\nDigite seu voto: ");
        scanf("%d", &voto);


        switch (voto)
        {
        case 1:
            cand1++;
            break;
        
        case 2:
            cand2++;
            break;

        case 3:
            cand3++;
            break;

        case 4:
            cand4++;
            break;

        case 5:
            nulo++;
            break;

        case 6:
            branco++;
            break;

        default:
        printf("\nCandidato nao encontrado, tente novamente");

        }

    } while (voto > 0);

    printf("\nTotal de votos para o candidato 1: %d", cand1);
    printf("\nTotal de votos para o candidato 2: %d", cand2);
    printf("\nTotal de votos para o candidato 3: %d", cand3);
    printf("\nTotal de votos para o candidato 4: %d", cand4);
    printf("\nTotal de votos nulos: %d", nulo);
    printf("\nTotal de votos em branco: %d", branco);




}