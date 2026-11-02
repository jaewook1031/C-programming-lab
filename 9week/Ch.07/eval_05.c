#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char ch = 'A';
    int num = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%c ", ch++);
        }
        for (int j = 0; j < i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}