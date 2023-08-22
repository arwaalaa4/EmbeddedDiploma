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
	Student stud[10];
	printf("Enter information of students: \n");

	for(int i=0;i<10;i++){
		printf("For roll number:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&stud[i].roll_num);
		printf("Enter student's name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",stud[i].name);
		printf("Enter student's marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&stud[i].marks);
	}

	for(int i=0;i<10;i++){
		printf("\ninformation of roll number: %d\n",stud[i].roll_num);
		printf("Name: %s \n",stud[i].name);
		printf("Marks: %d \n",stud[i].marks);


	}


	return 0;
}
