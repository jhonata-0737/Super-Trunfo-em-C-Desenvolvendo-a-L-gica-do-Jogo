#include <stdio.h>

int main ()
{
    // declaração das variaveis da primeira carta

    char pais[20];
    int populacao;
    int numerodepontosturisticos;
    float pib;
    float area;

    // declaração das variaveis da segunda carta

    char pais2[20];
    int populacao2;
    int numerodepontosturisticos2;
    float pib2;
    float area2;

    // Coleta é armazenamento dos dados d primeiro pais

    printf("Pais 1 \n");

    printf("Digite o nome do pais\n");
    scanf("%s", &pais);

    printf("Digete o numero da Populacao da pais \n");
    scanf("%d", &populacao);

    printf("Digite a área do pais em km² \n");
    scanf("%f", &area);

    printf("Digete o PIB do pais \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos do pais\n");
    scanf("%d", &numerodepontosturisticos);

    printf("===========================================================\n");

    // Coleta é armazenamento dos dados da segunda carta

    printf("Pais 2 \n");

    printf("Digite o nome do pais\n");
    scanf("%s",&pais2);

    printf("Digete o numero da Populacao do pais \n");
    scanf("%d", &populacao2);

    printf("Digite a área do pais em km² \n");
    scanf("%f", &area2);

    printf("Digete o PIB do pais \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos do pais \n");
    scanf("%d", &numerodepontosturisticos2);

    // Calculando a densidade populacional da primeira carta 
    
    float calculandoDensidadePopulacional = populacao / area;


    // Calculando a densidade populacional da segunda carta 

    float calculandoDensidadePopulaciona2 = populacao2 / area2;

    

    // Menu do jogo super trunfo
    printf("***Jogo do super trunfo*** \n");
    printf("***Escolha um atributo do pais que deseja comparam*** \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    
    int opcao;
    scanf("%d",&opcao);


    switch (opcao)
    {
        case 1:
            printf("%s e %s\n", &pais, &pais2);
            if (populacao > populacao2)
            {
               printf("O atributo escolhido foi população: \n");
               printf("A populacão do primeiro pais é: %d: A população do segundo pais é: %d \n",populacao ,populacao2);
               printf("O pais da primeira carta venceu:\n");
            }
            else if (populacao2 > populacao)
            {
               
               printf("O atributo escolhido foi população:\n");
               printf("A populacão do primeiro pais é %d: A população do segundo pais é: %d \n",populacao ,populacao2);
               printf("O pais da segunda carta venceu:\n");
            }else
            {
                printf("Empate!\n");
            }
            
            
            
        break;

        case 2:
            printf("%s e %s\n", &pais, &pais2);
            if (area > area2)
            {
                printf("O atributo escolhido foi Area:\n");
                printf("A area do primeiro pais e:%.2f A area do segundo pais e:%.2f \n", area , area2);
                printf("O pais da primeira carta venceu:\n");
            }else if (area2 > area)
            {
                printf("O atributo escolhido foi Area:\n");
                printf("A area do primeiro pais e:%.2f A area do segundo pais e:%.2f \n", area , area2);
                printf("O pais da segunda carta venceu:\n");
            }else
            {
                 printf("Empate!\n");
            }
            
            
            
        break;

        case 3:
            printf("%s e %s\n", &pais, &pais2);
            if (pib > pib2)
            {
                printf("O atributo escolhido foi PIB:\n");
                printf("O PIB do primeiro pais e:%.2f O PIB do segundo pais e:%.2f \n", pib , pib2);
                printf("O pais da primeira carta venceu:\n");

            }else if (pib2 > pib)
            {
                printf("O atributo escolhido foi PIB:\n");
                printf("O PIB do primeiro pais e:%.2f O PIB do segundo pais e:%.2f \n", pib , pib2);
                printf("O pais da segunda carta venceu:\n");
            }else
            {
                printf("Empate!\n");
            }
            
        break;


        case 4:
             printf("%s e %s\n", &pais, &pais2);
             if (numerodepontosturisticos > numerodepontosturisticos2)
             {
               printf("O atributo escolhido foi Número de pontos turísticos:\n");
               printf("O Número de pontos turísticos do primeiro pais e:%d O Número de pontos turísticos do segundo pais e:%d \n", numerodepontosturisticos, numerodepontosturisticos2);
               printf("O pais da primeira carta venceu:\n");

             }else if (numerodepontosturisticos2 > numerodepontosturisticos)
             {
               printf("O atributo escolhido foi Número de pontos turísticos:\n");
               printf("O Número de pontos turísticos do primeiro pais e:%d O Número de pontos turísticos do segundo pais e:%d \n", numerodepontosturisticos, numerodepontosturisticos2);
               printf("O pais da segunda carta venceu:\n");

             }else
             {
                printf("Empate!\n");
             }
             
        break;

        case 5:
              printf ("%s e %s\n", &pais, &pais2);
              if (calculandoDensidadePopulacional < calculandoDensidadePopulaciona2)
              {
               printf("O atributo escolhido foi Densidade demográfica:\n");
               printf("Densidade demográfica do primeiro pais e:%.2f O Número Densidade demográfica do segundo pais e:%.2f \n",calculandoDensidadePopulacional, calculandoDensidadePopulaciona2);
               printf("O pais da primeira carta venceu:\n");

              }else if (calculandoDensidadePopulaciona2 < calculandoDensidadePopulacional)
              {
               printf("O atributo escolhido foi Densidade demográfica:\n");
               printf("Densidade demográfica do primeiro pais e:%.2f O Número Densidade demográfica do segundo pais e:%.2f \n",calculandoDensidadePopulacional,calculandoDensidadePopulaciona2);
               printf("O pais da segunda carta venceu:\n");
              }else
              {
               printf("Empate!\n");
              }
              
              
              
            break;

            default:
             printf("Opção invalida");
            break;
    }
    return 0;
}