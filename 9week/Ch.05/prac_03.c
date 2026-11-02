#include <stdio.h>

int main() {
    int score;
    
    while (1) {
        scanf("%d", &score);
        
        if (score >= 80 && score <= 100) {
            printf("Pass\n");
        } else if (score >= 0 && score < 80) {
            printf("Fail\n");
        } else {
            break;
        }
    }
    
    return 0;
}