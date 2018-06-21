#include<stdio.h>

void main()
{
	int num, x, fact=1;
	
	printf("Enter Number:");
	scanf("%d", &num);
	x=num;
	while(num>0)
	{
		fact *= num;
		num--; 
		
	}
	
	printf("Factorial of %d is %d", x, fact);
}
