#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ll t;
	cin >> t;

	while(t--)
	{

		ll k, w, w1, w2;

		cin >> k >> w >> w1 >> w2;

		int flag = 3;

		if((w + w1 + w2) <= k)
		{
			flag = 1;
			cout << "1" << "\n";
		}

		// else if(w >= k && w1 >= k && w2 >= k)
		// {
		// 	flag = 2;
		// 	cout << "3" << "\n";
		// }

		else if( (w + w1) > k && (w1 + w2) > k && (w2 + w) > k)
		{
			flag = 2;
			cout << "3" << "\n";
		}

		else if(flag == 3)
			cout << "2" << "\n";

	}
}