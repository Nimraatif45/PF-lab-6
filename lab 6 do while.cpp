//Write a C++ program that continuously asks the user to input positive numbers. The program
 //calculates the running total and the number of inputs. and then the program
  //displays the average of all the entered numbers using do while loop .
  #include<iostream>
using namespace std;
int main()
{
	int sum=0,num;
	float avg;
int i=1;
	do
	{
	cout<<"Enter the Positive Numbers(type end to stop) ="	<<endl;
cin>>num;
sum=sum+num;
		i++;
		}
		while(i<5);
	
		
		avg=sum/4;
		
		cout<<"Average of Numbers are="<<avg<<endl;
		
         return 0;		
}