#include <stdio.h>
int main (){
    int prime,n,i;
    printf("please enter the number\n");
    scanf("%d",&n);
    prime = 1 ;
    for (i=2;i=n/2;i++){
        if (n%i==0){
            prime =0;
            break;
        }
    }
        if (prime =1 || n > 1){
            printf("%d is prime number\n",n);
        }
        else {
            printf("%d is not a prime number\n",n);
        }
    return 0;
}
