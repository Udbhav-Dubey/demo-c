// Write a C program to find sum of all odd numbers between 1 to n.
#include <stdio.h>
int main (){
int n,i=1,sum;
printf("please enter number so Program to find sum of even numbers from 1 to n\n");
scanf("%d",&n);
while (n>=i){
sum += i;
i+=2;
}
printf("the sum till %d is %d\n",n,sum);
return 0;
}