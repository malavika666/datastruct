#include<iostream>
using namespace std;
int main()
{
	int n,i=0,sum=0;
	cout<<"enter the 10 numbers\n";
	while(i<10){
    	cin>>n;
		sum=sum+n;
		i++;
		}
	cout<<"the sum of 10 numbers is:"<<sum;	
}
