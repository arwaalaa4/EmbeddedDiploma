/*
 * main.c
 *
 *  Created on: Aug 6, 2023
 *      Author: Digital
 */
#include <stdio.h>

struct distance{
	float feet;
	float inches;
};
typedef struct distance dist;


dist Add_distances(dist distance1,dist distance2){
	float result_feet=distance1.feet+distance2.feet;
	float result_inches=distance1.inches+distance2.inches;
	if(result_inches>12){result_feet++;
	result_inches=result_inches-12;}
	dist result={result_feet,result_inches};
	return result;}


int main(){
	dist dist1,dist2,result;
	printf("Enter the 1st distance: \n");
	printf("Enter feet:\n ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&dist1.feet);
	printf("Enter inch: \n");
	fflush(stdout);fflush(stdin);
	scanf("%f",&dist1.inches);
	printf("Enter the 2nd distance: \n");
	printf("Enter feet:\n ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&dist2.feet);
	printf("Enter inch: \n");
	fflush(stdout);fflush(stdin);
	scanf("%f",&dist2.inches);
result=Add_distances(dist1,dist2);
printf("\nsum of distances %f feet and %f inches",result.feet,result.inches);
	return 0;
}

