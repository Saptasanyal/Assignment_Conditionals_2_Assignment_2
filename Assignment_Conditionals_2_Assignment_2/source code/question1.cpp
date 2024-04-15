//Write a program to count the minimum number of notes in a given amount using the switch statement.
//Input 1: 510
//Output1 : notes of “500” = 1 and notes of “10” = 1
#include<iostream>
using namespace std;
int main()
{
	int amt;
	cout<<"Enter the amount: ";
	cin>>amt;
	switch(amt/2000!=0)
	{
		case 1:
			cout<<"notes of 2000 = "<<amt/2000<<endl;
			amt=amt%2000;
	}
	switch(amt/500!=0)
	{
		case 1:
			cout<<"notes of 500 = "<<amt/500<<endl;
			amt=amt%500;
	}
	switch(amt/200!=0)
	{
		case 1:
			cout<<"notes of 200 = "<<amt/200<<endl;
			amt=amt%200;
	}
	switch(amt/100!=0)
	{
		case 1:
			cout<<"notes of 100 = "<<amt/100<<endl;
			amt=amt%100;
	}
	switch(amt/50!=0)
	{
		case 1:	
			cout<<"notes of 50 = "<<amt/50<<endl;
			amt=amt%50;
	}
	switch(amt/20!=0)
	{
		case 1:
			cout<<"notes of 20 = "<<amt/20<<endl;
			amt=amt%20;
	}
	switch(amt/10!=0)
	{
		case 1:
			cout<<"notes of 10 = "<<amt/10<<endl;
			amt=amt%10;
	}
	switch(amt/5!=0)
	{
		case 1:
			cout<<"notes of 5 = "<<amt/5<<endl;
			amt=amt%5;
	}
	switch(amt)
	{
		case 1:
			cout<<"notes of 1 = "<<amt<<endl;
	}

	return 0;
		

	
}