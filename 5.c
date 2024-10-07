#include <stdio.h>
#include <string.h>

int main() {
    char str[100], invertida[100];
    int len, j = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str) - 1;

    for (int i = len; i >= 0; i--) {
        invertida[j++] = str[i];
    }
    invertida[j] = '\0'; 

    printf("String invertida: %s\n", invertida);
    return 0;
}
