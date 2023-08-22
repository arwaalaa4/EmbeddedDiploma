/*
 * main.c
 *
 *  Created on: Aug 20, 2023
 *      Author: Digital
 */

#include<stdio.h>

int main(){
	int m=29;
	printf("Address of m is %p \n",&m);
	printf("value of m=%d\n",m);
	int*ptr=&m;
	printf("Now ptr is assigned with address of m\n");
	printf("Adress of pointer ptr is %p\n",ptr);
	printf("content of pointer ptr is %d \n",*ptr);
	*ptr=34;
	printf("Value of m now is %d\n",*ptr);
	printf("Adress of pointer ptr is %p\n",ptr);
		printf("content of pointer ptr is %d \n",*ptr);



	return 0;
}
