#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		
		int count = 0;
		
		for(unsigned int i = 0 ; i < s.length() - 1 ; i++ )
		{
			if(s[i+1]!=s[i])
			{ 
				count++;
			}
			
		}
		
		if(count < 3 )
		cout << "uniform" << endl;
		
		else
		cout << "non-uniform" << endl;
	}
}
