
/*
Examination software
Shriniwas Nayak
2254 SE 2
*/
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<ctime>
#define MAX 200
#define QUESIZE 3
#define NOSTU 50
#define clearscr system("clear")// do not use semicolan
using namespace std;
class General
{
public:
	void intro()
	{
		cout << "----------------------------Welcome !!!! to Exam Software-----------------------------------\n\n\n";
	}

	int choice()
	{
		int ch;

		clearscr;

		cout << "\n\n\n--------------------------HOME PAGE-------------------------------------\n\n\n";

		cout << "\nPress :\n1) Student Login\n2) Teacher Login\n3) To exit\n\n";

		cin >> ch;

		return (ch);
	}
};

int timet;

class Teacher
{
private :
	int *mans,*sans,*csans,mq,sq,csq;
	char **mques,**sques,**csques;
	char name[20];
	char pass[11];
public:

	Teacher()
	{
		int i;

		strcpy(pass,"Teacher1");
		mans = new int[QUESIZE];
		sans = new int[QUESIZE];
		csans = new int[QUESIZE];

		mques = new char* [QUESIZE];
		sques = new char* [QUESIZE];
		csques = new char* [QUESIZE];

		for(i=0;i<QUESIZE;i++)
			mques[i] = new char[MAX];
		for(i=0;i<QUESIZE;i++)
			sques[i] = new char[MAX];
		for(i=0;i<QUESIZE;i++)
			csques[i] = new char[MAX];
	}

	void setpaper()
	{
		mans[0]=4;
		mans[1]=3;
		mans[2]=2;

		strcpy(mques[0],"\nNumbers divisible by 5 as well as by 3 less than 1000 are\n\t1. 45\n\t2. 50\n\t3. 70\n\t4. 60\n\n");
		strcpy(mques[1],"\nProbablity of obtaining sum 7 on pair of two dices is\n\t1. 10/36\n\t2. 7/36\n\t3. 6/36\n\t4. 8/36\n\n");
		strcpy(mques[2],"\nThree times a number is eight than its square the number is\n\t1. 6\n\t2. 4\n\t3. 3\n\t4. 5\n\n");
		
		sans[0]=3;
		sans[1]=4;
		sans[2]=2;

		strcpy(sques[0],"\nStibium is also known as\n\t1. Lead\n\t2. Tungsten\n\t3. Antimony\n\t4. Rhodium\n\n");
		strcpy(sques[1],"\nOnly artery carrying impure blood is\n\t1.Superior Vena cava\n\t2. Inferior Vena cava\n\t3. Medula oblongata\n\t4. Pulmonary artery\n\n");
		strcpy(sques[2],"\nDecelaration required to stop from 20m/s in distance of 50m is :\n\t1. -4 m/s\n\t2. 4 m/s\n\t3. 8 m/s\n\t4. -8m/s\n\n");

		csans[0]=3;
		csans[1]=4;
		csans[2]=3;

		strcpy(csques[0],"\nint a[3] = {0,1,2}\n *&&*&*(a+1) gives\n\t1. 1\n\t2. value at address of a[1]\n\t3. address of a[1]\n\t4. error\n\n");
		strcpy(csques[1],"\nTo store string - 'hello sir' space required is :\n\t1. 9 bytes\n\t2. 11 bytes\n\t3. 12 bytes\n\t4. 10 bytes\n\n");
		strcpy(csques[2],"\nWhich is invalid variable name :\n\t1. Int\n\t2. _t\n\t3. %per\n\t4. Both 3 and 4\n\n");
	}

	Teacher (char *nn,char *pp,int sizeans)
	{
		strcpy(name,nn);
		strcpy(pass,pp);

		mans = new int[sizeans];
		sans = new int[sizeans];
		csans = new int[sizeans];
	}

