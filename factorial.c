// C program to find factorial of a number
#include <stdio.h>
int main (){
int i,numb,factorial;
unsigned long long fact=numb ;
printf("please enter the number\n");
scanf("%d",&numb);
for (i=1;i<=numb;i++){
fact*= i;
}
printf("factorial of %d is %lld\n",numb,fact);
return 0;
}
