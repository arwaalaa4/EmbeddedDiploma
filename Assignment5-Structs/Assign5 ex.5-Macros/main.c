/*
 * main.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Digital
 */


#include <stdio.h>
#define pi 22/7
#define circumference(radius) 2*pi*radius

int main(){

	float r;
	printf("Enter raduis of circle\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&r);
	printf("circumference of circle is %f",circumference(r));



	return 0;
}
