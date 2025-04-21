#include <stdio.h>
int countKDifference(int* nums, int numsSize, int k) {
   
}
int main (){
    printf("please enter the size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("please enter the elements of array : ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("please enter the target : ");
    int tar;
    scanf("%d",&tar);
    printf("%d is the output ",countKDiffrence(arr,n,tar));
return 0;
}
