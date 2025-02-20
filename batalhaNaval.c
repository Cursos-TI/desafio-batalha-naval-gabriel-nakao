#include <stdio.h>


//Declaração Tabuleiros
int tabuleiro [10][10]; // Declaração tabuleiro novato

//Navio
void NavioVertical(int tabuleiro[10][10], int coord1, int coord2){


for (int c=0; c<=2; c++){;
tabuleiro [coord1+c] [coord2] = 3;
}
}

//Navio
void NavioHorizontal(int tabuleiro[10][10], int coord1, int coord2){
    
    for (int c=0; c<=2; c++){
    tabuleiro [coord1] [coord2+c] = 3;
    }
}

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

void verifica(int coord){
    if (coord<0 || coord<9){
        printf("Digite um valor válido [0 a 9]: \n");
    }
}

//pergunta ao usuario a coordenadas
void perguntaCoord(int* coordX, int* coordY) {
    printf("digite coordenada X inicial do navio [Min = 0, Max = 9]:\n");
    scanf("%d", coordX);
    verifica(*coordX);
    printf("digite coordenada Y inicial do navio [Min = 0, Max = 9]:\n");
    scanf("%d", coordY);
    verifica(*coordY);
}

void verificaIgual(int tabuleiro [10][10], int coordX, int coordY){
    if (tabuleiro[coordX][coordY] == 3);
    printf("Navios colidindo, favor digitar novamente\n");
}



int main() {
    inicializaTabuleiro(tabuleiro);
    int coordX, coordY;
    perguntaCoord(&coordX, &coordY);
    NavioVertical(tabuleiro, coordX, coordY);

    perguntaCoord(&coordX, &coordY);
    NavioHorizontal(tabuleiro, coordX, coordY);
    verificaIgual(tabuleiro, coordX, coordY);
    

    imprimeTabuleiro(tabuleiro);
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
