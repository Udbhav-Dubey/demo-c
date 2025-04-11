#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char* s) {
    int freq[128]={0};
    int left=0,maxlength=0;
    for (int right =0;s[right]!='\0';right++){
            freq[s[right]]++;
            
        while (freq[s[right]]>1){
        freq[s[left]]--;
         left++;
            
   }
   int length = right - left +1;
            if (length > maxlength){
                maxlength=length;     		
        }
        }
    return maxlength;
    }

int main (){
    char str[3999];
    printf("please enter the string : ");
    fgets(str,3999,stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("well the output is %d",lengthOfLongestSubstring(str));
return 0;
}
