/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: Digital
 */


#include <stdio.h>

struct complex{
	float real;
	float img;
};

typedef struct complex cmplx;


cmplx Add_Numbers(cmplx num1,cmplx num2){
	float real_res=num1.real+num2.real;
	float img_res=num2.img+num1.img;

	cmplx result={real_res,img_res};
	return result;}

int main(){
	cmplx num1,num2,res;
	printf("For the First Number: \n Enter real and imaginary respectively\n");
	fflush(stdout);fflush(stdin);
	scanf("%f",&num1.real);
	scanf("%f",&num1.img);
	printf("\nFor the Second Number: \n Enter real and imaginary respectively\n");
	fflush(stdout);fflush(stdin);
		scanf("%f",&num2.real);
		scanf("%f",&num2.img);

		res=Add_Numbers(num1,num2);
		printf("\nsum= %0.2f + %0.2fi",res.real,res.img);
	return 0;
}
