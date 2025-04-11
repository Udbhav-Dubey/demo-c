#include <stdio.h>
#include <limits.h>
int findPeakElement(int* nums, int numsSize) {
    int left =0,right=0,start=0,end=numsSize-1;
    while (start<=end){
       int  mid = start + (end -start)/2;
        left = (mid==0)? INT_MIN: nums[mid-1];
        right= (mid==numsSize-1)?INT_MIN:nums[mid+1];
        if (nums[mid]>left && nums[mid] > right){
            return mid ;
        } 
        if (nums[mid]>=right){
            start = mid+1;
        }
        else {end=mid-1;}
    }
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
        printf("your output is %d",findPeakElement(nums,numsSize));
return 0;
}
