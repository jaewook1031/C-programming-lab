#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        printf("%d", x-y);
    }
    else if (x < y) {
        printf("%d", y-x);
    }
}