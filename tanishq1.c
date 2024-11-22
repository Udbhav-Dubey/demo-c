#include <stdio.h>
int main (){
    int num , factorial  ;
    printf("enter ");
    scanf("%d",&num);
    if (num < 0){
        printf("Factorail ofnisof");
    }
    else {
        for (int i=1;i<=num;i++){
            factorial = num * i;
            printf("Fac=%d\n",factorial);
        }
    }
    printf("Fac=%d\n",factorial);
 }
