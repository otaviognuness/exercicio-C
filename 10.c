#include <stdio.h>
#include <string.h>
#include <ctype.h> // Inclua esta biblioteca

int main() {
    char str[100];
    int cont = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // Converte para minúsculo
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont++;
        }
    }

    printf("Número de vogais: %d\n", cont);
    return 0;
}
