#include <stdio.h>
int romanToInt(char* s){
	int values[128] = {0}; 
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    int numb=0;    
    int i=0;
        while(s[i]!='\0'){
            if (s[i+1]!='\0' && values[(int)s[i]] < values[(int)s[i+1]]){
                numb += values[(int)s[i+1]] - values[(int)s[i]];
                i+=2;
            }
            else {numb+= values[(int)s[i]];
            i++;}
        }
    return numb;
}
int main (){
    char rom[20];
    printf("enter the roman number : ");
    scanf("%s",rom);
    printf("%s = ",rom);
    printf(" %d ",romanToInt(rom));
    return 0;
}
