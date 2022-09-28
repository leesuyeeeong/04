#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int sec, min, hour;
	printf("input the second : ");
	scanf_s("%d", &sec);
	
	min = sec / 60;
	hour = min / 60;
	sec = sec % 60;
	min = min % 60;
	
	printf("The time for second is %d : %d : %d", hour, min, sec);
	return 0;	
}

