/*O agrupamento de duas ou mais consoantes, sem vogal intermediária, recebe o nome
de encontro consonantal.
Escreva um programa em C, que leia uma string de até 256 caracteres, conte e imprima o
número de encontros consonantais identificados na string.
Por exemplo, na string “O istmo de Stradun não fica no Brasil”. O programa deverá imprimir o
valor 3.*/
#include <stdio.h>
#define TAM 256

int main(){
    char string[TAM], naoconsoantes[11] = {"aeiouAEIOU "};
    int icount, jcount, consoante = 0, casos = 0;

    printf("Insira a String\n");

    fgets(string,TAM,stdin);

    for(icount = 0;string[icount] != '\n';icount++){
        consoante += 1;
        for(jcount = 0; jcount < 11;jcount++)
            if(string[icount] == naoconsoantes[jcount])
                consoante = 0;
        if(consoante == 2){
        casos++;
        }
    }
        printf("Casos: %d",casos);
    
    return 0;
}