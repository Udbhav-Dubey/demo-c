// C program to swap first and last digit of a number
#include <stdio.h>
#include <math.h>
int main (){
    int numb,ld,fd,hold,numb1,count=0,hold1; // ld is last digit , fd is first digit
    printf("please enter the number\n");
    scanf("%d",&numb);
    ld = numb % 10 ;
    while (numb > 10){
        numb = numb / 10;
        count ++ ;
    }
    count ++ ;
     fd = numb % 10 ;
    printf("the first and last digit is %d and %d\n",fd,ld);
    hold1 = pow(10,count);
    numb1 = numb - hold1;
    numb1 = numb - hold ;
    numb1 = numb / 10 ;
    printf("swapped is %d%d%d\n",ld,numb1,fd);
    return 0;
}
