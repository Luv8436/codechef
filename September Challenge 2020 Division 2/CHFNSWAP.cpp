#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int sum = n*(n+1)/2;
		if(sum%2)
		{
			cout << "0"<<endl;
			continue;
		}
		int index = n/2;
		int s = index*(index+1)/2;
		for(;index<n;index++)
		{
			if(s < sum/2)
			{
				s += index+1;
			}
			else
			{
				break;
			}
			
		}
		int rem = sum/2 - index*(index-1)/2;
		int count = n - (index-1);

		cout << count << endl;
	}
	
}