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
