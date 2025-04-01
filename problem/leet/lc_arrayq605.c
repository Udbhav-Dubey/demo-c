#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int count = 0;

    for (int i = 0; i < flowerbedSize; i++) {
        if (flowerbed[i] == 0) {  
            int left = (i == 0) ? 0 : flowerbed[i - 1];  
            int right = (i == flowerbedSize - 1) ? 0 : flowerbed[i + 1];

            if (left == 0 && right == 0) { 
                flowerbed[i] = 1;  
                count++;
                i++;  
            }
        }
    }

    return count >= n;
}

int main (){
    printf("please enter the size of flower bed : ");
    int s;
    scanf("%d",&s);
    printf("please enter the array flower bed\n");
    int arr[s];
    for (int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    printf("please enter the number of flowers : ");
    int n;
    scanf("%d",&n);
    printf("the output is %d",canPlaceFlowers(arr,s,n));
    return 0;

}
