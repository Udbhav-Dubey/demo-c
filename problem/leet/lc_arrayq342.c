#include <stdio.h>
#include <stdbool.h>
bool isPowerOfFour(int n) {
    int count =0;
    if ( n & (n-1) == 0 && n & 10 ==0){
        return true;
        }
    else return false;
    }
}
int main (){
    printf("please enter the number to check its power of 4 or not : ");
    int n;
    scanf("%d",&n);
    printf("the output is %d",isPowerOfFour(n));
return 0;
}
