#include <stdio.h>
#define TAM 10

int main()
{
    int valor[TAM], icount, soma=0;
    printf("Insira os valores\n");
    for(icount = 0; icount < TAM && valor[icount] > -1; icount++){
        scanf("%d",&valor[icount]);
        if(valor[icount] < 0){
            for(;icount < TAM;icount++)
                valor[icount] = -1;
        }
            
    }
    for(icount = 0; icount < TAM; icount++){
        if(valor[icount] == 0){
            valor[icount] = -1;
                for(; icount >= 0; icount--){
                    if(valor[icount] > 0){
                        valor[icount] = -1;
                        break;
                }
            }
        }
    }
    for(icount = 0; icount < TAM; icount++){
        if(valor[icount] > 0){
            printf("%d ",valor[icount]);
            soma+=valor[icount];
        }
    }
    printf("\nSoma: %d",soma);
        
    return 0;
}
