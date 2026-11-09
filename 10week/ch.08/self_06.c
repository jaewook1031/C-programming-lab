#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 0;
    int input;

    while (1) {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        arr[count++] = input;
        if (count >= 100) {
            break;
        }
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", max - min);

    return 0;
}