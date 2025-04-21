#include <stdio.h>
#include <stdlib.h>
int subarraySum(int* nums, int numsSize, int k) {
  
    int prefixSumCount[100000] = {0};
    int current_sum = 0;
    int result = 0;
    
       prefixSumCount[0] = 1;
    
    for (int i = 0; i < numsSize; i++) {
        current_sum += nums[i];
        
        
        if (current_sum - k >= 0 && prefixSumCount[current_sum - k] > 0) {
            result += prefixSumCount[current_sum - k];
        }
        
       
        prefixSumCount[current_sum]++;
    }
    
    return result;
}


int main (){
    printf("enter the size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the target\n");
    int tar;
    scanf("%d",&tar);
    printf("your output is %d",subarraySum(arr,n,tar));
return 0;
}
