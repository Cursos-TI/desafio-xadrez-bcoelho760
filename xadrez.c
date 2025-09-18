#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas1){
    if(casas1 > 0){
        printf("Cima,Direita \n");
        moverBispo(casas1 - 1);
    }
}

void moverRainha(int casas2){
    if(casas2 > 0){
        printf("Esquerda \n");
        moverRainha(casas2 - 1);
    }
}

void moverCavaloCima(int casas3){
    if(casas3 > 0){
        printf("Cima \n");
        moverCavaloCima(casas3 - 1);
    }
}

void moverCavaloDireita(int casas4){
    if(casas4 > 0){
        printf("Direita \n");
        moverCavaloDireita(casas4 - 1);
    }
}

int main(){

    moverTorre(5);
    moverBispo(5);
    moverRainha(8);
    moverCavaloCima(2);
    moverCavaloDireita(1);

    return 0;
}
