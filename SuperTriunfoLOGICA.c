#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    int escolhaJogador;
    int escolhaJogador2;
    int resultadoBatalha1;
    int resultadoBatalha2;
    //Saudações inciais do jogo

    printf("Bem-vindo ao SUPERTRIUNFO!\n");
    printf("Você está prestes a embarcar em uma jornada épica no nosso jogo de cartas.\n");
    printf("Para começar, precisaremos que você e seu amigo(a) que irá batalhar cadastre uma carta com o tema PAÍSES.\n");
    printf("Que farão parte da sua trajetória no jogo.\n");
    printf("Mas não se preocupe, vou guiá-los pelo processo com algumas perguntas rápidas!\n\n");


    // Pegando os dados da carta1

    printf("Primeiro passo seria você me dizer um nome de alguma cidade,\n");
    printf("lembrando que seu amiguinho(a) não pode ver sua carta, vamos lá:\n");
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
    printf("Vamos agora pra carta do seu amigo(a).\n\n");

    // Pegando os dados da carta2

printf("Primeiro passo seria você me dizer um nome de alguma cidade,\n");
    printf("lembrando que seu amiguinho(a) não pode ver sua carta, vamos lá:\n");
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
    printf("Agora chegou a hora de saber quem conseguiu escolher a melhor carta para batalhar...\n");
    printf("Bora batalhar!\n\n");

    //Comparando as cartas
    //Imprimindo o resultado das comparações

    printf("Comparação das cartas:\n\n");

    printf("Escolha o atributo que queiram batalhar:\n\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade populacional.\n");
    printf("6. PIB per capita.\n");
    printf("7. Super poder.\n");
    printf("Faça sua escolha: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador){
    
        case 1:
    
    printf("Você escolheu População\n\n");
        resultadoBatalha1 = populacao > populacao2 ? 1 : 0;
    break;
    
    case 2:

    printf("Você escolheu Área\n\n");
        resultadoBatalha1 = area > area2 ? 1 : 0;
    break;

    case 3:

    printf("Você escolheu PIB\n\n");
        resultadoBatalha1 = pib > pib2 ? 1 : 0;
    break;

    case 4:

    printf("Você escolheu Pontos turísticos\n\n");
        resultadoBatalha1 = turisticos > turisticos2 ? 1 : 0;
    break;

    case 5:
    
    printf("Você escolheu Densidade Populacional\n\n");
        resultadoBatalha1 = densidade < densidade2 ? 1 : 0;
    break;

    case 6:
    printf("Você escolheu PIB per capita\n\n");
        resultadoBatalha1 = pibpercapita > pibpercapita2 ? 1 : 0;
    break;

    case 7:

    printf("Você escolheu Super poder\n\n");
        resultadoBatalha1 = superpoder > superpoder2 ? 1 : 0;
    break;
    
    default:
        printf("### Opção inválida! ###\n\n");
        break;
    }



    printf("Escolha outro atributo que queiram batalhar:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade populacional.\n");
    printf("6. PIB per capita.\n");
    printf("7. Super poder.\n");
    printf("Faça sua escolha: ");
    scanf("%d", &escolhaJogador2);

    if (escolhaJogador == escolhaJogador2)
    {
        printf("Você escolheu o mesmo atributo!\n\n");
    } else {
    
    switch (escolhaJogador2){
    
        case 1:
    
    printf("Você escolheu População\n\n");
        resultadoBatalha2 = populacao > populacao2 ? 1 : 0;
    break;
    
    case 2:

    printf("Você escolheu Área\n\n");
        resultadoBatalha2 = area > area2 ? 1 : 0;
    break;

    case 3:

    printf("Você escolheu PIB\n\n");
        resultadoBatalha2 = pib > pib2 ? 1 : 0;
    break;

    case 4:

    printf("Você escolheu Pontos turísticos\n\n");
        resultadoBatalha2 = turisticos > turisticos2 ? 1 : 0;
    break;

    case 5:
    
    printf("Você escolheu Densidade Populacional\n\n");
        resultadoBatalha2 = densidade < densidade2 ? 1 : 0;
    break;

    case 6:
    printf("Você escolheu PIB per capita\n\n");
        resultadoBatalha2 = pibpercapita > pibpercapita2 ? 1 : 0;
    break;

    case 7:

    printf("Você escolheu Super poder\n\n");
        resultadoBatalha2 = superpoder > superpoder2 ? 1 : 0;
    break;
    
    default:
        printf("### Opção inválida! ###\n\n");
        break;
    }
}

    printf("As cartas de batalha foram:\n\n");

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

    printf("E assim o campeão das batalhas foi:\n\n");

    if (resultadoBatalha1 && resultadoBatalha2)
    {
        printf("Parabéns, Carta 1 venceu o jogo!\n");
    }else if (resultadoBatalha1 != resultadoBatalha2)
    {
        printf("O jogo Empatou!\n");
    } else
    {
        printf("Parabéns, Carta 2 venceu o jogo!\n");
    }
    
    
    
        return 0;

}