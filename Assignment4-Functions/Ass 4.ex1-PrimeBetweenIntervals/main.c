#include <stdio.h>
#include <math.h>
#include <string.h>
//1
int Is_Prime(int num);
void Print_Intervals(int a, int b);


int main (){
	int a,b;
	printf("Enter two numbers\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a); scanf("%d",&b);
	Print_Intervals(a,b);

	return 0;
}



int Is_Prime(int num){
	int rt=sqrt(num);
	for(int i=2;i<=rt;i++){
		if (num%i==0){return 0;}}//not prime
	return 1; //prime
	}

void Print_Intervals(int a, int b){
	for(int i=a;i<b;i++){

		if (Is_Prime(i)==1){printf("\n%d ",i);}
	}

}
