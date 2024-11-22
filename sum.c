#include <stdio.h>
int main(){
int x=0,sum=0;
int n;
scanf("%d\n",&n)
while (x<n){
x++;
sum+=x;
printf("%d and %d is",x,sum);
}
printf("%d\n",sum);
return 0;
}
