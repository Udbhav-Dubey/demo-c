#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isSubsequence(char* s, char* t) {
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';
    int len_S=strlen(s);
    int len_T=strlen(t);
    if (len_S>len_T){
          return false;
      }
        int j=0,i=0;
       while(i<len_T){        
           if (s[i]==t[j]){
                printf("%d and %d \n",i,j);
               j++;
               i++;
        }
           else{ i++;}
    }
    if (j>=len_S){
    return true;
    }
    else {return false;}
}
int main (){
    char t[1000];
    char s[1000];
    printf("please enter the s\n");
    fgets(s,1000,stdin);
    strlen(s);
    printf("please enter the t\n");
    fgets(t,1000,stdin);
    strlen(t);
    printf("the output is %d",isSubsequence(s,t));
return 0;
}
