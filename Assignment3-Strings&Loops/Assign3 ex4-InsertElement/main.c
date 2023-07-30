
#include <stdio.h>
//EX4: Insert an element in a certain location in array

int main(){
	int nf,i,loc;
	float ins;
	printf("enter no. of elements\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&nf);
	float arr4[nf];
	printf("enter elements\n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<nf;i++){scanf("%f",&arr4[i]);}
	printf("enter element to be inserted \n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&ins);
	printf("enter Location \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&loc);
	arr4[loc]=ins;
	for(i=0;i<nf;i++){printf("%f ",arr4[i]);}

	return 0;}

