#include <stdio.h>

// Função recursiva para mover a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) {
        return; // Condição de parada
    }
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva reduzindo 1 casa
}

// Função recursiva para mover a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) {
        return; // Condição de parada
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva reduzindo 1 casa
}

// Função recursiva + loops aninhados para mover o Bispo (5 casas na diagonal superior direita)
void moverBispoVertical(int vertical, int horizontal) {
    if (vertical == 0) {
        return; // Condição de parada para vertical
    }

    // Loop horizontal para cada passo vertical
    for (int j = 1; j <= horizontal; j++) {
        printf("Direita\n");
    }

    printf("Cima\n");

    moverBispoVertical(vertical - 1, horizontal); // Recursão diminuindo o vertical
}

// Função para mover o Cavalo (2 casas para cima e 1 para a direita) com loops complexos
void moverCavalo() {
    int cima = 2;
    int direita = 1;

    printf("Movimentação do Cavalo:\n");

    for (int i = 1; i <= cima; i++) {
        // Se estiver na segunda casa, pule para direita
        if (i == cima) {
            for (int j = 1; j <= direita; j++) {
                printf("Direita\n");
            }
            break; // Finaliza após completar o movimento
        }

        // Move para cima
        printf("Cima\n");
        printf("Cima\n");

        // Exemplo de uso de continue para reforçar controle do loop
        if (i < cima) {
            continue;
        }
    }
}

int main() {
    int opcao;
    const int casasTorre = 5;
    const int casasRainha = 8;
    const int casasBispoVertical = 5;
    const int casasBispoHorizontal = 1; // Movimento na horizontal a cada passo (sempre 1 casa para direita)

    do {
        printf("\n***MENU PRINCIPAL***\n");
        printf("Escolha a peça a ser movimentada:\n");
        printf("1. Bispo (5 casas)\n");
        printf("2. Torre (5 casas)\n");
        printf("3. Rainha (8 casas)\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        printf("\n");

        switch (opcao) {
        case 1:
            printf("Você escolheu movimentar o Bispo (5 casas na diagonal superior direita)\n");
            moverBispoVertical(casasBispoVertical, casasBispoHorizontal);
            break;

        case 2:
            printf("Você escolheu movimentar a Torre (5 casas para a direita)\n");
            moverTorre(casasTorre);
            break;

        case 3:
            printf("Você escolheu movimentar a Rainha (8 casas para a esquerda)\n");
            moverRainha(casasRainha);
            break;

        case 4:
            moverCavalo();
            break;

        case 5:
            printf("Você escolheu sair do jogo!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
        }

    } while (opcao != 5);

    return 0;
}