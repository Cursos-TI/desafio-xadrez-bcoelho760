#include <stdio.h>

int main() {
    int t = 0, b = 0, r = 0;

    // movimentação da torre (5 vezes para a direita)
    for (t = 0; t < 5; t++) {
        printf("Direita\n");
    }

    // movimentação do bispo (até b chegar em 5)
    while (b <= 5) {
        printf("Cima, direita\n");
        b++;
    }

    // movimentação da rainha (até r chegar em 8)
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

    return 0;
}
