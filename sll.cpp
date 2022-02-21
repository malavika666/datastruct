#include<iostream>
using namespace std;
int main()
{
	int first[10],second[10],sum[10],i,n;
	cout<<"enter the numbers of elements in the array: ";
	cin>>n;
	cout<<"enter element of first array"<<endl;
	for(i=0;i<n;i++)
	cin>>first[i];
	cout<<"enter element of second array"<<endl;
	for(i=0;i<n;i++)
	cin>>second[i];
	cout<<"\n sum of elements of the array: "<<endl;
	for(i=0;i<n;i++)
	{
		sum[i]=first[i]+second[i];
		cout<<sum[i]<<endl;
	}
	return 0;
}

