/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: Digital
 */
#include <stdio.h>
int Power(int base,int pow);

int main(){
	int a,b;
	printf("Enter the base number:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("\nEnter the power:\n");
		fflush(stdin);fflush(stdout);
		scanf("%d",&b);
		printf("%d to the power of %d =%d",a,b,Power(a,b));



	return 0;}

int Power(int base,int pow){
	if(pow==1){return base;}
	if(pow==0){return 1;}
	return base*Power(base,pow-1);
}
