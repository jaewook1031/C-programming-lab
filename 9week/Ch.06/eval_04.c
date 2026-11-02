#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int score;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        sum += score;
    }
    
    double avg = (double)sum / n;
    
    printf("%.2f\n", avg);
    
    return 0;
}