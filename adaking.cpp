#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k;
		cin >> k;
		char arr[8][8];
		memset(arr, 'X', sizeof(arr));
		memset(arr, '.', k);
		memset(arr, 'O', 1);
		for(int i=0; i<8 ; i++)
		{
			cout << "\n";
			for(int j =0 ;j < 8; j++)
			{
				cout << arr[i][j];
			}
		}
		cout << "\n";
	}
	return 0;
}
