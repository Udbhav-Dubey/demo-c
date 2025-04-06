#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);

    int j = 0, giv = 0;
    
    for (int i = 0; i < sSize && j < gSize; i++) {
        if (s[i] >= g[j]) {
            giv++;
            j++;
        }
    }
    return giv;
}
int main (){
     printf("enter the gSize : ");
    int gSize;
    scanf("%d",&gSize);
    printf("enter the sSize : ");
    int sSize;
    scanf("%d",&sSize);
    int g[gSize];
    int s[sSize];
    printf("enter the greed array\n");
    for (int i=0;i<gSize;i++){
        scanf("%d",&g[i]);
    }
 printf("enter the cokkie size array\n");
    for (int i=0;i<sSize;i++){
        scanf("%d",&s[i]);
    }
    printf("the output is %d",findContentChildren(g,gSize,s,sSize));
return 0;
}
