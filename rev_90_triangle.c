#include <stdio.h>
int main (){
	printf("enter number of rows : ");
	int r;
	scanf("%d",&r);
	for (int i=1;i<=r;i++){
		for (int j=1;j<=r-i+1;j++){
			printf("*");
		}
			printf("\n");
	}
return 0;
}
