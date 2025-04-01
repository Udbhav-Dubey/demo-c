#include <stdio.h>
#include <limits.h>
int majorityElement(int* nums,int numsSize){
        int count =0;
        int candidate=0;
        for (int i=0;i<numsSize;i++){
            if (count ==0){
                candidate=nums[i];
            }
            count += (nums[i] == candidate)? 1:-1; 
        }
        int freq=0;
        for (int i=0;i<numsSize;i++){
            if (nums[i]==candidate){
                freq++;
            }
        }
        return (freq>numsSize/2)? candidate : -1;
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
