#include <stdio.h>
#include <string.h>

// Definição da struct que representa um território
typedef struct {
    char nome[30];    // Nome do território
    char cor[10];     // Cor do exército
    int tropas;       // Quantidade de tropas
} Territorio;

int main() {
    Territorio territorios[5];  // Vetor para armazenar 5 territórios
    int i;

    printf("Cadastro de 5 territorios para o jogo War\n\n");

    // Laço para entrada dos dados dos territórios
    for(i = 0; i < 5; i++) {
        printf("Territorio %d\n", i + 1);

        printf("Digite o nome do territorio: ");
        // Lê o nome, retirando o '\n' deixado pelo fgets
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0;

        printf("Digite a cor do exército: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = 0;

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        // Limpa o buffer do teclado para próxima leitura de string
        while(getchar() != '\n');

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("Territorios cadastrados:\n");
    for(i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n\n", territorios[i].tropas);
    }

    return 0;
}
