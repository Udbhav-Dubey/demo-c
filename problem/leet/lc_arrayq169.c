#include <stdio.h>
#include <limits.h>
int majorityElement(int* nums,int numsSize){
    int freq[INT_MAX]={0};    
    for (int i=0;i<numsSize;i++){
            freq[nums[i]]++
            if (freq[nums[i]]>numsSize/2){
                return nums[i];
            }
        }
        return -1;
}
    int main (){
        printf("please enter the size of array : ");
        int numsSize;
        scanf("%d",&numsSize);
        printf("please enter the array\n");
        int nums[numsSize];
        for (int i=0;i<numsSize;i++){
            scanf("%d",&nums[i]);
        }
        printf("the output is %d",majorityElement(nums,numsSize));
return 0;
}