	void setpassword()
	{
		
		clearscr;

		int i,up=0,sp=0;

		char bu[11];

		cout << "\n\nEnter original password :\n\n";

		cin >> bu;

		if(!(strcmp(bu,pass)))
		{
			cout << "\n\nEnter new password :\nMaximum 10 characters\nPassword must contain at least 1 uppercase letter and 1 special or numeric character\n\n";

			up=0;
			sp=0;

			while(1)
			{
				cin >> pass;

				i=0;

				while(pass[i]!='\0')
				{
					if(pass[i]>=65&&pass[i]<=90)
						up=1;

					if(pass[i]>=33&&pass[i]<=64)
						sp=1;

					i++;
				}

				if(!(sp&&up))
					cout << "\n\nInvalid password\nRE-ENTER\n\n";

				else 
				{
					cout << "\n\nPassword sucessfully changed\n\n";
					break;
				}
			}
		}

		else
		{
			cout << "----------------AUTHENTICATION ERROR !------------------\n";
			cout << "\n\nPress any number to continue\n\n";
			cin >> i;
			setpassword();
		}
	}

	void checkpassword()
	{
		clearscr;

		char bu[11];

		cout << "Enter name and password\n";
		cin >> name;

		while(1)
		{
			cin >> bu;

			if(!(strcmp(pass,bu)))
			{
				return ;
			}

			else 
				cout << "----------------AUTHENTICATION ERROR !------------------\nRe-enter password\n";
		}
	}

	void teacherintro()
	{
		clearscr;

		cout << "Welcome to teacher login " << name << "\n\n";
	}
	
	int operation()
	{
		int i=1;

		while(i<=3)
		{
			cout << "\nPress :\n1. To change the password\n2. To see results\n3. To set time\n4. To exit\n\n";

			cin >> i;

			switch(i)
			{
			case 1:
				setpassword();
				return (0);
				break;
			case 2:
				return (1);
				break;
			case 3:
				settime();
				return (0);
				break;
			}
		}

		return (4);
	}

	void settime()
	{
		clearscr;

		char timein[11];

		int h=0,m=0,s=0;

		timet=0;

		cout << "Enter the time of the test in HH::MM::SS format\n";

		cin >> timein;

		h+=(timein[0]-48);
		h*=10;
		h+=(timein[1]-48);
		h*=3600;

		m+=(timein[4]-48);
		m*=10;
		m+=(timein[5]-48);
		m*=60;

		s+=(timein[8]-48);
		s*=10;
		s+=(timein[9]-48);

		timet = h+m+s;

		cout << "Entered time is : " << timet << " seconds" << "\n\n";
	}

	int mtest()
	{
		int i,ans,marks=0,q=0;
		
		clearscr;

		for(i=0;i<QUESIZE;i++)
		{
			clearscr;

			q++;

			cout << "\tQuestion " << q << " :\n\n";

			cout << mques[i];

			cout << "Enter answer\n";

			cin >> ans;

			if(ans<=4)
			{
				if(ans==mans[i])
					marks+=5;
				else
					marks-=1;
			}
		}

		return (marks);
	}

	int stest()
	{
		int i,ans,marks=0,q=0;
		
		clearscr;

		for(i=0;i<QUESIZE;i++)
		{
			clearscr;

			q++;

			cout << "\tQuestion " << q << " :\n\n";
			
			cout << sques[i];

			cout << "Enter answer\n";

			cin >> ans;

			if(ans<=4)
			{
				if(ans==sans[i])
					marks+=5;
				else
					marks-=1;
			}
		}

		return (marks);
	}

	int cstest()
	{
		int i,ans,marks=0,q=0;
		
		clearscr;

		for(i=0;i<QUESIZE;i++)
		{
		
			clearscr;
			
			q++;

			cout << "\tQuestion " << q << " :\n\n";

			cout << csques[i];

			cout << "Enter answer\n";

			cin >> ans;

			if(ans<=4)
			{
				if(ans==csans[i])
					marks+=5;
				else
					marks-=1;
			}
		}

		return (marks);
	}

};

class Student
{
public:
	char name [20];
	int rollname;
	int mm,sm,csm;
	float tot;

	Student()
	{
		mm=0;
		sm=0;
		csm=0;

		tot=0;
	}

	void getdata()
	{
		clearscr;

		cout << "\nEnter roll number\n";

		cin >> rollname;

		cout << "\nEnter name\n";

		cin >> name;
	}

