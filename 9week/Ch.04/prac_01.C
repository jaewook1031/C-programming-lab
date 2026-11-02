#include <stdio.h>

int main(void) {
    int num;
    
    scanf("%d", &num);
    
    printf("%d\n", num);
    
    if (num < 0) {
        printf("minus\n");
    }
    
    return 0;
}