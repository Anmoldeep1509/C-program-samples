#include<stdio.h>

int main(int argc, char const *argv[])
{
	printf("The size of int is %d bits\n", 8*sizeof(int));
	printf("The size of float is %d bits\n", 8*sizeof(float));
	printf("The size of double is %d bits\n", 8*sizeof(double));
	printf("The size of long is %d bits\n", 8*sizeof(long));
	return 0;
}