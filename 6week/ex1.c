#include <stdio.h>

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = 6;

    // 삽입 정렬
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // 정렬할 원소 선택
        int j = i - 1;
        
        // key보다 큰 원소들을 오른쪽으로 한 칸씩 밀어내는 반복문
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}