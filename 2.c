#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um número N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma dos números de 1 a %d é: %d\n", N, soma);
    return 0;
}
