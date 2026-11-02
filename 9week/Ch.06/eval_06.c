#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    int sum = 0;
    int count = 0;
    
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }
    
    double avg = 0.0;
    if (count > 0) {
        avg = (double)sum / count;
    }
    
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);
    
    return 0;
}