#include <stdio.h>

int main() {
    int leap;
    int common;
    int year;

    scanf("%d", &year);
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("leap year");
    }
    else {
        printf("common year");
    }
    
    

}