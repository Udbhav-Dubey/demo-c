#include <stdio.h>
int singleNumber(int* nums,int numsSize){
    int result=0;
    for (int i=0;i<numsSize;i++){
        result = result ^ nums[i];
    }
    return result;
}
int main (){
    printf("please enter the size of array\n");
    int numsSize;
    scanf("%d",&numsSize);
    int nums[numsSize];
    printf("please enter the elements of array\n");
    for (int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    printf("the output is %d",singleNumber(nums,numsSize));
return 0;
}
