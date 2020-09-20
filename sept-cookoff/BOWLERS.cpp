#include <iostream>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while (test--)
	{
		int n , l ,k;
		cin >> n >> k >> l;
		if (n>l*k)
		{
			cout << -1 << endl;
		}
		else if (k==1)
		{
			if (n==1)
			{
				cout<< 1 <<endl;
			}
			else
			{
				cout << -1 << endl;
			}
			
			
		}
		
		else
		{
			/*
			for (int i = 0; i < n/k; i++)
			{
				for (int j = 1; j <= k; j++)
				{
					cout<<j<<" ";
				}
				
			}
			for (int i = 1; i <= n%k; i++)
			{
				cout << i <<" ";
			}
			*/
			for (int i = 1; i <= n; i++)
			{
				/* code */
				if (i%k==0)
				{
					/* code */
					cout<<k<<" ";
				}
				else
				{
					cout<<i%k<<" ";
				}
				
			}
			
			cout << endl;	
		}
		
		
	}
	
}