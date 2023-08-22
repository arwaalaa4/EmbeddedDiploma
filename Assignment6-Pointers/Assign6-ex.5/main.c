/*
 * main.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Digital
 */


#include <stdio.h>
struct Semploye{
	char* name;
	int ID;
};
typedef struct Semploye Semploye;

int main(){
	Semploye emp1={"Ahmed" , 2304};
	Semploye emp2={"Arwa", 2314};
	Semploye emp3={"Sara",2311};


	//pointer to array which contents are pointers to structs

	//Array of pointers to structs
	Semploye*arr[3]={&emp1,&emp2,&emp3};

	//Pointer to array of pointers to structs
	Semploye**ptr=arr;

	// printf("%d",(*(ptr+2))->ID);
	printf("%s %d\n",(ptr[0])->name,(ptr[0])->ID);
	printf("%s %d\n",(ptr[1])->name,(ptr[1])->ID);
	printf("%s %d\n",(ptr[2])->name,(ptr[2])->ID);




	return 0;
}
