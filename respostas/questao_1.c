#include <stdio.h>

int isFibonacci(int num) {
    int a = 0, b = 1, next = 0;

    if (num == 0 || num == 1) {
        return 1;
    }

    while (next < num) {
        next = a + b;
        a = b;
        b = next;
    }

    if (next == num) {
        return 1;  
    } else {
        return 0;  
    }
}

int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (isFibonacci(number)) {
        printf("O número %d pertence a sequência de Fibonacci.\n", number);
    } else {
        printf("O número %d NÃO pertence a sequência de Fibonacci.\n", number);
    }

    return 0;
}