#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
	long long int n ,t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		double arr[n];
		
		for(int i=0; i<n ; i++ )
		{
			cin >> arr[i];
		}
		
		sort(arr , arr + n);
		
		double ans = ((arr[n-1] + arr[n-2])/2)  ;
		
		
		for(int i= n-3 ; i > -1 ; i--)
		{ 
 			ans = ((arr[i] + ans)/2);
		}
		
		cout <<  setprecision(8) << fixed <<  ans << endl;
	}
}