	void test()
	{
		int st;

		clearscr;
		instruction();

		cout << "Press 1 to start the test you have " << timet/60 << " minutes and " << timet%60 << " seconds\n\n";

		cin >> st;
	} 

	void instruction()
	{
		cout << "\n\nThe Paper consists of three sections\n1. Maths\n2. Science\n3. Computer Science\n\nEach correct answer gives +5 marks and incorrect answer gives -1 marks\n";
		cout << "For every 10 seconds extra taken 1 mark will be reduced from total\nEnter your option to answer (eg 1 enter) press 5 to skip\n\n";
	}
	float avg(void)
	{
		tot+=mm+sm+csm;

		return (tot);
	}

	void display()
	{
		cout << rollname << "  ";
		cout << name;
		cout << "  Maths : " << mm << "\t" << "Science : " << sm << "\t" << "Computer Science : " << csm << "\n";
		cout << "Percentage : " << 100*(tot/(QUESIZE*5*3)) << "\n\n";

	}

	void filewrite()
	{		
		FILE *fp;

		fp=fopen("result.txt","a");

		if(fp!=NULL)
		{
			fprintf(fp,"%d %s Maths : %d\tScience : %d\tComputer Science : %d\nPercentage : %f\n\n",rollname,name,mm,sm,csm,100*(tot/(QUESIZE*5*3)));
		}
		
		fclose(fp);

	}

	void reduce(int rm)
	{
		tot-=rm;
	}
	
	void totcal()
	{
		tot+= mm+sm+csm;
	}

};

class Studentdata
{
public:
	Student *s;

	Studentdata()
	{
		s = new Student[NOSTU];
	}

	static int i;

	void read()
	{
		i++;

		s[i].getdata();
	}

	float avg()
	{
		int sum=0,k;

		for(k=0;k<=i;k++)
			sum+=(s[k].mm+s[k].sm+s[k].csm);

		sum/=k;

		return (sum);
	}

	int max()
	{
		int max,k,id=0;

		max = s[0].tot;

		for(k=0;k<=i;k++)
		{
			if(s[k].tot>max)
				id = k;
		}

		return (id);
	}

	int min()
	{
		int min,k,id=0;

		min = s[0].tot;

		for(k=0;k<=i;k++)
		{
			if(s[k].tot<min)
				id = k;
		}

		return (id);
	}

	float pass()
	{
		int k=0;
		float count=0;

		for(k=0;k<=i;k++)
		{
			if(s[k].tot>=(QUESIZE*5*3)*0.3)
				count++;
		}

		return (count);
	}

	void sort(int ch)
	{
		int j,k;

		Student bu;

		for(j=0;j<i;j++)
		{
			for(k=0;k<i-j;k++)
			{
				if(ch==1&&s[k].mm<s[k+1].mm)
				{
					bu=s[k];
					s[k]=s[k+1];
					s[k+1]=bu;
				}

				else if(ch==2&&s[k].sm<s[k+1].sm)
				{
					bu=s[k];
					s[k]=s[k+1];
					s[k+1]=bu;
				}

				else if(ch==3&&s[k].csm<s[k+1].csm)
				{
					bu=s[k];
					s[k]=s[k+1];
					s[k+1]=bu;
				}

				else if(ch==4&&s[k].tot<s[k+1].tot)
				{
					bu=s[k];
					s[k]=s[k+1];
					s[k+1]=bu;
				}

				else if(ch==5&&s[k].rollname>s[k+1].rollname)
				{
					bu=s[k];
					s[k]=s[k+1];
					s[k+1]=bu;
				}

			}
		}
	}

	int binsearch(int num)
	{
		int l=0,u=i,mid;

		for(mid=(l+u)/2;l<=u;mid=(l+u)/2)
		{
			if(s[mid].rollname==num)
				return (mid);

			else if(num>s[mid].rollname)
				l=mid+1;

			else
				u=mid-1;
		}

		return (-1);
	}


};

int Studentdata::i = -1; 

