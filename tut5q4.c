//4. Find factorial.
#include <stdio.h>
int fact (int n){
    if (n<=1) {return 1;}
    else {
        return n*fact(n-1);
    }
}
int main (){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("the factorial is %lld",fact(n));
return 0;
}
