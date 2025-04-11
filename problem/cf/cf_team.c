#include <stdio.h>
int main (){
    int n;
    int count =0;
    scanf("%d",&n);
    while (n--){
        int p,v,t;
        
        scanf("%d%d%d",&p,&v,&t);
        if (p+v+t>=2){
            count ++;
        }
    }
    printf("%d",count);
return 0;
}
