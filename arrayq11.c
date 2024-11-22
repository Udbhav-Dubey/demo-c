// C program to count frequency of each element in an array
#include <stdio.h>
int main(){
    int n,count;
    printf("pls enter the number of elements");
    scanf("%d",&n);
    int arr[n],freq[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d   ",arr[i]);
    }
    int *flag=arr;
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count ++;
            }

        }
        freq[i]=count;
    }
    for (int i=0;i<n;i++){
        printf("\n%d ocurrs %d times \n",arr[i],freq[i]);
    }
    return 0;
}
