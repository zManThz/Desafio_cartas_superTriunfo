#include <stdio.h>

int main(){

    //Tipos e variaveis das cartas

    char estado;
    char estado2;
    char codigo[50];
    char codigo2[50];
    char cidade[50];
    char cidade2[50];
    int populacao;
    int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int turisticos;
    int turisticos2;
    float densidade;
    float densidade2;
    float pibpercapita;
    float pibpercapita2;
    float superpoder;
    float superpoder2;
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosturisticos;
    int resultadoDensidade;
    int resultadoPibpercapita;
    int resultadoSuperpoder;

    //Saudações inciais do jogo

    printf("Bem-vindo ao SUPERTRIUNFO!\n");
    printf("Você está prestes a embarcar em uma jornada épica no nosso jogo de cartas.\n");
    printf("Para começar, precisaremos que você cadastre duas cartas com o tema PAÍSES\n");
    printf("que farão parte da sua trajetória no jogo.\n");
    printf("Mas não se preocupe, vou guiá-lo pelo processo com algumas perguntas rápidas!\n\n");


    // Pegando os dados da carta1

    printf("Primeiro passo seria você me dizer um nome de alguma cidade, vamos lá:\n");
        scanf("%s", &cidade);
    printf("Perfeito! Me fale agora a PRIMEIRA letra do estado dessa cidade:\n");
        scanf(" %c", &estado);
    printf("Isso ai! Qual a população dessa cidade\n");
        scanf("%d", &populacao);
    printf("Legal!! Preciso saber agora a ÁREA (em km²) dessa cidade:\n");
        scanf("%f", &area);
    printf("Shoow! Estamos quase acabando, preciso do PIB dessa cidade agora:\n");
        scanf("%f", &pib);
    printf("Ok! Agora me fala o número de pontos turísticos dessa cidade:\n");
        scanf("%d", &turisticos);
    printf("Pra finalizar, crie um código para sua carta usando a LETRA DO ESTADO seguida de um numero de 01 a 04 (ex: A01, A02...)\n");
        scanf("%s", &codigo);
    printf("Ok!\n\n");

    printf("Sua primeira carta foi criada com sucesso!!\n");
    printf("Vamos agora pra sua segunda carta.\n\n");

    // Pegando os dados da carta2

printf("Primeiro passo seria você me dizer um nome de alguma cidade, vamos lá:\n");
    scanf("%s", &cidade2);
printf("Perfeito! Me fale agora a PRIMEIRA letra do estado dessa cidade:\n");
    scanf(" %c", &estado2);
printf("Isso ai! Qual a população dessa cidade\n");
    scanf("%d", &populacao2);
printf("Legal!! Preciso saber agora a ÁREA (em km²) dessa cidade:\n");
    scanf("%f", &area2);
printf("Shoow! Estamos quase acabando, preciso do PIB dessa cidade agora:\n");
    scanf("%f", &pib2);
printf("Ok! Agora me fala o número de pontos turísticos dessa cidade:\n");
    scanf("%d", &turisticos2);
printf("Pra finalizar, crie um código para sua carta usando a LETRA DO ESTADO seguida de um numero de 01 a 04 (ex: A01, A02...). Lembrando que esse código deve ser diferente da primeira carta!\n");
    scanf("%s", &codigo2);
printf("Ok!\n\n");

    //Calculando Densidade populacional das duas cartas
        densidade = populacao / area;
        densidade2 = populacao2 / area2;
    //Calculando o PIB per capita das duas cartas
        pibpercapita = pib / populacao;
        pibpercapita2 = pib2 / populacao2;

    //Calculando o super poder da carta 1

        superpoder = populacao + area + pib + turisticos + (1 / densidade);
        superpoder2 = populacao2 + area2 + pib2 + turisticos2 + (1 / densidade2);

    printf("Parabéns!!!\n");
    printf("Suas cartas foram criadas com sucesso!\n");
    printf("Cada carta tem um toque único e só depende de você para explorá-las ao máximo!\n");
    printf("Veja as cartas incríveis que você criou\n\n\n");

    // Imprimindo os dados fornecidos da carta1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %f\n", densidade);
    printf("PIB per Capita: %f\n", pibpercapita);
    printf("Seu super poder é: %f\n\n", superpoder);

    // Imprimindo os dados fornecidos da carta2

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", pibpercapita2);
    printf("Seu super poder é: %f\n\n", superpoder2);

    //Comparando as cartas

    resultadoPopulacao = populacao > populacao2;
    resultadoArea = area > area2;
    resultadoPib = pib > pib2;
    resultadoPontosturisticos = turisticos > turisticos2;
    resultadoDensidade = densidade < densidade2;
    resultadoPibpercapita = pibpercapita > pibpercapita2;
    resultadoSuperpoder = superpoder > superpoder2;

    //Imprimindo o resultado das comparações

    printf("Comparação das cartas:\n\n");
    
    printf("População: %d\n", resultadoPopulacao);
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos Turísticos: %d\n", resultadoPontosturisticos);
    printf("Densidade Populacional: %d\n", resultadoDensidade);
    printf("PIB per Capita: %d\n", resultadoPibpercapita);
    printf("Super Poder: %d\n\n", resultadoSuperpoder);

        return 0;

}