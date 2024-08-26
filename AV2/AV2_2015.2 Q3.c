/*Bruninho está programando um personagem virtual para o próximo desafio de um jogo
de aventura em que, numa das fases, o personagem tem que entrar em um corredor,
percorrer algumas salas e depois sair do corredor. Ele pode entrar apenas uma vez, e
passar por cada sala apenas uma vez. Todas as salas possuem uma porta de entrada e
uma de saída. Ao passar por uma sala o jogador ganha um certo número de vidas (que
pode ser negativo!). O objetivo é passar pelo corredor coletando a maior quantidade
possível de vidas! Por sorte, sempre existe ao menos uma sala onde se ganha um
número positivo de vidas.*/
#include <stdio.h>
#define TAM 10
int main()
{
    int sala[TAM], icount, max = 0, vidas = 0, entrada, saida, entradafinal, saidafinal;
    
    printf("Insira as vidas das salas\n");
    for(icount=0; icount<TAM; icount++){
        scanf("%d",&sala[icount]);
    }
    
    for(entrada=0; entrada<TAM; entrada++){
        vidas = sala[entrada];
        for(saida=entrada+1 ;saida<TAM ;saida++){
            vidas+=sala[saida];
            if(vidas > max){
                max = vidas;
                entradafinal = entrada;
                saidafinal = saida;
            }
        }
    }
    
    printf("Maximo de vidas: %d\nEntrada: %d / Saida: %d", max, entradafinal+1, saidafinal+1);

    return 0;
}