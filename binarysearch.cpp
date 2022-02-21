#include<iostream>
using namespace std;
int main()
{
	int i,arr[10],num,first,last,mid;
	cout<<"enter 10 numbers in ascending order : ";
	for(i=0;i<6;i++){
	
	cin>>arr[i];
}
	cout<<"enter the number to be searched: ";
	cin>>num;
	first=0;
	last=5;
	while(first<=last)
	{
		if(arr[mid]<num)
		first=mid+1;
		else if(arr[mid]==num)
		{
			cout<<"\n the number"<<num<<"found at position"<<mid+1;
			break;
		}
		else
		last=mid-1;
		mid=(first+last)/2;
	}
	if(first>last)
	cout<<'\n the number'<<num<<"is not found in given array"<<endl;
	return 0;
		
}
