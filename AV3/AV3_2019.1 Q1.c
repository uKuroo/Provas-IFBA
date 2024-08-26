/*Uma faixa de letras é um conjunto de letras minúsculas alfabeticamente consecutivas tomadas
de 'a' até 'z'. A menor e maior letras da faixa, separadas por dois pontos (o caractere ':'), são
usadas para representar a faixa de letras. Por exemplo, a faixa "a:c" representa as letras
consecutivas 'a', 'b' e 'c'. (as aspas não fazem parte da faixa). A faixa "w:z" representa as letras
'w', 'x', 'y' e 'z'. A faixa "m:m" representa apenas a letra 'm'. 
Escreva um programa em C, que leia
uma string composta por letras minúsculas e espaços em branco e imprima as faixas de letras
que a compõe, ordenadas alfabeticamente pelo menor valor de cada faixa. Faixas de letras a
serem impressas devem representar a maior sequência possível de letras de entrada em ordem
crescente. Ignore espaços e letras duplicadas contidas na entrada.
Por exemplo, a string "iron maiden" tem cinco faixas de letras, "a:a" (a letra 'a'), "d:e" (as letras
'd' e 'e'), "i:i" (a letra 'i'), "m:o" (as letras 'm', 'n' e 'o') e "r:r" (a letra 'x'). Assim a saída do
programa deveria ser: "a:a d:e i:i m:o r:r".*/

#include <stdio.h>
#define string 50

int main(){
    char frase[string],ordem[string], faixa[4],aux;
    int icount, jcount,primeiro,ultimo,tam=0;
    
    printf("Insira uma frase com apenas letras minusculas e espacos\n");
    fgets(frase,50,stdin);

    for(jcount=0;jcount < 50;jcount++){
        for(icount=0;frase[icount+1] != '\n';icount++){
                if(frase[icount] > frase[icount+1]){
                aux = frase[icount + 1];
                frase[icount + 1] = frase[icount];
                frase[icount] = aux;
            }
        }
    }
    for(icount=0,jcount=0;frase[icount] != '\0';icount++){
        if(frase[icount] >= 'a' && frase[icount] <= 'z'){
            ordem[jcount] = frase[icount];
            jcount++;tam++;
        }
    }

    for(icount = 0; icount < tam;icount++){
        if(ordem[icount +1] <= ordem[icount]+1 && icount < tam - 1){
            primeiro=ordem[icount];
        while(ordem[icount +1] <= ordem[icount]+1)
            icount++;
            ultimo = ordem[icount];
            faixa[0] = primeiro; faixa[1] = ':'; faixa[2] = ultimo; faixa[3] = ' ';
            puts(faixa);
        }else{
            primeiro = ordem[icount]; ultimo = primeiro;
            faixa[0] = primeiro; faixa[1] = ':'; faixa[2] = ultimo; faixa[3] = ' ';
            puts(faixa);
        }
    }

    return 0;
}