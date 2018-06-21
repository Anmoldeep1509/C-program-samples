#include<stdio.h>
#include<conio.h>

void main()
{
	int n, x, n1=0, n2=1, n3;
	printf("Enter A number:");
	scanf("%d", &n);
	printf("Fibonacci numbers are:");
	printf(" %d %d", n1, n2);
	for(x=2;x<n;x++)
	{
		n3 = n1 + n2;
		
		printf(" %d", n3);
		n1=n2;
		n2=n3;
		
	}
}
