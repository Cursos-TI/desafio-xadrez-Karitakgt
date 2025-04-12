#include<stdio.h>

int main() {

    // Variaveis do Jogo Xadrez - Nivel Novato - Torre, Bispo e Rainha:

    int mov_torre = 1;
	int mov_bispo = 1;
	int mov_Rainha = 1;

    char torre[10] = "Torre";
	char bispo[10] = "Bispo";
	char rainha[10] = "Rainha";

    // Movimentação da Torre - Estrutura de repetição 'For' - Torre: 5 casas para a direita:

    printf("*** MOVIMENTAÇÃO DA PEÇA: TORRE *** \n");
    
        for(mov_torre = 1; mov_torre <= 5; mov_torre++){
            printf("%s para Direita %d\n", torre, mov_torre); }
            printf("\n");

    // Movimentação do Bispo - Estrutura de repetição 'While' - Movimento de 5 casas na diagonal para cima e à direita
				
    printf("*** MOVIMENTAÇÃO DA PEÇA: BISPO *** \n");

    while (mov_bispo <= 5){
        printf("%s para Cima, Direita %d\n", bispo, mov_bispo);
        mov_bispo++;

    }
    printf("\n");

    // Movimentação da Rainha - Estrutura de repetição do - while - Movimento de 8 casas para esquerda:

    printf("*** MOVIMENTAÇÃO DA PEÇA: RAINHA *** \n");

    do {
        printf("%s para Esquerda: %d\n", rainha, mov_Rainha);
        mov_Rainha++;
        
    } while (mov_Rainha <= 8);
    printf("\n");

    return 0;
}