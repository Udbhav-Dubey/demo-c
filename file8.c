#include <stdio.h>
#include <stdlib.h>
struct threeNum{int n1,n2,n3;}num;
int main (){
    int n;
    FILE* fptr;
    fptr=fopen("file7.bin","rb");
    fread(&num,sizeof(struct threeNum),1,fptr);
    printf("n1 : %d\tn2: %d\tn3: %d\n",num.n1,num.n2,num.n3);
    fclose(fptr);
return 0;
}
