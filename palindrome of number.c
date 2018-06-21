#include<stdio.h>

void main()
{
	int num, temp, rem, q, sum=0;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	temp=num;
	
	while(num>0)
	{
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;		
	}
	
	if(temp==sum)	
	{
		printf("It is a palindrome.");
	}
	else
	{
		printf("It is not a palindrome.");
	}
	
}
