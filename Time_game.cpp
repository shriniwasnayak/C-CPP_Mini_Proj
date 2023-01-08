/*

Shriniwas Nayak
SE Comp
shriniwasnayak1@gmail.com

mini project in C++ consists of three type of games used concepts - 
1. Functions
2. Pointers
3. Class
4. timer
5. random function 

Data structure used-
1. Array
*/

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstring>
using namespace std;
class player
{
private :
	char name [20];
	int age,pts;
public:

	player()
	{
		name[0]='\0';
		age=0;
		pts=0;
	}
	int intro()
	{
		system("clear");

		cout<<"-------------------------------------------------------------------------------------\n\n";

		cout<<"                                Welcome !!!!!!                                         \n\n";

		cout<<"-------------------------------------------------------------------------------------\n\n";

		int ch=0;

		cout << "Press :\n1. GAME 1\n2. GAME 2\n3. GAME 3\n4. To Exit\n\n";

		cin >> ch;

		switch(ch)
		{
		case 1:
			return (intro1());
			break;
		case 2:
			return (intro2());
			break;
		case 3:
			return (intro3());
			break;
		}

		return ch;
	}
	
	int intro1(void)
	{
		system("clear");

		int ch;

		cout<<"\nPress choice :\n1. For instructions\n2. To play \n3. To exit\n\n";

		cin>>ch;

		system("clear");

		if(ch==1)
		{
			cout<<"The game is very simple :\n\nA message will appear on the screen that prompts you to enter 1 after specified seconds\n\nIf you differ by more than 2 seconds you loose\n\nFor each successful turn you get 5 points\n\nALL THE BEST !!!\n\n";
			cout<<"Press 1 to continue\n";
			cin>>ch;
			return (1);
		}

		if(ch==2)
			return (1);

		else if(ch==3)
			exit(1);
	}

	int intro2()
	{
		system("clear");

		int ch;

		cout<<"\nPress choice :\n1. For instructions\n2. To play \n3. To exit\n\n";

		cin>>ch;

		system("clear");

		if(ch==1)
		{
			cout<<"The game is very simple :\n\nA message will appear on the screen that prompts you to enter a letter within 2 seconds\n\nIf you take by more than 2 seconds you loose\n\nFor each successful turn you get 5 points\n\nALL THE BEST !!!\n\n";
			cout<<"Press 1 to continue\n";
			cin>>ch;
			return (2);
		}

		if(ch==2)
			return (2);

		else if(ch==3)
			exit(1);
	}

	int intro3()
	{
		system("clear");

		int ch;

		cout<<"\nPress choice :\n1. For instructions\n2. To play \n3. To exit\n\n";

		cin>>ch;

		system("clear");

		if(ch==1)
		{
			cout<<"The game is very simple :\n\nA message will appear on the screen that prompts you to enter a word within 6 seconds\n\nIf you take by more than 6 seconds you loose\n\nFor each successful turn you get 5 points\n\nALL THE BEST !!!\n\n";
			cout<<"Press 1 to continue\n";
			cin>>ch;
			return (3);
		}

		if(ch==2)
			return (3);

		else if(ch==3)
			exit(1);
	}

	void info()
	{
		system("clear");

		bool bu;

		cout<<"Please enter your name and age\n\n";
		cin>>name>>age;
		system("clear");
		cout<<"Hi "<<name<<" to start press 1\n\n";
		
		cin >> bu;
	}

	void game1()
	{
		system ("clear");

		srand(time(0));

		int s,diff=0;

		pts=0;

		bool num;

		time_t t1,t2;

		while(diff<=2&&diff>=-2)
		{
			s=4+(rand()%10);

			cout<<"Enter 1 after : "<<s<<" seconds\n\n";

			t1=time(0);

			cin>>num;

			t2=time(0);

			diff=s-(t2-t1);

			if(diff<=2&&diff>=-2)
				pts+=5;
		}

		cout<<"YOU DID NOT MATCH THE TIME LIMIT \n\nYou took "<<t2-t1<<" seconds\n\n";
	}

	void display ()
	{
		int ch;

		cout<<name<<" you scored "<<pts<<"\n\n";
	}

	void game2 (void)
	{
		system ("clear");

		int i,diff=1;

		time_t t1,t2;

		srand(time(0));

		pts=0;

		char c='a',in='a';

		while(diff<=2&&in==c)
		{
			i = (rand()%26) + 97;

			c = i;

			cout<<"Enter " << c << " within 2 seconds\n\n";

			t1=time(0);

			cin>>in;

			t2=time(0);

			diff=(t2-t1);

			if(diff<=2&&in==c)
				pts+=5;
		}
		if(in!=c)
			cout << "\nYOU ENTERED WRONG CHARACTER \n\n";
		else
			cout<<"YOU DID NOT MATCH THE TIME LIMIT\nYou took "<<t2-t1<<" seconds\n\n";
	}	

	void game3(void)
	{
		system ("clear");

		char *w[]={"fright","onomatopoeia","greedy","weather","ranger","prosecute","ritche","harvard","splendid","sprain"};

		pts=0;

		int i=0,diff=0;

		time_t t1,t2;

		srand(time(0));

		char bu[15]="fright";

		while(!strcmp(bu,*(w+i))&&diff<=6)
		{
			i = (rand()%10);

			cout << "Type : " << *(w+i) << "\n\n";

			t1 = time(0);

			cin >> bu;
			
			t2 = time(0);

			diff = t2-t1;

			if(!strcmp(bu,*(w+i))&&diff<=6)
				pts+=5;
		}

		if(strcmp(bu,*(w+i)))
			cout << "\nYOU TYPED THE WORD WORNG\n\n";

		else
			cout<<"\nYOU DID NOT MATCH THE TIME LIMIT \n\nYou took "<<t2-t1<<" seconds\n\n";
	}
};
int main()
{
	player pl1;

	int ch,g;

	here:

	g=pl1.intro();
	
	if(g == 4)
	{
		system("clear");

		cout<<"-------------------------------------------------------------------------------------\n\n";

		cout<<"                               !!!!!! Thanks for Playing !!!!!!                       \n\n";

		cout<<"-------------------------------------------------------------------------------------\n\n";
		
		exit(1);
	}
	
	pl1.info();

	ch=1;

		if(g==1)
		{
			while(ch==1)
			{
				pl1.game1();
				pl1.display();

				cout<<"Press :\n1. To play again\n2. To exit\n3. To try another game\n\n";
				cin>>ch;

				if(ch==3)
					goto here;
			}
		}

		else if(g==2)
		{
			while(ch==1)
			{
				pl1.game2();
				pl1.display();

				cout<<"Press :\n1. To play again\n2. To exit\n3. To try another game\n\n";
				cin>>ch;

				if(ch==3)
					goto here;
			}
		}

		else if(g==3)
		{
			while(ch==1)
			{
				pl1.game3();
				pl1.display();

				cout<<"Press :\n1. To play again\n2. To exit\n3. To try another game\n\n";
				cin>>ch;

				if(ch==3)
					goto here;
			}
		}

	return (0);
}
