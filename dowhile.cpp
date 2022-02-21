#include<iostream>
using namespace std;
int main()
{
	int n,i=0,sum=0;
	cout<<"enter the 10 numbers\n";
	do
	{
		cin>>n;
		sum+=n;
		i++;
	}
	while(i<10);	
	cout<<"the sum of 10 numbers is: "<<sum;
	return 0;
	
}

