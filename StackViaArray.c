#include <stdio.h>
#include<ctype.h>
# define MAXSIZE 200

int stack[MAXSIZE];
int top;	//index pointing to the top of stack
void main()
{
void push(int);
int pop();
int will=1,i,num;
clrscr();

while(will ==1)
{
printf("
		MAIN MENU: 
	1.Add element to stack
	2.Delete element from the stack
");
scanf("%d",&will);

switch(will)
{
case 1:
	printf("
Enter the data... ");
	scanf("%d",&num);
	push(num);
	break;
case 2: i=pop();
	printf("
Value returned from pop function is  %d ",i);
	break;
default: printf("Invalid Choice . ");
}

printf(" 

			Do you want to do more operations on Stack ( 1 for yes, any other key to exit) ");
scanf("%d" , &will);
} //end of  outer while
}               //end of main
void push(int y)
{

if(top>MAXSIZE)
       {
       printf("

		STACK FULL

");
       return;
       }
else
	{
	top++;
	stack[top]=y;
	}
}

int pop()
{
int a;
if(top<=0)
	{
	printf("

		STACK EMPTY

		");
	return 0;
	}
else
	{
	a=stack[top];
	top--;
	}
return(a);

}
