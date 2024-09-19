#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0;

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (tolower(str[i]) == 'a') {
            count++;
        }
    }

    if (count > 0) {
        printf("A letra 'a'/'A' aparece %d vezes na string.\n", count);
    } else {
        printf("A letra 'a'/'A' não aparece na string.\n");
    }

    return 0;
}
