#include <stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {   
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    for (;j>=0;k--){
        if (i>=0 && nums1[i]>nums2[j]){
            nums1[k]=nums[i--];
        }
        else {nums1[k]=nums2[j--];}
    }
    
}
int main (){
    int m,n;
    printf("please enter the size of array")
return 0;
}
