#include<iostream>
using namespace std;
int main()
{
	int arr[10],a1[10],a2[10],i,n,k1=0,k2=0,pos;
	cout<<"enter the size of an array: "<<endl;
	cin>>n;
	cout<<"enter the elements: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter position to split array into two\n"<<endl;
	cin>>pos;
	for(i=0;i<n;i++)
	{
		if(i<pos)
		a1[k1++]=arr[i];
		else
		a2[k2++]=arr[i];
	}
	cout<<"elements of first array: "<<endl;
	for(i=0;i<k1;i++)
	{
		cout<<a1[i]<<endl;
	}
	cout<<"elements of second array: "<<endl;
	for(i=0;i<k2;i++)
	{
		cout<<a2[i]<<endl;
	}
	cout<<"\n";
	return 0;

}
