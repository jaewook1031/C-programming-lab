#include <stdio.h>

int main() {
    double base, height;
    char cont;
    
    while (1) {
        scanf("%lf %lf", &base, &height);
        
        double area = base * height / 2.0;
        printf("Triangle area = %.1f\n", area);
        
        printf("Continue? ");
        scanf(" %c", &cont);
        
        if (cont != 'Y' && cont != 'y') {
            break;
        }
    }
    
    return 0;
}