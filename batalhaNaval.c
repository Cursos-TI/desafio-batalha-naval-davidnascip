#include <stdio.h>
 
int Tabuleiro[10][10];

int main() {
    int Tabuleiro[10][10];

    printf("  TABULEIRO BATALHA NAVAL\n");
    printf("  A\t B\t C\t D\t E\t F\t G\t H\t I\t J\n");
    
    //Loop para percorrer colunas
    for (int i = 0; i < 10; i++){
        printf("%d", i);

        //Loop para preencher valores de linhas
        for (int j = 0; j < 10; j++){
            Tabuleiro[i][j] = 0;
        
        
            //Posiocionamento do navio vertical
            for (int i = 3; i < 6; i++){
                Tabuleiro[i][6] = 3;
                }
        
            //Posicionamento do navio horizontal
            for (int j = 1; j < 4; j++){
                Tabuleiro[4][j] = 3;
                }

            printf(" %d\t", Tabuleiro[i][j]);
            }
        printf("\n");    
    }

    return 0;
}