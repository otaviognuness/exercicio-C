#include <stdio.h>

int main() {
    int numero, i, primo = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 2) {
        primo = 0; 
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }
    return 0;
}
