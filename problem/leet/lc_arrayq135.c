#include <stdio.h>
int candy(int* ratings,int ratingsSize){
    int candy[ratingsSize];
    for (int i=0;i<ratingSize;i++){
        candy[i]=0;
    }
    for (int i=1;i<ratingSize;i++){
        if (ratings[i]>ratings[i-1]{
            candy[i]=candy[i-1]+1;
                }
    }
    for (int i=ratingsize-2;i>=0;i++){
        if (ratings[i]>ratings[i+1]{
                candy [i]=candi[i+1]+1;}
    }
    int sum=0;
    for (int i=0;i<ratingSize;i++){
        sum += candy[i];
    }
    return sum;
}
int main (){
    printf("please enter the size of rating array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("please enter the elements of array : ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("output is %d",candy(arr,n));
return 0;
}
