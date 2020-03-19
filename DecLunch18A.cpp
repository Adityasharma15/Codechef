#include<bits/stdc++.h>
//INcomplete
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		
		for(int i=1;i<=n;i++)
			{
				
				int k=0;
				
				for(int j=1;j<=n;j++)
					{
						int z=1+k;
						cout << z << " ";
						k++;	
					}
					
					cout << endl;
			}
	}
	
}
