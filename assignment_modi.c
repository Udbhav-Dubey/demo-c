// Bubble Sort Code:
#include <stdio.h>
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    for (i = 0; i < n; i++) {  
        for (j = i+1; j < n ; j++) {  
            if (arr[j] < arr[j + 1]) {  
                temp = arr[j];  
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) 
{ 
         printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
