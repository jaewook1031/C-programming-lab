#include <stdio.h>

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = 6;

    // 선택 정렬
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; // 가장 작은 원소의 위치(인덱스) 저장
        
        // 아직 정렬되지 않은 부분에서 최솟값의 위치 찾기
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        // 찾은 최솟값을 현재 위치(i)와 교환
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}