#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // ===== carta01 =======

    char EstadoA;
    char codigoA[4];
    char nomeA[50];
    int populacaoA, nPontosTuristicosA;
    float areaA, pibA, densidadePopulacionalA, pibCapita;

    // ===== carta02 =======

    char EstadoB;
    char codigoB[4];
    char nomeB[50];
    int populacaoB, nPontosTuristicosB;
    float areaB, pibB, densidadePopulacionalB, pibCapitaB;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // inicio da infomações da carta 1
    printf("Inform o estado: \n");
    scanf("%c", &EstadoA);

    printf("Informe o codigo: \n");
    scanf(" %s", codigoA);

    printf("Informe o nome: \n");
    scanf(" %s", nomeA);

    printf("Informe o numero populacional: \n");
    scanf(" %d", &populacaoA);

    printf("Informe o numero de pontos turisticos: \n");
    scanf(" %d", &nPontosTuristicosA);

    printf("Informe qua a area quatrada da região \n");
    scanf(" %f", &areaA);

    printf("Informe o PIB da região: \n");
    scanf(" %f", &pibA);

    densidadePopulacionalA = populacaoA / areaA;
    pibCapita = pibA / populacaoA;

    // fim das infomaçoes da carta 1

    // inicio das informações da carta 2

    printf("Inform o estado: \n");
    scanf(" %c", &EstadoB);

    printf("Informe o codigo: \n");
    scanf(" %s", codigoB);

    printf("Informe o nome: \n");
    scanf(" %s", nomeB);

    printf("Informe o numero populacional: \n");
    scanf(" %d", &populacaoB);

    printf("Informe o numero de pontos turisticos: \n");
    scanf(" %d", &nPontosTuristicosB);

    printf("Informe qua a area quatrada da região \n");
    scanf(" %f", &areaB);

    printf("Informe o PIB da região: \n");
    scanf(" %f", &pibB);

    densidadePopulacionalB = populacaoB / areaB;
    pibCapitaB = pibB / populacaoB;

    // fim das informações da carta 2

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.

    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int opcao;

    printf("=================================\n");
    printf("      SUPER TRUNFO - MENU\n");
    printf("=================================\n");

    printf(" 1 - Numero  população \n");
    printf(" 2 - Aréa do municipio \n");
    printf(" 3 - Numeros de Pontos Turisticos \n");
    printf(" 4 - PIB \n");
    printf(" 5 - Densidade populacional \n");
    printf(" 6 - PIB per Capita \n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O atriboto escolheido foi numero populacional da cidade. \n");
        if (populacaoA > populacaoB)
        {
            printf(" Catart 01 Venceu!!! com o codigo: %s \n\n\n", codigoA);

            printf("\nEstado: %c\n", EstadoA);
            printf("Codigo: %s\n", codigoA);
            printf("Nome: %s\n", nomeA);
            printf("Populacao: %d\n", populacaoA);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosA);
            printf("Area: %.2f\n", areaA);
            printf("PIB: %.2f\n", pibA);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalA);
            printf("PIB per Capita: %.2f\n\n\n", pibCapita);
        }
        else if (populacaoA < populacaoB)
        {
            printf(" Catart 01 Venceu!!! codigo: %s \n\n\n", codigoB);
            printf("\nEstado: %c\n", EstadoB);
            printf("Codigo: %s\n", codigoB);
            printf("Nome: %s\n", nomeB);
            printf("Populacao: %d\n", populacaoB);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosB);
            printf("Area: %.2f\n", areaB);
            printf("PIB: %.2f\n", pibB);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalB);
            printf("PIB per Capita: %.2f\n\n\n", pibCapitaB);
        }
        else
        {
            printf(" Teu empate!!! \n");
        }
        break;

    case 2:
        printf("O atriboto escolheido foi aréa em metros quatrados. \n");
        if (areaA > areaB)
        {
            printf(" Catart 01 Venceu!!! com o codigo: %s \n\n\n", codigoA);

            printf("\nEstado: %c\n", EstadoA);
            printf("Codigo: %s\n", codigoA);
            printf("Nome: %s\n", nomeA);
            printf("Populacao: %d\n", populacaoA);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosA);
            printf("Area: %.2f\n", areaA);
            printf("PIB: %.2f\n", pibA);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalA);
            printf("PIB per Capita: %.2f\n\n\n", pibCapita);
        }
        else if (areaA < areaB)
        {
            printf(" Catart 01 Venceu!!! codigo: %s \n\n\n", codigoB);
            printf("\nEstado: %c\n", EstadoB);
            printf("Codigo: %s\n", codigoB);
            printf("Nome: %s\n", nomeB);
            printf("Populacao: %d\n", populacaoB);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosB);
            printf("Area: %.2f\n", areaB);
            printf("PIB: %.2f\n", pibB);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalB);
            printf("PIB per Capita: %.2f\n\n\n", pibCapitaB);
        }
        else
        {
            printf(" Teu empate!!! \n");
        }

        break;
    case 3:

        printf("O atriboto escolheido foi o numeros de pontos turisticos. \n");
        if (nPontosTuristicosA > nPontosTuristicosB)
        {
            printf(" Catart 01 Venceu!!! com o codigo: %s \n\n\n", codigoA);

            printf("\nEstado: %c\n", EstadoA);
            printf("Codigo: %s\n", codigoA);
            printf("Nome: %s\n", nomeA);
            printf("Populacao: %d\n", populacaoA);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosA);
            printf("Area: %.2f\n", areaA);
            printf("PIB: %.2f\n", pibA);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalA);
            printf("PIB per Capita: %.2f\n\n\n", pibCapita);
        }
        else if (nPontosTuristicosA < nPontosTuristicosB)
        {
            printf(" Catart 01 Venceu!!! codigo: %s \n\n\n", codigoB);
            printf("\nEstado: %c\n", EstadoB);
            printf("Codigo: %s\n", codigoB);
            printf("Nome: %s\n", nomeB);
            printf("Populacao: %d\n", populacaoB);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosB);
            printf("Area: %.2f\n", areaB);
            printf("PIB: %.2f\n", pibB);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalB);
            printf("PIB per Capita: %.2f\n\n\n", pibCapitaB);
        }
        else
        {
            printf(" Teu empate!!! \n");
        }

        break;

    case 4:
        printf("O atriboto escolheido foi o PIB. \n");
        if (pibA > pibB)
        {
            printf(" Catart 01 Venceu!!! com o codigo: %s \n\n\n", codigoA);

            printf("\nEstado: %c\n", EstadoA);
            printf("Codigo: %s\n", codigoA);
            printf("Nome: %s\n", nomeA);
            printf("Populacao: %d\n", populacaoA);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosA);
            printf("Area: %.2f\n", areaA);
            printf("PIB: %.2f\n", pibA);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalA);
            printf("PIB per Capita: %.2f\n\n\n", pibCapita);
        }
        else if (pibA < pibB)
        {
            printf(" Catart 01 Venceu!!! codigo: %s \n\n\n", codigoB);
            printf("\nEstado: %c\n", EstadoB);
            printf("Codigo: %s\n", codigoB);
            printf("Nome: %s\n", nomeB);
            printf("Populacao: %d\n", populacaoB);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosB);
            printf("Area: %.2f\n", areaB);
            printf("PIB: %.2f\n", pibB);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalB);
            printf("PIB per Capita: %.2f\n\n\n", pibCapitaB);
        }
        else
        {
            printf(" Teu empate!!! \n");
        }

        break;

    case 5:
        printf("O atriboto escolheido foi o numeros de pontos turisticos. \n");
        if (densidadePopulacionalA > densidadePopulacionalB)
        {
            printf(" Catart 01 Venceu!!! com o codigo: %s \n\n\n", codigoA);

            printf("\nEstado: %c\n", EstadoA);
            printf("Codigo: %s\n", codigoA);
            printf("Nome: %s\n", nomeA);
            printf("Populacao: %d\n", populacaoA);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosA);
            printf("Area: %.2f\n", areaA);
            printf("PIB: %.2f\n", pibA);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalA);
            printf("PIB per Capita: %.2f\n\n\n", pibCapita);
        }
        else if (densidadePopulacionalA < densidadePopulacionalB)
        {
            printf(" Catart 01 Venceu!!! codigo: %s \n\n\n", codigoB);
            printf("\nEstado: %c\n", EstadoB);
            printf("Codigo: %s\n", codigoB);
            printf("Nome: %s\n", nomeB);
            printf("Populacao: %d\n", populacaoB);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosB);
            printf("Area: %.2f\n", areaB);
            printf("PIB: %.2f\n", pibB);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalB);
            printf("PIB per Capita: %.2f\n\n\n", pibCapitaB);
        }
        else
        {
            printf(" Teu empate!!! \n");
        }

        break;
    case 6:
        printf("O atriboto escolheido foi a Densidade populacional. \n");
        if (pibCapita > pibCapitaB)
        {
            printf(" Catart 01 Venceu!!! com o codigo: %s \n\n\n", codigoA);

            printf("\nEstado: %c\n", EstadoA);
            printf("Codigo: %s\n", codigoA);
            printf("Nome: %s\n", nomeA);
            printf("Populacao: %d\n", populacaoA);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosA);
            printf("Area: %.2f\n", areaA);
            printf("PIB: %.2f\n", pibA);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalA);
            printf("PIB per Capita: %.2f\n\n\n", pibCapita);
        }
        else if (pibCapita < pibCapitaB)
        {
            printf(" Catart 01 Venceu!!! codigo: %s \n\n\n", codigoB);
            printf("\nEstado: %c\n", EstadoB);
            printf("Codigo: %s\n", codigoB);
            printf("Nome: %s\n", nomeB);
            printf("Populacao: %d\n", populacaoB);
            printf("Pontos Turisticos: %d\n", nPontosTuristicosB);
            printf("Area: %.2f\n", areaB);
            printf("PIB: %.2f\n", pibB);
            printf("Densidade Populacional: %.2f\n", densidadePopulacionalB);
            printf("PIB per Capita: %.2f\n\n\n", pibCapitaB);
        }
        else
        {
            printf(" Teu empate!!! \n");
        }

        break;

    default:
    printf("Opçõ invalida\n");
        break;
    }

    return 0;
}
