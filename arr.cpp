#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,n;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	cout<<"enter the elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n the reversed elements are: "<<endl;
	for(i=(n-1);i>=0;i--)
	cout<<arr[i]<<" "<<endl;
	
}
