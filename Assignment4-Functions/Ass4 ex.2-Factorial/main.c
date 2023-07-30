
#include <stdio.h>
int factorial(int num);

int main(){
	int i;
	printf("Enter a positive integer\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	printf("Factorial of %d is %d ",i,factorial(i));

	return 0;}


int factorial(int num){
	if(num==1 || num==0){return 1;}
	return num*factorial(num-1);


}
