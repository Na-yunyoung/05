#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int num;
	int i=0;
	
	do
	{
		printf("Guess a number : ");
		scanf("%i", &num);
		i += 1;
		
		if (num > answer)
		{
			printf("high!\n");
		}
		else if (num < answer)
		{
			printf("low!\n");
		}
	}
	while (num != answer);
		printf("Congratulation! trials: %i",i);
	return 0;
}
