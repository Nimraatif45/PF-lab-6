//Create a C++ program that asks the user to enter a password repeatedly.
// The loop will continue until the user enters the correct password, "12345". Once the correct password is entered, the loop stops,
// and access is granted. This allows the user to keep trying until they input the correct password using while loop .
#include<iostream>
using namespace  std;
int main()
{
	
		int pass;
		int correctpasss=1234;
     cout<<"Enter the Password ="<<endl;
cin>>pass;
	int i=1;
	{
		while(i>0)
		{
			cout<<"Enter the Password (press (12345) if you want to stop)="	<<endl;
           cin>>pass;
           if(pass!=12345)	
	{
		cout<<"Wrong Password"<<endl;
	}
	else
	{
		break;
	}
	cout<<"Access is Granted"<<endl;		
		i++;
			}
		}
	return 0;
}