int main()
{
	General g;

	Studentdata sd;

	time_t t0,t2,t3,t4;

	Teacher t1;

	int ch=1,bu,chop=0;

	g.intro();

	t0 = time(0);
	t2 = time(0);

	while(t2-t0<3)
		t2 = time(0);

	while(ch<=2)
	{
		ch = g.choice();

		if(ch==2)
		{
			int val;

			t1.checkpassword();

			t1.teacherintro();

			t1.setpaper();

			do
			{
				chop=t1.operation();

				if(chop==1)
				{
					if(Studentdata::i==-1)
					{
						cout << "\n\nNo results to display\n\nPress 1 to continue\n\n";
						cin >> bu;
					}

					else
					{
						int k=0,rt;

						clearscr;

						cout << "\nPress :\n1. General result\n2. Sorted result according to Maths\n3. Sorted result according to Science\n4. Sorted result according to Computer science\n5. Sorted result according to total\n6. Sorted result according to roll number\n7. Search a student\n\n";

						cin >> rt;

						switch(rt)
						{
						case 1:

							cout << "\n\n";
							for(k=0;k<=Studentdata::i;k++)
							{
								cout << k+1 << ". ";
								sd.s[k].display(); 
							}

							cout << "\n\n\nTotal students : " << Studentdata::i+1 << "\n";
							cout << "\nMaximum score :\n" ;
							sd.s[sd.max()].display();
							cout << "\nMinimum score :\n";
							sd.s[sd.min()].display();
							cout << "\nStudents above 30% (passed ) :" << sd.pass();
							cout << "\nPassing result of class :" << (sd.pass()/(Studentdata::i+1))*100;

							cout << "\n\n\nPress 1 to continue\n\n";

							cin >> bu;

							break;

						case 2:
							sd.sort(1);
							cout << "\nResult according to Maths marks is :\n";
							for(k=0;k<=Studentdata::i;k++)
							{
								cout << k+1 << ". ";
								sd.s[k].display(); 
							}
							break;

						case 3:
							sd.sort(2);
							cout << "\nResult according to Science marks is :\n";
							for(k=0;k<=Studentdata::i;k++)
							{
								cout << k+1 << ". ";
								sd.s[k].display(); 
							}
							break;

						case 4:
							sd.sort(3);
							cout << "\nResult according to Computer Science marks is :\n";
							for(k=0;k<=Studentdata::i;k++)
							{
								cout << k+1 << ". ";
								sd.s[k].display(); 
							}
							break;

						case 5:
							sd.sort(4);
							cout << "\nResult according to Total marks is :\n";
							for(k=0;k<=Studentdata::i;k++)
							{
								cout << k+1 << ". ";
								sd.s[k].display(); 
							}
							break;

						case 6:
							sd.sort(5);
							cout << "\nResult according to Roll number is :\n";
							for(k=0;k<=Studentdata::i;k++)
							{
								cout << k+1 << ". ";
								sd.s[k].display(); 
							}
							break;

						case 7:
							sd.sort(5);

							cout << "\n\nEnter roll number to be searched\n\n";

							int num,id;

							cin >> num;

							id = sd.binsearch(num);

							if(id==-1)
								cout << "\nRoll number " << num << " did not appear for the test\n\n";

							else
								sd.s[id].display();

							break;									

						}
					}
				}
			}while(chop!=4);
		}

		else if(ch==1)
		{
			sd.read();
			sd.s[Studentdata::i].test();
			t3 = time(0);
			sd.s[Studentdata::i].mm=t1.mtest();
			sd.s[Studentdata::i].sm=t1.stest();
			sd.s[Studentdata::i].csm=t1.cstest();
			t4 = time(0);

			int diff;
		
			diff=t4-t3;
			if(diff>timet)
			{
				int rm;

				rm=(diff-timet)/10;
			
				cout << "\nTIME EXCEDED\nYou took " << (diff-timet) << " seconds extra\n" << rm << " marks will be reduced from total\n\n";
	
				sd.s[Studentdata::i].reduce(rm);
			}
 			
				
			sd.s[Studentdata::i].totcal();
			sd.s[Studentdata::i].display();
			sd.s[Studentdata::i].filewrite();

			cout << "\n\nEnter 1 to continue\n\n";
			
			cin >> bu;
		}
	}


	cout << "Note to teacher :\nResults stored in file result.txt\n\n";

	return (0);
}
