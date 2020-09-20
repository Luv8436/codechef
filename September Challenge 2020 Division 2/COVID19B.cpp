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
		if(n==3){
		double t12 = 1/(v[1]-v[0]);
		double t23 = 1/(v[2]-v[1]);
		double t13 = 2/(v[2]-v[0]);
		if (t12>0 && t13>0)
		{
			cout << "3 3"<<endl;
		}
		else if ()
		{
			/* code */
		}
		
		


		}









		int max_affected = 0;
		int min_affected = n;
		for(int initially_affected = 0; initially_affected < n ; initially_affected++)
		{
			int arr[5];
			int people_affected = 1;
			long double time=0 ;
			for (int i = 0; i < n; i++)
			{
				if ()
				{
					/* code */
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