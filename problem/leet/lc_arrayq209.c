#include <stdio.h>
#include <limits.h>
int minSubArrayLen(int target , int *nums,int numsSize){
    int sum=0,left=0 , minlength = INT_MAX;
    for (int right=0;right<numsSize;right++){
        sum+=nums[right];
    
        while (sum >=target){
            int length = right - left +1;
            if (length <minlength){
                minlength=length;
            }
            sum-=nums[left];
            left++;
        }
}
return (minlength == INT_MAX)? 0:minlength;
}
int main (){
    printf("please enter the target : ");
    int target;
    scanf("%d",&target);
    printf("please enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("please enter the elements of array : ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("your output is %d",minSubArrayLen(target,arr,n));
return 0;
}
