#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i * 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}