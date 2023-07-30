
//EX5: Search for an element

#include<stdio.h>

int main(){
	int ne,i;
	float e;
	printf("enter no. of elements\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&ne);
	float arr5[ne];
	printf("enter elements\n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<ne;i++){scanf("%f",&arr5[i]);}

	printf("enter the element to be searched about:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&e);

	for(i=0;i<ne;i++){if(arr5[i]==e){printf("the locatio is %d",i+1);break;}}

	return 0;
}

