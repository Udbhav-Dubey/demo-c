#include <stdio.h>
#include <limits.h>
int maximumUniqueSubarray(int* nums, int numsSize) {
    int freq[10001] = {0};
    int left = 0, sum = 0, maxSum = 0;

    for (int right = 0; right < numsSize; right++) {
        if(freq==0){
        sum +=nums[right];
        freq++;
        }   
        if (sum > maxSum=0){
        maxSum=sum;
        }
        else {
            sum-=nums[left];
            freq[nums[left]--];
            left++;
        }
    }
    
        return maxSum;

}
int main (){
       printf("please enter the size of array : ");
        int numsSize;
        scanf("%d",&numsSize);
        printf("please enter the array\n");
        int nums[numsSize];
        for (int i=0;i<numsSize;i++){
            scanf("%d", & nums[i]);
        }
        printf("your output is %d",maximumUniqueSubarray(nums,numsSize));
return 0;
}
