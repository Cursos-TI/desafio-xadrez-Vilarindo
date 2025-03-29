#include <stdio.h>

//Desafio Xadrez - Nível Novato
//Aluno LUIZ VILARINDO

//Adicionei a opção do usuário escolher a quantidade de casas movidas e a direção
//Defini o máximo de 8 casas, que foi a solicitação do professor para a rainha.

int main() {
    // Jogo de xadrez
    // Três peças
    // Torre, bispo e rainha
    // As saídas devem seguir o padrão:
    /*
    printf("Cima\n");
    printf("Baixo\n");
    printf("Esquerda\n");
    printf("Direita\n");
    printf("Cima, Esquerda\n");
    printf("Cima, Direita\n");
    */
   
    int peca, casas, direcao;

    printf("Vamos jogar xadrez!\n");
    printf("Escolha uma peça:\n");
    printf("1 - Torre\n"); // Movimentos (Cima, Baixo)
    printf("2 - Bispo\n"); // Movimentos (Cima Esquerda, Cima Direita)
    printf("3 - Rainha\n"); // Movimentos (Cima, Baixo, Esquerda, Direita)

    scanf("%d", &peca);
   
    if (peca == 1) {
        printf("Você escolheu a Torre\n");
    } else if (peca == 2) {
        printf("Você escolheu o Bispo\n");
    } else if (peca == 3) {
        printf("Você escolheu a Rainha\n");
    } else
    {
        printf("Peça inválida\n");
        return 1;
    }
    

    do {
        printf("Escolha a quantidade de casas: \n");
        printf("Máximo de casas: 8\n");
        scanf("%d", &casas);
    } while (casas > 8 || casas < 1);

    // Tem um switch para a peça.
    // Dentro tem um switch aninhado para a direção permitida da peça específicada.
    // Uma vez que a direção é escolhida para peça específica, o while entra em ação.
    switch (peca) {
        case 1:
            printf("Torre\n");
            printf("Escolha a direção:\n");
            printf("1 - Cima\n");
            printf("2 - Baixo\n");
            printf("3 - Esquerda\n");
            printf("4 - Direita\n");
            scanf("%d", &direcao);
            switch (direcao) {
                case 1:
                    while (direcao == 1 && casas > 0) {
                        printf("Cima\n");
                        casas--;
                    }
                    break;
                case 2:
                    while (direcao == 2 && casas > 0) {
                        printf("Baixo\n");
                        casas--;
                    }
                    break;
                case 3:
                    while (direcao == 3 && casas > 0) {
                        printf("Esquerda\n");
                        casas--;
                    }
                    break;
                case 4:
                    while (direcao == 4 && casas > 0) {
                        printf("Direita\n");
                        casas--;
                    }
                    break;
                default:
                    printf("Direção inválida\n");
                    break;
            }
            break;
        case 2:
            printf("Bispo\n");
            printf("Escolha a direção:\n");
            printf("1 - Cima, Esquerda\n");
            printf("2 - Cima, Direita\n");
            scanf("%d", &direcao);
            switch (direcao) {
                case 1:
                    while (direcao == 1 && casas > 0) {
                        printf("Cima, Esquerda\n");
                        casas--;
                    }
                    break;
                case 2:
                    while (direcao == 2 && casas > 0) {
                        printf("Cima, Direita\n");
                        casas--;
                    }
                    break;
                default:
                    printf("Direção inválida\n");
                    break;
            }
            break;
        case 3:
            printf("Rainha\n");
            printf("Escolha a direção:\n");
            printf("1 - Cima\n");
            printf("2 - Baixo\n");
            printf("3 - Esquerda\n");
            printf("4 - Direita\n");
            printf("5 - Cima, Esquerda\n");
            printf("6 - Cima, Direita\n");
            scanf("%d", &direcao);
            switch (direcao) {
                case 1:
                    while (direcao == 1 && casas > 0) {
                        printf("Cima\n");
                        casas--;
                    }
                    break;
                case 2:
                    while (direcao == 2 && casas > 0) {
                        printf("Baixo\n");
                        casas--;
                    }
                    break;
                case 3:
                    while (direcao == 3 && casas > 0) {
                        printf("Esquerda\n");
                        casas--;
                    }
                    break;
                case 4:
                    while (direcao == 4 && casas > 0) {
                        printf("Direita\n");
                        casas--;
                    }
                    break;
                case 5:
                    while (direcao == 5 && casas > 0) {
                        printf("Cima, Esquerda\n");
                        casas--;
                    }
                    break;
                case 6:
                    while (direcao == 6 && casas > 0) {
                        printf("Cima, Direita\n");
                        casas--;
                    }
                    break;
                default:
                    printf("Direção inválida\n");
                    break;
            }
            break;
        default:
            printf("Opção inválida\n");
    }
}

