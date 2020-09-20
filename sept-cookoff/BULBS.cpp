#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int test;
	cin>>test;
	while (test--)
	{
		/* code */
		int k , n;
		cin >> n >> k;
		string s;
		if (n==1)
		{
			if (s == "0")
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
			
			
			continue;
		}
		
		cin>>s;
		int length = s.length();
		int cuts = 0;
		int curr_size = 0;
		vector<int> segment ;
		for (int i = 0; i < length; i++)
		{
			/* code */
			if (s[i]=='0')
			{
				/* code */
				curr_size +=1;
			}
			else
			{
				if (curr_size!=0)
				{
					segment.push_back(curr_size);
					curr_size = 0;
				}
				
			}	
		}
		if (s[length-1]=='0')
		{
			/* code */
			segment.push_back(curr_size);
		}
		cuts = 2*segment.size() ;
		if (s[0]=='0')
		{
			/* code */
			cuts -= 1;
		}
		if (s[length-1]=='0')
		{
			/* code */
			cuts -= 1;
		}
		if (k>=cuts)
		{
			/* code */
			cout << 0 << endl;
			cout << cuts;
		}
		else
		{
			sort(segment.begin(), segment.end(), greater<int>()); 
			int ans=0 ;
			if (s[0]=='1' && s[length-1]=='1')
			{
				/* code */
				for (int i = k/2; i < segment.size(); i++)
				{
					/* code */
					ans += segment[i];
				}
				cout << ans << endl;
				continue;
				
			}
			else if ((s[0]=='0' && s[length-1]=='1')||(s[0]=='1' && s[length-1]=='0') )
			{
				int ans = 0;
				/* code */
				if (k%2)
				{
					ans += segment[0];
					for (int i = (k/2)+1 ; i < segment.size(); i++)
					{
						ans += segment[i];
					}
					cout << ans << endl;
					continue;
				}
				else
				{
					for (int i = k/2; i < segment.size(); i++)
					{
						/* code */
						ans += segment[i];
					}
					cout << ans << endl;
					continue;
				}	
			}
			else
			{
				int ans = 0;
				if (k%2)
				{
					if (segment[0]>segment[segment.size()-1])
					{
						ans+=segment[0];
						for (int i = k/2+1; i < segment.size(); i++)
						{
							/* code */
							ans += segment[i];
						}
						cout << ans << endl;
						continue;

					}
					else
					{
						ans+=segment[segment.size()-1];
						for (int i = k/2; i < segment.size()-1; i++)
						{
							/* code */
							ans += segment[i];
						}
						cout << ans << endl;
						continue;
					}
					
					
				}

				else
				{
					int ans = 0;
					segment[0] += segment[segment.size()-1];
					sort(segment.begin(), segment.end(), greater<int>());
					for (int i = k/2; i < segment.size(); i++)
					{
						/* code */
						ans += segment[i];
					}
					cout << ans << endl;
					continue;

				}
				
				
			}
			
			
			
		}
		
		
		
		
	}
	
}