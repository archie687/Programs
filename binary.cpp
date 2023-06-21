#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100],n,start,end,mid,element;
	cout<<"Enter the size of array :\n";
	cin>>n;
	cout<<"Enter the values in either asending or descending order :\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	} 
	start=0;
	end=n-1;
	cout<<"Enter the element to search :\n";
	cin>>element;
//	mid=(start+end)/2;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==element)
		{
			cout<<"Element found at index : "<<mid;
			break;
		} 
		else if(element>arr[mid])
		{
			start=mid+1;
		} 
		else if(element<arr[mid])
		{
			end=mid-1;
		} 
		else
		{
			cout<<"Number is not found.\n";
		} 
		
	} 
	return 0;
}