#include "thumb.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    int opcao;
    char name[100];
    FILE *in, *out;

    while (1) {
        //menu
        printf("### Thumb instruction set decoder ###\n\n");
        printf("1-Digitar instrução.\n");
        printf("2-Ler instruções do arquivo.\n");
        printf("3-Sair.\n\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                //opcao 1: digitar instrucao
                printf("Digite a instrução (em hexadecimal): ");
                scanf("%s", name);

                printf("Decoded instruction:\n");
                decod_thumb_instruction(name); // Função que decodifica a instrução
                // Aqui você pode adicionar a lógica para processar a instrução digitada
                // printf("Instrução digitada: %s\n", name);
                break;

            case 2:
                // Opção 2: Ler instruções do arquivo
                printf("Digite o nome do arquivo: ");
                scanf("%s", name);
                if (decod_thumb_file(name, in, out) == -1) { // Função que converte em Thumb
                    printf("Arquivo não encontrado ou erro na decodificação.\n");
                } else {
                    printf("Decodificação realizada com sucesso!\n");
                }
                break;

            case 3:
                // Opção 3: Sair
                printf("Saindo...\n");
                return 0;

            default:
                // Opção inválida
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

        printf("\n");
    }

    return 0;
}