#include <stdio.h>

int findMin(int* nums, int numsSize) {
    int start = 0, end = numsSize - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] > nums[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return nums[start];
}

int main (){
    printf("please enter the size of array: ");
    int n;
    scanf("%d",&n);
int     arr[n];
    printf("please enter the elements of array : ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the output is %d",findMin(arr,n));
return 0;
}
