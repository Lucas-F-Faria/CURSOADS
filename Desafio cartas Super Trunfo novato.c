#include <stdio.h>

int main() {

    // Declaração de variáveis 
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontost1, pontost2;

    // Entrada de dados carta 01
    printf ("Digite o estado da carta 01: \n");
    scanf ("%s" , estado1);

    printf ("Digite o codigo da carta 01: \n");
    scanf ("%s", codigo1);

    printf ("Digite o nome da cidade da carta 01: \n");
    scanf ("%s", cidade1);

    printf ("Digite o numero da populacao da carta 01: \n");
    scanf ("%i", &populacao1);

    printf ("Digite o tamanho da area em km² da carta 01: \n");
    scanf ("%f", &area1);

    printf ("Digite o numero do PIB da carta 01: \n");
    scanf ("%f", &PIB1);

    printf ("Digite o numero de pontos turisticos da carta 01: \n");
    scanf ("%i", &pontost1); 

    // Saída de dados carta 01
    printf ("\n Carta 1: \n");
    printf ("Estado: %s \n", estado1 );
    printf ("Codigo: %s \n", codigo1);
    printf ("Cidade: %s \n", cidade1);
    printf ("Populacao: %i \n", populacao1);
    printf ("Area: %.2f km²\n", area1);
    printf ("PIB: %.2f \n", PIB1);
    printf ("Numeros de pontos turisticos: %i \n", pontost1);

    // Entrada de dados carta 02
    printf ("Digite o estado da carta 02: \n");
    scanf ("%s", estado2); 

    printf ("Digite o codigo da carta 02: \n");
    scanf ("%s", codigo2);

    printf ("Digite o nome da cidade da carta 02: \n");
    scanf ("%s", cidade2);

    printf ("Digite o numero da populacao da carta 02: \n");
    scanf ("%i", &populacao2);

    printf ("Digite o tamanho da area em km² da carta 02: \n");
    scanf ("%f", &area2);

    printf ("Digite o numero do PIB da carta 02: \n");
    scanf ("%f", &PIB2);

    printf ("Digite o numero de pontos turisticos da carta 02: \n");
    scanf ("%i", &pontost2);
    
    // Saída de dados carta 02
    printf ("\n Carta 02:\n");
    printf ("Estado: %s \n", estado2);
    printf ("Codigo carta: %s \n", codigo2);
    printf ("Cidade: %s \n", cidade2);
    printf ("Populacao: %i \n",populacao2);
    printf ("Area: %.2f km²\n", area2);
    printf ("PIB: %.2f \n", PIB2);
    printf ("Numeros de pontos turisticos: %i \n", pontost2);


    return 0; //Fim do programa.

}