#include <stdio.h>
int main (){
    printf("please enter the size of array : ");
    int n;
    scanf("%d",&n);
    int nums[n];
    printf("please enter the values of sorted array \n");
    for (int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("please enter the value to find : ");
    int tar;
    scanf("%d",&tar);
    int left=0,right=n-1,mid=0, found=0;
    while (left<=right){
        mid = left + (right-left)/2;
        if (nums[mid]==tar){printf("element at %d",mid);found =1;break;  }
        if (nums[mid]>tar){right = mid-1;} 
        else left = mid +1;
    }
    if (found !=1){printf("element not found");}
return 0;
}
