#include <stdio.h>

    int main(){

    //Área para adicionar as variáveis

        int rainha, torre = 1, bispo = 1;
        
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
        
        
        return 0;
    }