#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int max_dominoes = (m * n) / 2;
    printf("%d\n", max_dominoes);

    return 0;
}

