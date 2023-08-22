/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: Digital
 */

#include <stdio.h>

void rev_int(int*arr,int n){
	//ptr is a Pointer referring to last element of array
	int(*ptr)[n]=arr;
	ptr++;
    int *ptr2=(int*)ptr;
    ptr2--; //pointing to the starting byte of last element

   for(int x=0;x<n;x++){
    printf("element %d is %d\n",n-x,*(ptr2--));
    }



}

int main(){
	int arr[6];
	for(int i=0;i<6;i++){
		printf("enter element %d\n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

rev_int(arr,6);




	return 0;
}
