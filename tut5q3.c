//✅ Without Using a Temp Variable (Using Arithmetic)
#include <stdio.h>
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main (){
    int a=10;
    int b=20;
    swap(&a,&b);
    printf("%d %d",a,b);
return 0;
}
