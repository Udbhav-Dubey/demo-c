//C program to find the sum of opposite diagonal elements of a matrix
#include <stdio.h>
int main (){
	int sum;
	printf("enter the elements of 3X3 matrice\n");
	int arr [3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i=0;i<3;i++){
		if (i+j==3-1){
		sum += arr[i][i];
	}}
	printf("the sum is %d\n",sum);
return 0;
}
