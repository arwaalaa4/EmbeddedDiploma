#include <stdio.h>
#include <string.h>

//Reverse String Function

void Reverse_String(const char str[]);

int main(){
	char string[100];
	printf("Enter your string>> ");
	fflush(stdin);fflush(stdout);
	gets(string);
	Reverse_String(string);
	return 0;}


void Reverse_String(const char str[]){
	//ABCD
	//DCBA
	char string[100];
	int len=strlen(str)-1;
	for(int i=0;i<=len;i++){
		string[i]=str[len-i];
	}
	string[len+1]=NULL;
	printf("Reversed string is %s",string);
}
