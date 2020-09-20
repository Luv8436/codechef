#include <bits/stdc++.h>
#include <algorithm> 
#include <iostream> 
using namespace std;

int linearSearch(long int *arr , int n , long int target);
int main()
{
	int test;
	cin >> test;
	for(int t=0;t<test;t++)
	{
		int n;
		cin>>n;
		long int arr[n];
		int operation = 0;
		long int x;

		
		for(int i=0;i<n;i++)
		{
			cin >>x;
			
		}
		cout << operation<< endl;
		// The whole question boils down to find distinct elements from these n elements.

	}
}

int linearSearch(long int *arr , int n , long int target)
{
	//cout << "searching "<< target << " in arrary of size"<< n << endl;
	if (n==0)
	{
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==target)
		return 1;
	}
	return 0;
}