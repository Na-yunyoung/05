#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int number;
	
	printf("input a string : ");
	
	while ((c = getchar()) !='\n')
	{
		if (c >= '0'&& c <= '9')
			number += 1;
	}
	
	printf("the number of digits is %i ", number);
	
	return 0;
}
