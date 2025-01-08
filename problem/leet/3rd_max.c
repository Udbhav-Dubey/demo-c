#include <stddef.h>
int thirdMax(int* nums, int numsSize) {

    if (numsSize<3){
        int max=nums[0];
        for (int i=0;i<numsSize;i++){
            if (nums[i]>max){
                max = nums[i];
            }
        }
        return max;
    }
    int temp;
    for (int i=0;i<numsSize;i++){
    for (int j=i+1;j<numsSize;j++){
        if (nums[i]<nums[j]){
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
}
    int count =1;
    for (int i=1;i<numsSize;i++){
        if (nums[i]!=nums[i-1]){
            count ++;
        }
        if (count ==3){
            return nums[i];
        }
    }
    return nums[0];
}
