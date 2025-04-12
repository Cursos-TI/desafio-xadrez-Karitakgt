#include<stdio.h>

int main() {
				printf("=== DESAFIO AVENTUREIRO - TEMA 3 - XADREZ ===\n");
				
				// Variaveis do Jogo Xadrez - Torre, Bispo, Rainha e cavalo:
				
				int mov_torre = 1;
				int mov_bispo = 1;
				int mov_Rainha = 1;
				int mov_cavalo = 1;
				int i, j;
				
				char torre[10] = "Torre";
				char bispo[10] = "Bispo";
				char rainha[10] = "Rainha";
				char cavalo[10] = "Cavalo";
				
				
				// Movimentação da Torre - Estrutura de Repetição 'For' - Movimento 5 casas para Direita:
				
                printf("*** MOVIMENTO DA TORRE NO TABULEIRO *** \n");
				for(mov_torre = 1; mov_torre <= 5; mov_torre++){
					printf("%s para Direita %d\n", torre, mov_torre);
				}
				printf("\n");
				
				// Movimentação do Bispo - Estrutura de repetição 'While' - Movimento de 5 casas na diagonal para cima e à direita
				
                printf("*** MOVIMENTO DO BISPO NO TABULEIRO *** \n");

				while (mov_bispo <= 5){
					
					printf("%s para Cima, Direita %d\n", bispo, mov_bispo);
					mov_bispo++;
				}
			
				printf("\n");
				
				// Movimentação da Rainha - Estrutura de repetição do - while - Movimento de 8 casas para esquerda:
				
                printf("*** MOVIMENTO DA RAINHA NO TABULEIRO *** \n");

				do {
					printf("%s para Esquerda: %d\n", rainha, mov_Rainha);
					mov_Rainha++;
					
				} while (mov_Rainha <= 8);
				printf("\n");
				
				// Movimentação do Cavalo - Estrutura aninhadas - Movimento duas casas para baixo e uma para a esqueda:
				printf("*** MOVIMENTO DO CAVALO NO TABULEIRO *** \n");

				while (mov_cavalo--){
					
					for(i = 1; i <= 2; i++){
						printf("%s para Cima: %d\n", cavalo, i); // Imprime 2 vezes para cima;
					}
					printf("%s para Direita: %d\n", cavalo, 1); // Imprime 1 vez para direita
				}

    return 0;
}