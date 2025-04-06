#include <stdio.h>
//using namespace std;
int maxSubArray (int* nums,int numsSize){
    int sum=nums[0];
    int max_t=nums[0];
    for (int i=1;i<numsSize;i++){
        if (max_t+nums[i]>nums[i]){max_t=max_t+nums[i];}
        else {max_t=nums[i];}  
    if (max_t>sum){
        sum = max_t;
    }}
    return sum;
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
        printf("the output is %d",maxSubArray(nums,numsSize));
return 0;
}
