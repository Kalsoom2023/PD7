#include<iostream>
using namespace std;
void printStars(int rowSize);
main()
{
int rowSize;
cout<<"Enter desired rowsize: ";
cin>> rowSize;
	printStars( rowSize);
}
void printStars(int rowSize)
{
	for (int y=1;y<=rowSize;y++)
	{
		for(int x=rowSize;y<=x;x--)
		{
			cout<<"*";
		}
	cout<<endl;
	}
}
//task2
#include<iostream>
using namespace std;
void printStars(int rowsize);
void printStars2(int rowsize);
main()
{
int rowsize;
cout<<"Enter desired rowsize: ";
cin>> rowsize;
	printStars2( rowsize);
		printStars( rowsize);
}
void printStars(int rowsize)
{
	int x;
	for (int y=rowsize/2;y>=1;y--)
	{
		for(int i=rowsize/2;i>y;i--)
{
	cout<<" ";
	
}
		for(x=1;x<=y;x++)
		{
			cout<<"*";
			
		}
			
			cout<<endl;
}
}
void printStars2(int rowsize)
{
	int x;
	for (int y=1;y<=rowsize/2;y++)
	{
		for(int x=rowsize/2;y<x;x--)
		{
			cout<<" ";
		}
		for(x=1;x<=y;x++)
		{
			cout<<"*";
			
		}
			
			cout<<endl;
}
}
//task3
#include<iostream>
using namespace std;
void numberAmplify(int number);
main()
{
	int number;
	cout<<"Enter a number: ";
	cin>> number;
	numberAmplify( number);
}
void numberAmplify(int number)

{
		int x=1;
		
	while(x!=number)
	{
	int i=x++;
	if(i%4==0)
	{
	
	    cout<<i*10<<", ";
	}
	if(i%4!=0)
	{
		cout<<i<<", ";
	}
}
	if(number%4==0)
	{
		cout<<number*10;
	}
	if(number%4!=0)
	{
		cout<<number;
	}

}
//task4
#include<iostream>
using namespace std;
int triangle(int number);
main()
{
int number,result;
cout<<"Enter number of Triangle: ";
cin>>number;
result=triangle(number);
cout<<"Dots in the Triangle: "<<result;
}
int triangle(int number)
{
int dots=0;
for(int n=1; n<=number; n++)
{
  dots=dots+n;
}    
  return dots;
}    
//task5
#include<iostream>
using namespace std;
bool isprime(int number);
main()
{
	int number,result;
	cout<<"Enter the number: ";
	cin>> number;
	result=isprime(number);
	cout<<result;
}
bool isprime(int number)
{
	
	
		for(int x=2;x<number;x++)
		{
			int i=number%x;
			if(i==0)
			{
				return 0;
			}
			
		}
	return 1;
	
}
//task6
#include<iostream>
using namespace std;
int primorial(int number);
bool isprime(int number);
main()
{
	int number,result;
	cout<<"Enter the number: ";
	cin>> number;
	result=primorial(number);
	cout<<result;
}
int primorial(int number)
{
	int x=2;
	int count=0;
	int ans=1;
	while(count!=number)
	{
	if(isprime(x)==true)
	{
		
		ans=ans*x;
		count++;
		
		
		
	}
	x++;
	
}
	return ans;
}
bool isprime(int number)
{
	
	
		for(int x=2;x<number;x++)
		{
			int i=number%x;
			if(i==0)
			{
				return 0;
			}
			
		}
	return 1;
}
//task7
#include<iostream>
using namespace std;
main()
{
	int days,patients,untreated=0,treated=0,result;
	cout<<"Enter number of days you visited hospital: ";
	cin>>days;
	int doctors=7;
	for(int x=1;x<=days;x++)
	{
		cout<<"Number of patients who visited hospital on day"<<x<<" :";
		cin>>patients;
			if(x%3==0&&untreated>treated)
		{
			doctors++;
		}
		if(patients>doctors)
		{
			treated=treated+doctors;
			untreated=untreated+(patients-doctors);
		}
		else
		{
			treated=treated+patients;
	}
	
}
cout<<treated;
cout<<endl<<untreated;
}
//task8


