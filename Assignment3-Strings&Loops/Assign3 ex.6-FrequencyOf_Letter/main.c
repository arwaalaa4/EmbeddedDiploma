
//EX6: Find frequency of Letter in a string
#include <stdio.h>

int main(){

	char str[100];
	char chr; int frq=0;int i=0;
	printf("enter string\n");
	fflush(stdin); fflush(stdout);
	gets(&str);
	printf("enter a character\n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&chr);
	while(str[i]){if(str[i]==chr){frq++;}i++;}
	printf("frequency of character %c is %d",chr,frq);


	return 0;
}

