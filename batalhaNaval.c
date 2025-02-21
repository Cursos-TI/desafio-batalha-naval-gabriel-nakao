#include <stdio.h>


//Declaração Tabuleiros
int tabuleiro [10][10]; // Declaração tabuleiro 

int coordX, coordY;

//Navio Vertical
void NavioVertical(int tabuleiro[10][10], int coord1, int coord2){

for (int c=0; c<=2; c++){;
tabuleiro [coord1+c] [coord2] = 3;
}
}

//Navio Horizontal
void NavioHorizontal(int tabuleiro[10][10], int coord1, int coord2){
    for (int c=0; c<=2; c++){
    tabuleiro [coord1] [coord2+c] = 3;
    }
}

//Navio Horizontal
void NavioDiagonal1(int tabuleiro[10][10], int coord1, int coord2){
    for (int c=0; c<=2; c++){
    if (c==0){
    tabuleiro [coord1] [coord2] = 3;    
    }
    tabuleiro [coord1+c] [coord2+c] = 3;
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

//pergunta ao usuario a coordenadas
void perguntaCoord(int* coordX, int* coordY) {
    printf("digite coordenada X inicial do navio [Min = 0, Max = 9]:\n");
    scanf("%d", coordX);
    while (*coordX <0 || *coordX >9){
        printf("Digite um valor válido [0 a 9]: \n");
        scanf("%d", coordX);
    }
    printf("digite coordenada Y inicial do navio [Min = 0, Max = 9]:\n");
    scanf("%d", coordY);
    while (*coordY<0 || *coordY>9){
        printf("Digite um valor válido [0 a 9]: \n");
        scanf("%d", coordY);
    }
}

// void verificaIgual(int tabuleiro [10][10], int coordX, int coordY){
//     if (tabuleiro[coordX][coordY] == 3);
//     printf("Navios colidindo, favor digitar novamente\n");
// }

void cone(int tabuleiro[10][10],int coord1, int coord2){
    for (int i=0; i<=2; i++){; //
        for (int j=0; j<=4; j++){
        if(j==2){
            tabuleiro [coord1+i] [coord2+j] = 1;
        }
        else{
            tabuleiro [coord1+i] [coord2+j] = 0;
        }
        if (i==1 && j!=0 && j!=4){
            tabuleiro [coord1+i] [coord2+j] = 1;
        }
        else if(j==0 || j==4){
            tabuleiro [coord1+i] [coord2+j] = 0;
        }
        if (i==2){
            tabuleiro [coord1+i] [coord2+j] = 1;
        }
        }   
    }
}

void octaedro(int tabuleiro[10][10],int coord1, int coord2){
    for (int i=0; i<=2; i++){; //
        for (int j=0; j<=4; j++){
        if(j==2){
            tabuleiro [coord1+i] [coord2+j] = 1;
        }
        else{
            tabuleiro [coord1+i] [coord2+j] = 0;
        }
        if (i==1 && j!=0 && j!=4){
            tabuleiro [coord1+i] [coord2+j] = 1;
        }
        else if(j==0 || j==4){
            tabuleiro [coord1+i] [coord2+j] = 0;
        }
        if (i==2 && j!=2){
            tabuleiro [coord1+i] [coord2+j] = 0;
        }
        }   
    }
}

void cruz(int tabuleiro[10][10],int coord1, int coord2){
    for (int i=0; i<=2; i++){; //
        for (int j=0; j<=4; j++){
        if(j==2){
            tabuleiro [coord1+i] [coord2+j] = 1;
        }
        else{
            tabuleiro [coord1+i] [coord2+j] = 0;
        }
        if (i==1){
            tabuleiro [coord1+i] [coord2+j] = 1;
        }
        if (i==2 && j!=2){
            tabuleiro [coord1+i] [coord2+j] = 0;
        }
        }   
    }
}


int main() {

    //NOVATO
    inicializaTabuleiro(tabuleiro);
    perguntaCoord(&coordX, &coordY);
    NavioVertical(tabuleiro, coordX, coordY);

    perguntaCoord(&coordX, &coordY);
    NavioHorizontal(tabuleiro, coordX, coordY);

    imprimeTabuleiro(tabuleiro);
    printf("\n");
    //FIM NOVATO


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    inicializaTabuleiro(tabuleiro);
    coordX= 0;
    coordY= 0;
    NavioVertical(tabuleiro, coordX, coordY);

    coordX= 0;
    coordY= 3;
    NavioHorizontal(tabuleiro, coordX, coordY);

    coordX= 5;
    coordY= 6;
    NavioDiagonal1(tabuleiro, coordX, coordY);
    
    coordX= 7;
    coordY= 2;
    NavioDiagonal1(tabuleiro, coordX, coordY);

    imprimeTabuleiro(tabuleiro);
    printf("\n");
    //FIM AVENTUREIRO

    //INICIO MESTRE
    inicializaTabuleiro(tabuleiro);
    coordX= 3;
    coordY= 4;
    cone(tabuleiro, coordX, coordY);
    imprimeTabuleiro(tabuleiro);
    printf("\n");

    inicializaTabuleiro(tabuleiro);
    coordX= 3;
    coordY= 4;
    octaedro(tabuleiro, coordX, coordY);
    imprimeTabuleiro(tabuleiro);
    printf("\n");

    inicializaTabuleiro(tabuleiro);
    coordX= 3;
    coordY= 4;
    cruz(tabuleiro, coordX, coordY);
    imprimeTabuleiro(tabuleiro);
    printf("\n");
    //FIM MESTRE
    return 0;
}
