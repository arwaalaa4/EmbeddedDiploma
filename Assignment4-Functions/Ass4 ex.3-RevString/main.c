#include <stdio.h>
#include <string.h>


void reverseString(char *str, int len);

int main(){

	char str[100];
		    printf("Enter a string: ");
		    fflush(stdin); fflush(stdout);
		    gets(str);
		    int len = strlen(str);
		    reverseString(str,len - 1);
		    printf("Reversed string: %s\n", str);
		    printf("Enter a string: ");
		    fflush(stdin); fflush(stdout);
		    	   gets(str);
		    	    len = strlen(str);
		    	    reverseString(str,len - 1);
		    	    printf("Reversed string: %s\n", str);
	return 0;}

void reverseString(char *str, int len){

   static int start=0;
	if (start >= len) { start=0;
        return;
    }
    char temp = str[start];
    str[start] = str[len];
    str[len] = temp; start++;
    reverseString(str, len - 1);
}

