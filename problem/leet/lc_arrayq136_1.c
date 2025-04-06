#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
   return (*(int *)a - *(int *)b);
}
int singleNumber(int* nums,int numsSize){
    int single=nums[0];
    qsort(nums, numsSize, sizeof(int), compare); 
    for (int i=0;i<numsSize-1;i++){
        if (nums[i] ^ nums[i+1] ==0){
            i++;
        }
        else{single=nums[i];}
    }
    return single;
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
