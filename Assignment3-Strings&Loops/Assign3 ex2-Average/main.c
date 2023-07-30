

//EX2: Calculate Average

#include <stdio.h>

int main(){
	int n;
	float sum;
	printf("enter the number of elements\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	float arr[n];
	int i2;
	for(i2=0;i2<n;i2++){printf("enter a number\n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&arr[i2]); sum=sum+arr[i2];}
	printf("\n Average=%f",sum/n);





	return 0;
}


