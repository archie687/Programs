#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array : \n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array :\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	} 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
	    	{
			  swap(arr[j],arr[j+1]);
		    }
		}
		
	} 
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	} 
	return 0;	
}