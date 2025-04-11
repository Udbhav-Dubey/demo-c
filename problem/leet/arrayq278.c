#include <stdio.h>
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int hold=1;
    for (int i=1;i<=n;i++){
        if (isBadVersion(i)==1){
            hold =i;
            break;
        }
    }
    return hold;
}

int main (){
return 0;
}
