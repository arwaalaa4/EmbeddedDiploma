#include <stdio.h>

//Strlen implementation

int len_str(char string[]){
		int len=0;
		int i=0;
		while(string[i++]){
			len++;
		}
		return len;

	}
int main(){
	printf("Enter string:\n");
	fflush(stdin);fflush(stdout);
	char string[100];
gets(string);
int lenght=len_str(string);
printf("Lenght of string is %d",lenght);
	return 0;}




