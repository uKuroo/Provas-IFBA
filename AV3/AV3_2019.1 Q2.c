/*Em alguns lugares é comum lembrar um número do telefone associando seus dígitos a letras.
Dessa maneira a expressão MY LOVE significa 69 5683. Claro que existem alguns problemas,
uma vez que alguns números de telefone não formam uma palavra ou uma frase e os dígitos 1 e
0 não estão associados a nenhuma letra.*/
#include <stdio.h>
#define TAM 50

int main(){
    char string[TAM];
    int icount;

    printf("Insira a string\n");
    fgets(string,TAM,stdin);

    for(icount = 0; string[icount] != '\0';icount++){
        if(string[icount] >= 'A' && string[icount] <= 'C') string[icount] = '2';
        if(string[icount] >= 'D' && string[icount] <= 'F') string[icount] = '3';
        if(string[icount] >= 'G' && string[icount] <= 'I') string[icount] = '4';
        if(string[icount] >= 'J' && string[icount] <= 'L') string[icount] = '5';
        if(string[icount] >= 'M' && string[icount] <= 'O') string[icount] = '6';
        if(string[icount] >= 'P' && string[icount] <= 'S') string[icount] = '7';
        if(string[icount] >= 'T' && string[icount] <= 'V') string[icount] = '8';
        if(string[icount] >= 'W' && string[icount] <= 'Z') string[icount] = '9';
    }
    puts(string);
    
    return 0;
}