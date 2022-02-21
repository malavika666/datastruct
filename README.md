# datastruct
#include<iostream><br>
using namespace std;<br>
int main()<br>
{<br>
	int arr[10],i,n;<br>
	cout<<"enter the size of an array"<<endl;<br>
	cin>>n;<br>
	cout<<"enter the elements : "<<endl;<br>
	for(i=0;i<n;i++)<br>
	{<br>
		cin>>arr[i];<br>
	}<br>
	cout<<"\n the reversed elements are: "<<endl;<br>
	for(i=(n-1);i>=0;i--)<br>
	cout<<arr[i]<<" "<<endl;<br>
	<br>
}<br>
