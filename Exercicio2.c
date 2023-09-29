#include<stdio.h>
#include<math.h>

main (){

    float ze = 1.1, chico = 1.5;
    int contador = 0;

    do {
        contador++; // contador dos anos
        ze = ze + 0.03; // adc de altura
        chico = chico + 0.02;

    }while (ze < chico);

    printf("\n%d anos necessarios para ze ultrapassar chico.", contador);






}