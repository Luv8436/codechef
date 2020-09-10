#include <iostream>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n;
		cin >> n;
		int v[n];
		for(int i=0;i<n;i++)
		{
			cin >> v[i];
		}
		int max_affected = 0;
		int min_affected = n;
		for(int initially_affected = 0; initially_affected < n ; initially_affected++)
		{
			int people_affected = 1;
			long double time=0 ;
			for(int i=initially_affected ; i<n-1 ;i++)
			{
				if (v[i]==v[i+1] || v[i]==0 || v[i+1]==0)
				{
					break;
				}

				long double t = 1.0/(v[i]-v[i+1]);
				if (t>0 && t>=time )
				{
					//cout << "initially affected = "<<i << "  other = "<<i+1 << " time = "<< t << endl;
					people_affected++;
					time = t;
				}
				else
				{
					break;
				}
			}
			time = 0;
			for (int i = initially_affected; i>=1; i--)
			{
				if (v[i]==v[i-1]||v[i]==0 || v[i-1]==0)
				{
					break;
				}

				long double t = 1.0/(v[i-1]-v[i]);
				if (t>0 && t>=time )
				{
					people_affected++;
					time = t;
				}
				else
				{
					break;
				}
			}
			
			//cout << "people affected = " << people_affected << "  initially infected = " << initially_affected << endl;
			if (people_affected > max_affected)
			{
				max_affected = people_affected ;
			}
			if (people_affected < min_affected)
			{
				min_affected = people_affected ;
			}
		}
		cout << min_affected << " " << max_affected << endl;
	}
	
}