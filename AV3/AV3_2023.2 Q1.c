/*As prateleiras serão representadas por "#" e a parede por ".". Só existem prateleiras nas
linhas pares e elas nunca encostam na borda da parede. Há apenas um ponto de vazamento
representado pelo caractere " o" na primeira linha.
.......o......
.###...####.#.
..............
..######......
..............
.#.####....##.
..............
.....####.....
..............
Você deve escrever um programa, que leia uma matriz de N linhas e M colunas (no exemplo, 9 linhas
e 14 colunas), representando o padrão inicial da parede, prateleiras e ponto de início do gotejamento.
O programa deve gerar e imprimir a representação do padrão final de gotejamento preenchendo com
“o”, as posições que serão atingidas pela água ao final do processo, como ilustrado acima.
   *Caso queira testar, entre com: ".......o.......###...####.#.................######.....................#.####....##....................####..................."
*/
#include <stdio.h>
#define l_max 9
#define c_max 14

int main(){
    char string[l_max][c_max];
    int linha, coluna, icount;

    for(linha = 0;linha < l_max;linha++)
        for(coluna = 0;coluna < c_max; coluna++)
            scanf("%c",&string[linha][coluna]);
    printf("\n");
    for(icount = 0;icount < (c_max + l_max);icount++)
        for(linha = 0;linha < l_max;linha++)
            for(coluna = 0; coluna < c_max;coluna++)
                if(string[linha][coluna] == '.'){
                    if(string[linha - 1][coluna] == 'o') string[linha][coluna] = 'o';
                    if(string[linha][coluna - 1] == 'o' && string[linha + 1][coluna - 1] == '#') string[linha][coluna] = 'o';
                    if(string[linha][coluna + 1] == 'o' && string[linha + 1][coluna + 1] == '#') string[linha][coluna] = 'o';}

    for(linha = 0;linha < l_max;linha++){
        for(coluna = 0; coluna < c_max;coluna++)
            printf("%c",string[linha][coluna]);
        printf("\n");
    }
    
    return 0;
}