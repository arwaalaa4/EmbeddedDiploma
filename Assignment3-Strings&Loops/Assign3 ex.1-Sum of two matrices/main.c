/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: Digital
 */
//EX1: Sum of two matrices entered by user

#include <stdio.h>


int main(){
	printf("Enter first matrix\n");
	float a[2][2];
	int i,j; float n;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter a [%d][%d] \n",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[i][j]);
		}}
	//second matrix and calculating sum in one step
	printf("Enter second matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter b [%d][%d] \n",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&n);
			a[i][j]=a[i][j]+n;
		}}
	//Printing sum
	printf("sum =\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){printf("%f ",a[i][j]);} printf("\n");}
	return 0;}
