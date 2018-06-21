#include<stdio.h>
#include<conio.h>

char arr[9]={'1','2','3','4','5','6','7','8','9'};
char p1='O',p2='X',res='y',ch;  //desired symbols for each player
int result=0;	//0 for in progress
				//1 for p1 win
				//2 for p2 win
	
void display(void) /*displays the current matrix*/
{
	printf("\n");
	if (result==0)
		printf("Enter 0 to abandon.\n");
	printf("  %c  |  %c  |  %c\n",arr[0], arr[1], arr[2]);
	printf("-----------------\n");
	printf("  %c  |  %c  |  %c\n",arr[3], arr[4], arr[5]);
	printf("-----------------\n");
	printf("  %c  |  %c  |  %c\n",arr[6], arr[7], arr[8]);
}

void reset(void) 	/* converts the complete matrix					back to 1-9*/
{	
	int i;
	char a='1';
	for(i=0; i<9; i++)
	{
		arr[i] = a+i;
	}
}

void pause(void)
{
	printf("\t\t Press any key to continue...");
	getch();
	clrscr();
}

void hello(void)
{
	printf("\t\t WELCOME TO TIC TAC TOE !!!\n\n");
	pause();
}
int getresult()
{
	//0 for in progress
	//1 for p1 win
	//2 for p2 win
	// char p1='O',p2='X',res='y',ch;
	//check for p1 win

	if( (arr[0]=='O' && arr[1]=='O'&& arr[2]=='O')|| // row1 check
		(arr[3]=='O' && arr[4]=='O'&& arr[5]=='O')|| // row2 check
		(arr[6]=='O' && arr[7]=='O'&& arr[8]=='O')|| // row3 check
		
		(arr[0]=='O' && arr[3]=='O'&& arr[6]=='O')|| // col1 check
		(arr[1]=='O' && arr[4]=='O'&& arr[7]=='O')|| // col2 check
		(arr[2]=='O' && arr[5]=='O'&& arr[8]=='O')|| // col3 check

		(arr[0]=='O' && arr[4]=='O'&& arr[8]=='O')|| // diag1 check
		(arr[2]=='O' && arr[4]=='O'&& arr[6]=='O')   // diag2 check
		)
		return(1);
	//check for p2 win
	else if((arr[0]=='X' && arr[1]=='X'&& arr[2]=='X')|| // row1 check
			(arr[3]=='X' && arr[4]=='X'&& arr[5]=='X')|| // row2 check
			(arr[6]=='X' && arr[7]=='X'&& arr[8]=='X')|| // row3 check

			(arr[0]=='X' && arr[3]=='X'&& arr[6]=='X')|| // col1 check
			(arr[1]=='X' && arr[4]=='X'&& arr[7]=='X')|| // col2 check
			(arr[2]=='X' && arr[5]=='X'&& arr[8]=='X')|| // col3 check

			(arr[0]=='X' && arr[4]=='X'&& arr[8]=='X')|| // diag1 check
			(arr[2]=='X' && arr[4]=='X'&& arr[6]=='X')   // diag2 check
			)
		return(2);
	else
		return(0);
}

int getinput()
{
	char turn = p1;
	do
	{
		clrscr();
		display();

		printf("\n\nEnter your choice:");
		scanf("%s",&ch);
		switch(ch)
		{
			case '1':
				if(turn==p1 && arr[0]=='1')
					arr[0]=p1;
				else if(turn==p2 && arr[0]=='1')
					arr[0]=p2;
				else
					printf("occupied column\n");
				break;
			case '2':
				if(turn==p1 && arr[1]=='2')
					arr[1]=p1;
				else if(turn==p2 && arr[1]=='2')
					arr[1]=p2;
				else
					printf("occupied column\n");
				break;
			case '3':
				if(turn==p1 && arr[2]=='3')
					arr[2]=p1;
				else if(turn==p2 && arr[2]=='3')
					arr[2]=p2;
				else
					printf("occupied column\n");
				break;
			case '4':
				if(turn==p1 && arr[3]=='4')
					arr[3]=p1;
				else if(turn==p2 && arr[3]=='4')
					arr[3]=p2;
				else
					printf("occupied column\n");
				break;
			case '5':
				if(turn==p1 && arr[4]=='5')
					arr[4]=p1;
				else if(turn==p2 && arr[4]=='5')
					arr[4]=p2;
				else
					printf("occupied column\n");
				break;
			case '6':
			       if(turn==p1 && arr[5]=='6')
					arr[5]=p1;
				else if(turn==p2 && arr[5]=='6')
					arr[5]=p2;
				else
					printf("occupied column\n");
				break;
			case '7':
				if(turn==p1 && arr[6]=='7')
					arr[6]=p1;
				else if(turn==p2 && arr[6]=='7')
					arr[6]=p2;
				else
					printf("occupied column\n");
				break;
			case '8':
				if(turn==p1 && arr[7]=='8')
					arr[7]=p1;
				else if(turn==p2 && arr[7]=='8')
					arr[7]=p2;
				else
					printf("occupied column\n");
				break;
			case '9':
				if(turn==p1 && arr[8]=='9')
					arr[8]=p1;
				else if(turn==p2 && arr[8]=='9')
					arr[8]=p2;
				else
					printf("occupied column\n");
				break;
			case '0':
				return 3;
			default:
				printf("Wrong input\n");
				break;
		}
		if(turn==p1)
			turn=p2;
		else
			turn=p1;
		result=getresult();
	}while(result==0);
	return(result);
}

void main()
{
	res='y';
	clrscr();
	hello();
	while(1)
	{	
		clrscr();
		display();
		result=getinput();
		
		if(result==1)
		{
			printf("\nFinal view\n");
			display();
			printf("Player 1 wins!!!\n\n");
		}
		else if(result==2)
		{
			printf("\nFinal view\n");
			display();
			printf("Player 2 wins!!!\n\n");
		}
		else if(result==3)
			printf("game left in middle\n");
		else
		{
			display();
			printf("It's a draw!\n");
		}
		
		printf("\n\ndo you want to play again?");
		printf("Y/N:\n");
		scanf("%s", &res);
		if(res=='n'||res=='N')
			break;
		else
			reset();
	}
	printf("End of program");
	getch();
}
