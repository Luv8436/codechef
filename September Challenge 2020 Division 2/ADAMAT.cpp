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
		int arr[n][n];
		int operation = 0;
		for(int row=0;row<n;row++)
		{
			for(int col=0;col<n;col++)
			{
				cin>>arr[row][col];
			}
		}
		for(int col=n-1;col>0;col--)
		{
			if (arr[0][col]!=(col+1))
			{
				int curr_col = col;
				for (int i = curr_col; i > 0 ; i--)
				{
					int temp = arr[0][i];
					arr[0][i] = arr[i][0];
					arr[i][0] = temp;
				}
				operation++;
				/*
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<n;j++)
					{
						cout<< arr[i][j] << " ";
					}
					cout << endl;
				}
				*/
			}
		}	
		cout << operation <<endl;
	}
	
}

