#include <stdio.h>
#include <float.h>
double findMaxAverage(int* nums, int numsSize, int k) {
  int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    int maxSum = sum;

    for (int i = k; i < numsSize; i++) {
        sum = sum - nums[i - k] + nums[i];
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    return (double)maxSum / k;
}

int main (){
    printf("please enter the target value : ");
    int k;
    scanf("%d",&k);
    printf("please enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("please enter the values of arrays \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the minimum size is %f\n",findMaxAverage(arr,n,k));
return 0;
}
