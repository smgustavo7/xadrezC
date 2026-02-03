#include <stdio.h>

    int main(){

    //Área para adicionar as variáveis

        int rainha, cavalo = 0, torre = 1, bispo = 1;
        
    //Área para estrutura de repetição 'For' para simular a movimentação da peça de xadrez - Rainha

        for (rainha = 1; rainha <= 8; rainha++)
        {
            printf("RAINHA - Esquerda\n");
        }

    //Área para estrutura de repetição 'While' para simular a movimentação da peça de xadrez - Torre

        while (torre <= 5)
        {
            printf("TORRE - Direita\n");
            torre++;
        }

    //Área para estrutura de repetição 'Do-while' para simular a movimentação da peça de xadrez - Bispo

        do
        {
            printf("BISPO - Cima Direita\n");
            bispo++;
        } while (bispo <= 5);

    //Área para loop aninhado 'While' e 'For' para simular a movimentação da peça de xadrez - Cavalo
        
        while(cavalo < 1){

            for(int i = 0; i < 2; i++){

                printf("CAVALO - Baixo\n");
            }
            cavalo++;
            printf("CAVALO - Esquerda\n");
        }

        return 0;
    }