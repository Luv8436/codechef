#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin >> n;
		int sum = n*(n+1)/2;
		if (sum%2 || n==0 || n==1 || n==2){
			cout << "0"<<endl;
			continue;
		}
		int index = n/2 - 1;
		int curr = index*(index+1)/2;

		while(curr < (sum/2)-n)
		{
			cout << "hi" << endl;
			index += 1;
			curr += index;
		}
		int rem = (sum/2) - curr;

		
		if (index>=rem && (n-index)>=rem)
		{
			cout << rem << endl;
			continue;
		}
		if (index < n-index)
		{
			cout << index << endl;
		}
		else
		{
			cout << n-index << endl;
		}
	}
}