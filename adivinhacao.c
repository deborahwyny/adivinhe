#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    // boas vindas ao jogo

    printf("   /\\                                                       /\\\n");
    printf("  |  |                                                      |  |\n");
    printf(" /----\\                                                   /----\\\n");
    printf("[______]         Bem-vindo ao jogo de Adivinhação          [______]\n");
    printf(" |    |         _____                        _____         |    |\n");
    printf(" |[]  |        [     ]                      [     ]        |  []|\n");
    printf(" |    |       [_______][ ][ ][ ][][ ][ ][ ][_______]       |    |\n");
    printf(" |    [ ][ ][ ]|     |  ,----------------,  |     |[ ][ ][ ]    |\n");
    printf(" |             |     |/'    ____..____    '\\|     |             |\n");
    printf("  \\  []        |     |    /'    ||    '\\    |     |        []  /\n");
    printf("   |      []   |     |   |o     ||     o|   |     |  []       |\n");
    printf("   |           |  _  |   |     _||_     |   |  _  |           |\n");
    printf("   |   []      | (_) |   |    (_||_)    |   | (_) |       []  |\n");
    printf("   |           |     |   |     (||)     |   |     |           |\n");
    printf("   |           |     |   |      ||      |   |     |           |\n");
    printf(" /''           |     |   |o     ||     o|   |     |           ''\\\n");
    printf("[_____________[_______]--'------''------'--[_______]_____________]\n");


//gerador de numero aleatorios

    srand((unsigned)time(NULL));
    int random_number = rand() % 101;



// chute do usuario e escolha de leve
    int guess;
    int level;

    printf("Escolha a dificuldade do seu jogo: \n");
    printf("(1) Facíl (2) Médio (3) Difícil\n\n");
    printf("Escolha: \n");
    scanf("%i", &level);

    if(level == 1){
        level = 16;
    } else if(level==2){
        level = 10;
    }else{
        level = 6;
    }

    printf("Número secreto gerado! Tente adivinhar.\n");


//loop com as logicas

     for(int i = 1; i <= level; i++){
        printf("Qual é o seu chute? \n");
        scanf("%i", &guess );

        int right = guess == random_number;
        int bigger = guess>random_number;

        if(guess<0){
            printf("Você não deve chutar numeros negativos!\n");
            i--;
            continue;
        }

        if(right){
            printf("Parabens, você acertou!\n");
            printf("Jogue novamente, você é um bom jogador!!\n");
           break;

        }else if(bigger){
            printf("O seu chute é maior que o número secreto.\n");
        } else {
            printf("O seu chute é menor que o número secreto.\n");
            printf("Mas não desanime, tente de novo :)\n");
            }



        }


        
    }
    




   
