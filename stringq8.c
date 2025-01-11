// C program to find total number of alphabets, digits or special characters in a string
#include <stdio.h>
int main (){
    int dig,sp,al;
	printf("C program to find total number of alphabets, digits or special characters in a string");
	char str[256];
	fgets(str,256,stdin);
	for (int i=0;str[i]!='\0';i++){
		if (str[i]=='\n'){
		str[i]='\0';
		}
	}
	for (int i=0;str[i]!='\0';i++){
        if (33<=str[i]&&str[i]>=64){
            sp++;
        }
        if ('a'<=str[i]&&str[i]<='z'){
            al++;
        }
        if ('A'<=str[i]&&str[i]<='Z'){
            al++;
            }
        if ('0'<=str[i]&&str[i]>='9'){
            dig++;
        }
	}
printf("digits: %d \nalphabets : %d \nspecial: %d\n",dig,al,sp);
}
