/*
 * main.c
 *
 *  Created on: Aug 20, 2023
 *      Author: Digital
 */

#include<stdio.h>

void Rev_String(char* str){
	int n=0;
	char*temp=str;
	//Calculate length of string
	while(*temp++){n++;}
	char tstr;
	for (int i=0;i<n/2;i++){tstr = str[i];
	str[i] = str[n - i - 1];
	str[n - i - 1] = tstr;  }
}

int main(){
	char str[]="W3schools";

	Rev_String(str);
	printf("%s",str);

	return 0;
}
