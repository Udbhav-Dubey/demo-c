#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str); 

    int freq[4] = {0}; 

    for (int i = 0; str[i] != '\0'; i += 2) {
        freq[str[i] - '0']++; 
    }

    
    int idx = 0;
    for (int num = 1; num <= 3; num++) {
        for (int j = 0; j < freq[num]; j++) {
            str[idx++] = num + '0'; 
            str[idx++] = '+';       
        }
    }

    if (idx > 0) str[idx - 1] = '\0'; 
    else str[0] = '\0';

    printf("%s\n", str);

    return 0;
}

