//#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
int intro();
void add(int *);
void sub(int *);
void mul(int *);
void mdiv(int *);
int main()
{
	int ch,marks=0;

	ch=intro();

	switch(ch)
	{
	case 1:
		add(&marks);
		break;
	case 2:
		sub(&marks);
		break;
	case 3:
		mul(&marks);
		break;
	case 4:
		mdiv(&marks);
		break;
	 default:
		 printf("Invalid input\n");
		 main();
	}

	printf("Your marks for this module are %d\n",marks);

	return 0;
}

int intro()
{
	char name[20];

	int ch;

	system("clear");

	printf("\t\t!! Welcome !!\n\tPlease enter your name : ");

	gets(name);

	system("clear");

	printf("Hello! %s choose from the given menu\n\n\t1.Quiz on addition\n\t2.Quiz on subtraction\n\t3.Quiz on multiplication\n\t4.Quiz on division\n",name);
	printf("(Enter 1 to choose first)\n");

	scanf("%d",&ch);

	system("clear");

	return (ch);
}

void add(int *fmarks)
{
	int ans;
	printf("Welcome to addition module\nEnter 1 to start\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q1:\t3+4\n");
	scanf("%d",&ans);
	if(ans==7)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 7\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q2:\t9+1\n");
	scanf("%d",&ans);
	if(ans==10)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 10\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q3:\t7+1\n");
	scanf("%d",&ans);
	if(ans==8)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 8\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
		
}

void sub(int *fmarks)
{
	int ans;
	printf("Welcome to subtraction module\nEnter 1 to start\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q1:\t10-4\n");
	scanf("%d",&ans);
	if(ans==6)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 6\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q2:\t9-7\n");
	scanf("%d",&ans);
	if(ans==2)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 2\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q3:\t6-2\n");
	scanf("%d",&ans);
	if(ans==4)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 4\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
}

void mul(int *fmarks)
{
	int ans;
	printf("Welcome to multiplication module\nEnter 1 to start\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q1:\t3*6\n");
	scanf("%d",&ans);
	if(ans==18)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 18\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q2:\t5*3\n");
	scanf("%d",&ans);
	if(ans==15)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 15\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q3:\t2*6\n");
	scanf("%d",&ans);
	if(ans==12)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 12\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
}

void mdiv(int *fmarks)
{
	int ans;
	printf("Welcome to division module\nEnter 1 to start\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q1:\t10/5\n");
	scanf("%d",&ans);
	if(ans==2)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 2\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q2:\t16/2\n");
	scanf("%d",&ans);
	if(ans==8)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 8\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
	printf("Q3:\t12/4\n");
	scanf("%d",&ans);
	if(ans==3)
	{
		printf("CORRECT !\n");
		*fmarks+=1;
	}
	else
		printf("OOPS!\t it is 3\n");
	printf("Press 1\n");
	scanf("%d",&ans);
	system("clear");
}

