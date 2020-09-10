#include <bits/stdc++.h>
#include <algorithm> 
#include <iostream> 
using namespace std;
int main()
{
	int test;
	cin >> test;
	for(int t=0;t<test;t++)
	{
		int n;
		cin>>n;
		int arr[n];
		int operation = 1;
		int x;
		cin >> x;
		arr[0] = x;
		for(int i=1;i<n;i++)
		{
			cin >> x;
			sort(arr , arr + operation );
			if(!binary_search(arr ,arr+operation , x))
			{
				arr[operation] = x ;
				operation++;
			}
		}
		cout << operation<< endl;
		// The whole question boils down to find distinct elements from these n elements.

	}
}