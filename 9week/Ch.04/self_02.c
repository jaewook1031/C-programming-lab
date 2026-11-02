#include <stdio.h>

int main(void) {
    int height, weight, obesity;
    
    scanf("%d %d", &height, &weight);
    
    obesity = weight + 100 - height;
    
    printf("%d\n", obesity);
    
    if (obesity > 0) {
        printf("Obesity\n");
        printf("Need control\n");
    }
    
    return 0;
}