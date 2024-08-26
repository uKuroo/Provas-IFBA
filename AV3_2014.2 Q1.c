/*Na matemática, na álgebra linear, uma matriz de permutação é uma matriz quadrada binária
que tem o efeito de gerar uma permutação dos elementos de um vetor ou entre linhas ou
colunas de uma matriz. É formada apenas de zeros e uns, sendo o valor de apenas um
elemento por linha e por coluna que igual a um.*/
#include <stdio.h>
#define TAM 10

int main(){
    int matriz[TAM][TAM], linha, coluna, vlinha, vcoluna;
    int verificador = 0;
    
    printf("Insira os valores da matriz %d x %d\n", TAM, TAM);
    
    for(linha = 0;linha < TAM;linha++)
        for(coluna = 0;coluna < TAM;coluna++){
            scanf("%d",&matriz[linha][coluna]);
            if(matriz[linha][coluna] > 1)
                verificador++;
        }
    if(verificador > 0){
        printf("Nao e matriz de permutacao.\n");
    }else{
        for(linha=0;linha<TAM;linha++)
            for(coluna=0;coluna<TAM;coluna++){
                if(matriz[linha][coluna] == 1){
                    matriz[linha][coluna] = 0;
                    for(vlinha = 0; vlinha<TAM;vlinha++)
                        if(matriz[vlinha][coluna] == 1)
                            verificador++;
                    for(vcoluna = 0; vcoluna<TAM;vcoluna++)
                        if(matriz[linha][vcoluna] == 1)
                            verificador++;
            }
        }
    if(verificador > 0)
        printf("Nao e matriz de permutacao.\n");
    if(verificador == 0)
        printf("Eh matriz de permutacao.\n");
    }

    return 0;
}