#include<stdio.h>

void main()
{
	int x, num, count=0;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	for(x=1;x<=num;x++)
	{
		if(num%x==0)
		{
			count += 1;
		}
		else
			continue;
	}
	
	if(count>2)
	{
		printf("The number %d is not a prime number.", num);
	}
	else
	{
		printf("The number %d is a prime number.", num);
	}
}
