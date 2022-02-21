#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter the 10 numbers\n";
	for(int i=0;i<10;i++){
		cin>>n;
		sum=sum+n;
		}
	cout<<"the sum of 10 numbers is:"<<sum;	
}
