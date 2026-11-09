#include <stdio.h>

int main(void) {
    int arr[10];
    int min, max;
    int initialized = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (!initialized) {
            min = arr[i];
            max = arr[i];
            initialized = 1;
        } else {
            if (arr[i] < min) {
                min = arr[i];
            }
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }
    
    printf("%d %d\n", max, min);
    
    return 0;
}