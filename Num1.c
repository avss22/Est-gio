#include <stdio.h>
#include <stdbool.h>


bool isFibonacci(int num) {
    int a = 0, b = 1, c;
    if (num == a || num == b) return true;
    while (b < num) {
        c = a + b;
        a = b;
        b = c;
        if (b == num) return true;
    }
    return false;
}

int main() {
    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("%d pertence � sequ�ncia de Fibonacci.\n", num);
    } else {
        printf("%d n�o pertence � sequ�ncia de Fibonacci.\n", num);
    }

    return 0;
}
