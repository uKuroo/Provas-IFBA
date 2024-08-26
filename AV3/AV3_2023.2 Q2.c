/*Palavras como “Belo”, “fiNo”, “CrUz” e “FLor” possuem a interessante propriedade
de que suas letras aparecem todas em ordem alfabética. Por exemplo, em “FLor”, F vem antes de L
no alfabeto, L vem antes de o, e o vem antes de r. Dizemos que palavras com essa propriedade são
ordenadas.
Escreva um programa em C, que leia uma palavra e determine se ela é uma palavra ordenada.*/
#include <stdio.h>
#define string 256

int main()
{
    int icount, ordem = 0;
    char palavra[string];

    printf("Bota a palavra ai bro namoral\n");
    fgets(palavra,256,stdin);

    for(icount = 0;palavra[icount] != '/n' && palavra[icount] != '\0';icount++){
        if(palavra[icount] >= 'A' && palavra[icount] <= 'Z')
            palavra[icount]+=32;
    }

    for(icount=0;palavra[icount + 1]!='\n';icount++){
        if(palavra[icount] > palavra[icount+1])
            ordem++;
    }

    if(ordem > 0){
        printf("Palavra desordenada.");
    }else{
        printf("Palavra esta ordenada.");
    }

    return 0;
}
