#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    // 위쪽 n개 줄 (1번째 줄 ~ n번째 줄)
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("# ");
        }
        printf("\n");
    }

    // 아래쪽 n-1개 줄 (n+1번째 줄 ~ 2n-1번째 줄)
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i * 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}