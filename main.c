#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum = 0;
	int num;
	int i;
	
	printf("input a number : ");
	scanf("%i", &num);
	
	for (i=0; i<=num; i++)
	{
		sum += i;
	}
	
	printf("The result is %i ", sum);
	
	return 0;
}
