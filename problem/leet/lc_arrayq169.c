#include <stdio.h>
int majorityElement(int* nums,int numsSize){
	if (numsSize == 0) return -1; 
    int freq[numsSize];
    memset(freq, 0, sizeof(freq));
   	for (int i = 0; i < numsSize; i++) {
        if (nums[i] < numsSize) { 
            freq[nums[i]]++;
        }
    }
    int max=freq[nums[0]],maxi=nums[0];
    for (int i=0;i<numsSize;i++){
        if (freq[nums[i]]>max && nums[i]<numsSize){
        max=freq[i];
        maxi=nums[i];}
    }
     return (maxFreq > numsSize / 2) ? maxi : -1;
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
