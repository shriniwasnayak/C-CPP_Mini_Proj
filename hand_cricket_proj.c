//#include"stdafx.h"
#include<stdio.h>
#include<stdlib.h>
void intro();
int bowl();
void bat(int );
int main()
{
	int runs;

	intro();
	runs=bowl();
	bat(runs);
	return 0;
}
void intro()
{
	printf("---------------------------------------------------------------------------------------\n\n");
	printf("                                 WELCOME !!!!!!!!!!\n");
	printf("				     HAND CRICKET \n");
	printf("---------------------------------------------------------------------------------------\n\n");

	char name[20];
	int b;

	printf("Enter your name\n");

	gets(name);

	system("clear");

	printf(" Ready to play ? ");
	puts(name);
	printf("Press 1 to continue\n");

	scanf("%d",&b);

	system("clear");

	return ;
}
int bowl()
{
	int b,ip,runs=0,balls_left=30,i=0,a[30]={3,6,2,5,4,3,3,1,6,2,4,5,5,5,3,6,1,2,4,3,5,1,6,6,3,2,5,1,4,1};

	printf("It is your turn to bowl\n\nPress 1 to warm up\n\n");

	scanf("%d",&b);

	system("clear");

	printf("We have a match of 6 overs\nBowl 30 balls or try and get me out\nPress 1 to start the match\n\n");

	scanf("%d",&b);

	system("clear");

	while(balls_left>0)
	{
		scanf("%d",&ip);

		if(ip==a[i])
		{
			printf("%d\n",a[i]);
			printf("\n\n		OUT !!!!!!!!!\n\n");
			break;
		}

		else
			runs+=a[i];

		
		balls_left--;

		printf("%d\tmy score :-  %d\n\nBalls left-  %d\n\n",a[i],runs,balls_left);

		i++;
	}

	printf("Enter 1 to continue\n");

	scanf("%d",&b);

	system("clear");

	printf("You need to make %d runs to win\n\n",runs+1);

	printf("Enter 1 to continue\n");

	scanf("%d",&b);

	system("clear");

	return (runs+1);
}
void bat(int fruns)
{
	int b,balls_left=30,i=0,runs=0,ip,bowl[30]={6,4,5,2,4,4,3,1,2,6,5,4,1,1,2,6,4,3,5,3,6,4,2,6,5,1,6,2,3,6};

	printf("Press 1 to start your innings remember you need to score %d runs in 30 balls\n",fruns);

	scanf("%d",&b);

	system("clear");

	while(balls_left>0)
	{
		scanf("%d",&ip);

		balls_left--;

		if(ip==bowl[i])
		{
			printf("%d\n\n	OUT  !!!!!!!!\n\n",bowl[i]);
			printf("you lost the match\n\nnever mind better luck next time\n\n");
			break;
		}

		else
		{
			runs+=ip;

			if(runs>=fruns)
			{
				printf("%d\tyour score :-  %d\n",bowl[i],runs);
				printf("\n\nYOU WON THE MATCH\n\nCONGRAGULATIONS!!!!!!!!!!!!\n\n\n");
				break;
			}

			printf("%d\tyour score :-  %d\nBalls Left :-  %d\tRuns to win :-  %d\n\n",bowl[i],runs,balls_left,fruns-runs);
		}

		i++;
	}

	return ;
}
