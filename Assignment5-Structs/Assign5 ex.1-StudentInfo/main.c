/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: Digital
 */

#include <stdio.h>
struct Student{
	char name[100];
	int roll_num;
	int marks;
};

typedef struct Student Student;

int main(){
	Student X;
	printf("Enter information of students: \n");
	printf("Enter student's name: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",X.name);
	printf("Enter student's roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&X.roll_num);
	printf("Enter student's marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&X.marks);

	printf("\nDisplaying information");
	printf("\nname: %s \n",X.name);
	printf("Roll number: %d \n",X.roll_num);
	printf("Marks %d \n",X.marks);

	return 0;
}
