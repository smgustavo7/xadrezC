#include <stdio.h>

//Área para a implementação da recursividade das peças de xadrez - Rainha, Torre e Bispo

    void moverrainha(int RAINHA){
        if (RAINHA > 0){
            printf("RAINHA anda uma casa para esquerda\n");
            moverrainha (RAINHA - 1);
        }
    }

    void movertorre(int TORRE){
        if (TORRE > 0){
            printf("TORRE anda uma casa para a direita\n");
            movertorre (TORRE - 1);
        }
    }

    void moverbispo(int BISPO){
        if (BISPO > 0){
            printf("BISPO anda uma casa para cima\n");
            printf("BISPO anda uma casa para a direita\n");
            moverbispo (BISPO - 1);
        }
    }


    int main(){

//Área para adicionar o valor das recursividades 

        moverrainha(8);
        movertorre(5);
        moverbispo(5);

//Área para variavel da peça de xadrez Cavalo

        int cavalo = 0;
        
//Área para loop aninhado para a peça de xadrez Cavalo

        while(cavalo < 1){

            for(int i = 0; i < 2; i++){

                printf("CAVALO anda uma casa para cima\n");
            }
            cavalo++;
            printf("CAVALO anda uma casa para a direita\n");
        }
    
        return 0;
    }