/* write a menu driven program to perform following task using diffrent function category
	1.prime number 2.pallindrom number 3.reverse number 4.print even number series till end 5.exit	*/
#include<stdio.h>
#include<conio.h>
void prime();
void pallindrome(int,int);
int reverse();
int even(int);
int menu();
void main()
{
	int c,v1,v2;
	char ch;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				prime();
				break;
			case 2:
				printf("\n enter two value:");
				scanf("%d%d",&x&y);
				pallindrome(x,y);
				break;
			case 3:
				c=reverse();
				printf("\n reverse number is : %d",c);
				break;
			case 4:
				printf("enter two value:");
				scanf("%d%d",&x,&y);
				c=even(x,y);
				printf("\n even of %d is %d"x,y,c);
				break;
			case 5:
				break;
			case 6:
				exit(0);
			default:
				printf("\n\t\t invalid choice.\n please enter the choice");
		}
		printf("\n\t\t do you want to continue?(yes=Y/y,no=N/n):");
		flushall();
		scanf("%c",&ch);
	}while(ch=='Y'||=ch=='y');
	getch();
}
		clrscr();
		printf("\n\n\t\t menu \n\t");
		printf("\n\t----------------");
		printf("\n\t\t 1.prime number \n\t\t 2.pallindrome number\n\t\t 3.reverse number\n\t\t 4.print even number series till end 5.exit ");
		printf("\n\t\t--------------");
		printf("\n\t\t enter your choice:");

