#include <stdio.h>
#include <stdlib.h>
int compare(const void*a,const void*b){
    int* rowA=*(int**)a;
    int* rowB=*(int**)b;
    return rowB[1]-rowA[1];
}
int maximumUnits(int** boxTypes, int boxTypesSize, int* boxTypesColSize, int truckSize) {
   qsort(boxtypes,boxtypesSize,sizeof(boxTypes[0]),compare);
   int maxUnit=0;
   for (int i=0;i<boxTypesSize;i++){
        int boxes=boxTypes[i][0];
        int units=boxTypes[i][1];
        if (truckSize>=boxes){
            maxUnit += boxes * units;
            truckSize -= boxes;
        }
        else{
        maxUnit += truckSize * units;
        break;}
   }
    return maxUnit;
}

int main (){
    printf("please enter the ")
return 0;
}
