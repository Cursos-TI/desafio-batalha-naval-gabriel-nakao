#include <stdio.h>

int coord1N1, coord2N1, coord1N2, coord2N2;
//Declaração Tabuleiros
int tabuleiroN [10][10]; // Declaração tabuleiro novato
int tabuleiroA [10][10]; // Declaração tabuleiro Aventureiro
int tabuleiroM [10][10]; // Declaração tabuleiro Mestre

//Navio
int navioY [3];
int navioX [3];

//Função Inicialização de Tabuleiros
void inicializaTabuleiro(int tabuleiro[10][10]){ 
        for (int i=0; i<=9; i++){
            for(int j=0; j<=9; j++){
                tabuleiro[i][j]=0;
            }
        }
}

//Função Impressão de Tabuleiros
void imprimeTabuleiro(int tabuleiro[10][10]){ 
    for (int i=0; i<=9; i++){
        printf("\n");
        for(int j=0; j<=9; j++){
            printf("%d ",tabuleiro[i][j]);
        }
    }
}

void verificaIgual(int C1N1, int C2N1, int C1N2, int C2N2){
    if (C1N1 == C1N2 || C2N1 == C2N2){
        printf("Navio Colidindo com anterior");
    }
}

void verifica(int coord){
    if (coord<0 || coord<9){
        printf("Digite um valor válido [0 a 9]: \n");
    }
}

int main() {
    inicializaTabuleiro(tabuleiroN);
    //Coordenadas navio 1
    do{
        printf("digite coordenada Y inicial do navio 1 [Min = 0, Max= 9]:\n");
        scanf(" %d", coord1N1);
        for(int c=coord1N1; c<=(coord1N1+3); c++){
            navioY[]=c;
        }
    }
    while(coord1N1<0 || coord1N1>9);
    printf("digite coordenada X inicial do navio 1 [Min = 0, Max= 9]:\n");
    scanf(" %d", coord2N1);

    //Coordenadas navio 2
    printf("digite coordenada Y inicial do navio 2 [Min = 0, Max= 9]:\n");
    scanf(" %d", coord1N2);
    printf("digite coordenada X inicial do navio 2 [Min = 0, Max= 9]:\n");
    scanf(" %d", coord2N2);

    imprimeTabuleiro(tabuleiroN);
    printf("\n");
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
